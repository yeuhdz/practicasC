#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<unistd.h>
int main(int argc, char*argv[])
{
	if(argc!=2){			//Verifica que se pase la ruta de un archivo por la terminal
		 fprintf(stderr,"Indica un archivo para calcular su tamaño\n");
		 exit(45);
	}

	int fd, leidos;			//Declaración del descriptor de archivo y los bytes leidos
	fd = open(argv[1],O_RDONLY);	//Abre el archivo con permisos de lectura
	if(fd==-1)fprintf(stderr,"Error al abrir el archivo\n");//Si falla al abrir, escribe en el error estándar
	leidos = lseek(fd,0,SEEK_END);	//Se coloca al final del archivo y regresa el numero de bytes
	close(fd);
	printf("Tamaño del archivo %s:\n\tBits: %d\n\tBytes: %d\n\tKiloBytes: %.3f\n",argv[1],leidos*8,leidos,leidos/1024.0);
}


