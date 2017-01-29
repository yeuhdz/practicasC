/*

Cambia el programa static.c para que todas las variables "vivan" en el " heap", 
o que al menos todo se trate como variable de tipo "apuntador".

Si no puedes hacer lo anterior, solamente redúcelo.
*/
#include<stdio.h>

int main(){
	char c[]= {'h','o','l','a','\0'};
	for(int i=0;c[i]!='\0';i++){
		printf("%c\n",c[i]);
	}
}

