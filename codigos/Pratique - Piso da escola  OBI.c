#include <stdio.h>

int main(){
	
	int largura, comprimento;
	
	scanf("%d %d", &largura, &comprimento);
	
	
	printf("%d ", largura*comprimento + (largura - 1)*(comprimento - 1));
	printf("%d", 2 * (largura - 1)+ 2 *(comprimento - 1));
	return 0;
}