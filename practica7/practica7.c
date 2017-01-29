#include <stdio.h>

//aplicar el cambio y poder regresar la cadena original

main(){
	char cadena[20];
	int i;
	printf("dame una palabra: ");
	scanf("%s",&cadena);
	for(i=0;cadena[i]!='\0';i++){
		printf("%c",cadena[i]^1);
	}
	printf("\n");
}

