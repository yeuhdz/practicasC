#include <stdio.h>
#include <math.h>


main(){
	float b,h,l;
	int opc;
	
	printf("Selecciona una opcion:\n1. Trinagulo\n2. Cuadrado\n3. Rectangulo\n");
	scanf("%i",&opc);

	switch(opc){

	case 1: 
		printf("Dame la medida de la base: ");
		scanf("%f",&b);
		printf("Dame la medida de la altura: ");
		scanf("%f",&h);
		printf("El area del triangulo es: %2.f\n", (b*h)/2);
		break;
	case 2:
		printf("Dame la medida de un lado: ");
		scanf("%f",&l);
		printf("El area del cuadrado es de: %2.f\n", l*l);
		break;
	case 3: 
		printf("Dame la medida de la base: ");
                scanf("%f",&b);
                printf("Dame la medida de la altura: ");
                scanf("%f",&h);
                printf("El area del triangulo es: %2.f \n", b*h);
                break;
	default:
		printf("Opcion Incorrecta");

	}
	
	
}
