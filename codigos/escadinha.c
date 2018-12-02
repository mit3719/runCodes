#include <stdio.h>
/**
 * Dizemos que uma sequ�ncia de n�meros � uma escadinha, se a diferen�a entre n�meros consecutivos � sempre a mesma. Por exemplo, �2, 3, 4, 5� e �10, 7, 4� s�o escadinhas. Note que qualquer sequ�ncia com apenas um ou dois n�meros tamb�m � uma escadinha!

Neste problema estamos procurando escadinhas em uma sequ�ncia maior de n�meros. Dada uma sequ�ncia de n�meros, queremos determinar quantas escadinhas existem. Mas s� estamos interessados em escadinhas t�o longas quanto poss�vel. Por isso, se uma escadinha � um peda�o de outra, consideramos somente a maior. Por exemplo, na sequ�ncia �1, 1, 1, 3, 5, 4, 8, 12� temos 4 escadinhas diferentes: �1, 1, 1�, �1, 3, 5�, �5, 4� e �4, 8, 12�.

Entrada
A primeira linha da entra cont�m um inteiro N indicando o tamanho da sequ�ncia de n�meros. A segunda linha cont�m N inteiros definindo a sequ�ncia.

Sa�da
Imprima uma linha contendo um inteiro representando quantas escadinhas existem na sequ�ncia.
 */

int main(){
	
	int tam_seq, sequencia, i;
	int aux1 = 0, aux2 = 0, qtd_esc = 0;
	
	scanf("%d", &tam_seq);
	
	for(i = 0; i <tam_seq; i++){
		scanf("%d", &sequencia);
		
		if(tam_seq == 1)
			qtd_esc = 1;
		
		if(sequencia - aux1 != aux1 - aux2)
			qtd_esc++;
			aux2 = aux1;
			aux1 = sequencia;
	}
	printf("%d", --qtd_esc);
	return 0;
}