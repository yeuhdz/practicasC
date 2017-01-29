#include <stdio.h>

main(){
	int a, n, i, j;
	printf("Dame un numero: ");
	scanf("%i",&n);
	
	for(i=2;i<=n;i++){
		a=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				a++;
			}
		}
		if(a==2){
			printf("%i\n",i);
		}
	}
}

