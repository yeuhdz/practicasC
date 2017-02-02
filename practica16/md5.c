#include <string.h>
#include <openssl/md5.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
	if(argc != 2){
		fprintf(stderr,"Debes indicar el archivo para obtener su md5 \n");
		exit(45);
	}
	char *buffer = 0;	//guarda toda la cadena del archivo
	unsigned long tam;
	FILE *file = fopen (argv[1], "rb");	//Abre el archivo para obtener su hash
	if (file){
		fseek (file, 0, SEEK_END);	//busca final del archivo
	  	tam = ftell (file);		//cuenta bytes desde el inicio al fin del archivo
	  	fseek (file, 0, SEEK_SET);	//regresa al inicio del archivo
	  	buffer = (char*)malloc(tam);	//Aparta espacio de forma dinamica basándose en el tamaño
	  	if (buffer){			
			fread(buffer, 1, tam, file); //lee elementos de 1 byte hasta "tam" bytes del archivo
	  	}
	  	fclose (file);
	}

	unsigned char digest[16]; 		//resultado del cálculo
	MD5_CTX ctx;				//Estructura definida en md5.h para el cálculo
	MD5_Init(&ctx);
	MD5_Update(&ctx, buffer, strlen(buffer));
	MD5_Final(digest, &ctx);

  	char mdString[33];			//El hash (16 bytes), se convierte a hexadecimal
    	for(int i = 0; i < 16; i++)
         	sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    	printf("%s - MD5:\t%s\n",argv[1], mdString);
    	return 0;

}
