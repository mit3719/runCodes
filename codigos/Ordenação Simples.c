#include <stdio.h>

int main()
{
	int k, aux, i, j;
	
	scanf("%d", &k);
	
	int vet[k];
	
	for(i = 0; i < k; i++)
		scanf("%d", &vet[i]);
	
	for(i = 1; i < k; i++){
		aux = vet[i];
		for(j = i - 1; j >= 0 && vet[j] > aux; j--){
			vet[j+1] = vet[j];
			vet[j] = aux;
		}
	}
	for(i = 0; i < k; i++){
		printf("%d ", vet[i]);
	}
	return 0;
}