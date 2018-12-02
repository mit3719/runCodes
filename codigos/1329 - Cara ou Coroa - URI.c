#include <stdio.h>
/**
 * Joa~o e Maria sa~o amigos desde que se conheceram na creche. Desde enta~o, eles compartilham uma rotina de brincadeiras: todas as vezes que eles se encontram, eles jogam Cara ou Coroa com uma moeda, e quem ganhar tem o privile´gio de decidir quais brincadeiras eles ira~o jogar durante o dia. Maria sempre escolhe cara, e Joa~o sempre escolhe coroa.

Hoje em dia eles esta~o na faculdade, mas continuam sendo bons amigos. Sempre que se encontram, eles ainda jogam Cara ou Coroa, e o vencedor decide que filme assistir, ou em que restaurante jantar, e assim por diante.

Ontem Maria contou a Joa~o que ela guarda um registro de todas as vezes que eles jogaram, desde os tempos da creche. Joa~o ficou espantado. Pore´m Joa~o esta´ estudando Cie^ncia da Computac¸a~o e decidiu que essa era uma boa oportunidade para mostrar a Maria suas habilidades em programac¸a~o, escrevendo um programa que mostrasse o nu´mero de vezes que cada um deles venceu nos últimos 10 jogos.

Entrada
Dez valores inteiro indicando o resultado de cada jogo (1 representa que Maria ganhou e 0 representa que João ganhou).

Saída
A quantidade de jogos que ganhou cada jogador, no seguinte formato: M: X jogo(s) J: Y jogo(s)
 */

int main()
{
	int i, n, M = 0, J = 0;

	for(i = 0; i < 10; i++){
		scanf("%d", &n);
		
		if(n == 1)
			M++;
		else if(n == 0)
			J++;			
	}
	printf("M: %d jogo(s) J: %d jogo(s)", M, J);
	return 0;
}