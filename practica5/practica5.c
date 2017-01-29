#include <stdio.h>

void main()
{
	int n,res;
	printf("Dame un numero: ");
	scanf("%i",&n);
	res=factorial(n);
	printf("el factorial de %d es: %d\n",n,res);
}

int factorial(int n){
	int r;
	if(n==1)
		return 1;
	r=n*factorial(n-1);
	return(r);
		
	

}
