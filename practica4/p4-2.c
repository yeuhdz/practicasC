#include <stdio.h>

main(){
	int n, i;
	printf("Dame un numero: ");
	scanf("%i",&n);
	for(i=1;i<=n;i++){
		if(i%2!=0){
			printf("%i\n",i);
		}
			
	}
}

