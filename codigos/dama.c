#include <stdio.h>
#include <stdlib.h>
/**
 * O jogo de xadrez possui va´rias pec¸as com movimentos curiosos: uma delas e´ a dama, que pode se mover qualquer quantidade de casas na mesma linha, na mesma coluna, ou em uma das duas diagonais.

O grande mestre de xadrez Kary Gasparov inventou um novo tipo de problema de xadrez: dada a posic¸a~o de uma dama em um tabuleiro de xadrez vazio (ou seja, um tabuleiro 8 × 8, com 64 casas), de quantos movimentos, no mi´nimo, ela precisa para chegar em outra casa do tabuleiro (levando em consideração que a dama pode se mover qualquer quantidade de casas na mesma linha, na mesma coluna, ou em uma das duas diagonais)?

Kary achou a soluc¸a~o para alguns desses problemas, mas teve dificuldade com outros, e por isso pediu que voce^ escrevesse um programa que resolve esse tipo de problema.

Entrada
Quatro inteiros X1, Y1, X2 e Y2 (1 = X1, Y1, X2, Y2 = 8). A dama comec¸a na casa de coordenadas (X1, Y1), e a casa de destino e´ a casa de coordenadas(X2, Y2). No tabuleiro, as colunas sa~o numeradas da esquerda para a direita de 1 a 8 e as linhas de cima para baixo tambe´m de 1 a 8. As coordenadas de uma casa na linha X e coluna Y sa~o (X, Y ).

Saída
Uma u´nica linha na sai´da, contendo um nu´mero inteiro, indicando o menor nu´mero de movimentos necessa´rios para a dama chegar em sua casa de destino
 */

int main(){
	
	int x1, y1, x2, y2;
	
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	
	if(x1 == 9 && y1 == 9 && x2 == 9 && y2 == 9)
		return 0;		
	else if(x1 == x2 && y1 == y2)//mesma linha
		printf("0\n");
	else if(x1 == x2 || y1 == y2)//x ou y iguais 
		printf("1\n");
	else if(x1 + y2 == x2 + y1)//diagonal primária
		printf("1\n");
	else if(x1 + y1 == x2 + y2)//diagonal secundaria
		printf("1\n");
	else
		printf("2\n");
	return 0;
}