#include <stdio.h>
/**
 * Num sorteio que distribui prêmios, um participante inicialmente sorteia um inteiro N e depois N valores. O número de pontos do participante é o tamanho da maior sequência de valores consecutivos iguais. Por exemplo, suponhamos que um participante sorteia N = 11 e, nesta ordem, os valores.

30, 30, 30, 30, 40, 40, 40, 40, 40, 30, 30

Então, o participante ganha 5 pontos, correspondentes aos 5 valores 40 consecutivos. Note que o participante sorteou 6 valores iguais a 30, mas nem todos são consecutivos.

Sua tarefa é ajudar a organização do evento, escrevendo um programa que determina o número de pontos de um participante.

Entrada
A primeira linha da entrada contém um inteiro N, o número de valores sorteados. A segunda linha contém N valores, V1, V2, …, VN, na ordem de sorteio, separados por um espaço em branco.

Saída
Seu programa deve imprimir apenas uma linha, contendo apenas um inteiro, indicando o número de pontos do participante.
 */

int main()
{
	int n, i, aux, valores, seqInic = 1, seqfinal = 0;
	
	scanf("%d", &n); /* o número de valores sorteados. */
	
	for( i = 0; i < n; i++){
		scanf("%d", &valores);
		
		if(i > 0){
			if(aux == valores)
				seqInic++;
			if(aux != valores || i == n - 1){/*verificando se a sequencia acabou ou se é o ultimo numero lido */
					if(seqInic > seqfinal)
						seqfinal = seqInic;
						seqInic = 1;
				}
			}
		aux = valores;
	}
	printf("%d\n", seqfinal);
	return 0;
}