#include <stdio.h>
/**
 * Dizemos que uma sequência de números é uma escadinha, se a diferença entre números consecutivos é sempre a mesma. Por exemplo, “2, 3, 4, 5” e “10, 7, 4” são escadinhas. Note que qualquer sequência com apenas um ou dois números também é uma escadinha!

Neste problema estamos procurando escadinhas em uma sequência maior de números. Dada uma sequência de números, queremos determinar quantas escadinhas existem. Mas só estamos interessados em escadinhas tão longas quanto possível. Por isso, se uma escadinha é um pedaço de outra, consideramos somente a maior. Por exemplo, na sequência “1, 1, 1, 3, 5, 4, 8, 12” temos 4 escadinhas diferentes: “1, 1, 1”, “1, 3, 5”, “5, 4” e “4, 8, 12”.

Entrada
A primeira linha da entra contém um inteiro N indicando o tamanho da sequência de números. A segunda linha contém N inteiros definindo a sequência.

Saída
Imprima uma linha contendo um inteiro representando quantas escadinhas existem na sequência.
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