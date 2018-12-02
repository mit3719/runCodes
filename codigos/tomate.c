#include <stdio.h>
/**
 * A fazenda fartura tem uma plantação de tomates no formato retangular, sub-dividida em N linhas e M colunas de canteiros quadrados. As linhas são numeradas de 1 a N, e as colunas são numeradas de 1 a M. A produção de tomates de cada canteiro é registrada ao final de cada safra para que a adubação possa ser melhor distribuída na próxima safra. Dada a produção de cada canteiro, faça um programa para determinar a linha e a coluna do canteiro com a menor produção de tomates.

Entrada
N e M, indicando, respectivamente a quantidade de linhas e colunas e os valores de cada canteiro.

Saída
O número da linha e da coluna, além do valor da menor safra.


 */

int main(){
	
	int n, m, valores; 
	int i, j, minL, minC, minimo;
	
	scanf("%d %d", &n, &m);
	
	minimo = 201; /*inicializando com um valor para poder testa se os valores são menores que esse*/
		
	for(i = 1; i <= n; i++){
		for(j = 1; j <= m; j++){
			scanf("%d", &valores);
			
			if(valores < minimo){
				minL = i;//recebe a linha do menor elemento
				minC = j;//recebe a coluna do menor elemento
				minimo = valores;//recebe o menor valor da plantação
			}
		}
	}
	printf("%d %d %d", minL, minC, minimo);
	return 0;
}