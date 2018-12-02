#include <stdio.h>

int main()
{
	int n, maior = 0;
	
	do{
		scanf("%d", &n);
		
		if(n > maior)/*se a entrada for maior que quer o maior*/
			maior = n;/*maior receber n*/
		
	}while(n != 0);/*enquanto a entrada for diferente de 0 executar*/
	
	printf("%d", maior);
	return 0;
}