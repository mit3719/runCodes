#include <stdio.h>

int main()
{
	int numI, numF, divisores, soma_primos = 0;
	
	scanf("%d %d", &numI, &numF);
	
	int i, j;
	for(i = numI; i <= numF; i++){
		divisores = 0;
		for(j = 1; j <= i; j++){
			if(i%j == 0){
				divisores++;
			}
		}
		if(divisores == 2){
			soma_primos += i;
		}
	}
	printf("%d", soma_primos);
	return 0;
}