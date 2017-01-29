#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
        if(argc<2)
        {
                fprintf(stderr,"Se necesita un argumento!\n");
                exit(1349);
        }       
        printf("%x\n",argv[argc-1]);
}

