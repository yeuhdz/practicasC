#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) //argv es un arreglo de apuntadores
{
	if(argc<2)
	{
		fprintf(stderr,"Se necesita un argumento!");
		exit(1349);
		}
	printf("%d\n",atoi(argv[argc-1])); //El último elemento es 'argc-1'
}
