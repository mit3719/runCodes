#include <stdio.h>
/**
 * A fazenda fartura tem uma planta��o de tomates no formato retangular, sub-dividida em N linhas e M colunas de canteiros quadrados. As linhas s�o numeradas de 1 a N, e as colunas s�o numeradas de 1 a M. A produ��o de tomates de cada canteiro � registrada ao final de cada safra para que a aduba��o possa ser melhor distribu�da na pr�xima safra. Dada a produ��o de cada canteiro, fa�a um programa para determinar a linha e a coluna do canteiro com a menor produ��o de tomates.

Entrada
N e M, indicando, respectivamente a quantidade de linhas e colunas e os valores de cada canteiro.

Sa�da
O n�mero da linha e da coluna, al�m do valor da menor safra.


 */

int main(){
	
	int n, m, valores; 
	int i, j, minL, minC, minimo;
	
	scanf("%d %d", &n, &m);
	
	minimo = 201; /*inicializando com um valor para poder testa se os valores s�o menores que esse*/
		
	for(i = 1; i <= n; i++){
		for(j = 1; j <= m; j++){
			scanf("%d", &valores);
			
			if(valores < minimo){
				minL = i;//recebe a linha do menor elemento
				minC = j;//recebe a coluna do menor elemento
				minimo = valores;//recebe o menor valor da planta��o
			}
		}
	}
	printf("%d %d %d", minL, minC, minimo);
	return 0;
}