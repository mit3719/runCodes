#include <stdio.h>

int main()
{
	int i, n, nAcessos, soma = 0, dia = 0;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){/*para cada dia*/
		scanf("%d", &nAcessos);
		
		if(soma >= 1000000) continue; // se a pagina j� tiver alcan�ado 1 milh�o
		
		soma += nAcessos; // soma os acessos
		dia++;
	}
	printf("%d", dia);
	return 0;
}