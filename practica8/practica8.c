/*
Base de datos de becarios con estucturas
*/
#include<stdio.h>
#include<string.h>
struct becario{
	char nombre[12];
	int edad;
	float promedio;
	char procedencia[12];
	int generacion;
	unsigned int proyecto:1; //Campo de bits (en este caso solo puede guardar 1 bit)
};

struct becario crear(char *nombre, int edad, float promedio, char *procedencia, int generacion, int proyecto)
{
	struct becario bec;
	strcpy(bec.nombre,nombre);
	bec.edad=edad;
	bec.promedio=promedio;
	strcpy(bec.procedencia,procedencia);
	bec.generacion=generacion;
	bec.proyecto = proyecto;
	return bec; //Regresa una variable de tipo becario
}


int main()
{
	struct becario bec[8];//arreglo de tipo becario
	bec[0] = crear("Alan",22,8.8,"Insurgentes",11,1);
	bec[1] = crear("Virgilio",22,9.8,"FI",11,1);
	bec[2] = crear("Angel",34,9,"La Salle",11,1);
	bec[3] = crear("Gonzalo",23,9.6,"Ciencias",11,1);
	bec[4] = crear("Saine",22,8.8,"FI",11,1);
	bec[5] = crear("Oscar",23,9.8,"ESCOM",11,1);
	bec[6] = crear("Jonathan",23,9.5,"FI",11,1);
	bec[7] = crear("Jenifer",22,8.8,"FCA",11,1);
	
	for(int i=0;i<8;i++){
		printf("%s\t\t%i\t%.2f\t%s\t%i\t%i\n",bec[i].nombre, bec[i].edad, bec[i].promedio, bec[i].procedencia, bec[i].generacion, bec[i].proyecto);
	}
}
