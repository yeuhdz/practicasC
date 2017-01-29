//Hernandez Torres Yeudiel
//11G
//Practica 3. Fin del mundo

#include <stdio.h>
#include <limits.h>
#include <time.h>

void main(){
	time_t seg=(time_t)INT_MAX; //cast INT_MAX --> time_t
	printf("La muerte sera el %s ",ctime(&seg));

}
