#include <stdio.h>
/**
 * Em cada fase do jogo do Pula Sapo voce^ deve conduzir seu anfi´bio atrave´s de uma seque^ncia de canos de alturas diferentes ate´ chegar a salvo no cano mais a` direita. Entretanto, o sapo so´ consegue sobreviver se a diferenc¸a de altura entre canos consecutivos for de, no ma´ximo, a altura do pulo do sapo. Caso a altura do cano seguinte seja muito alta, o sapo bate no cano e cai. Se a altura do cano seguinte for muito baixa, o sapo na~o aguenta a queda. O sapo sempre comec¸a em cima do cano mais a` esquerda.

Neste jogo, a dista^ncia entre os canos e´ irrelevante, ou seja, o sapo sempre consegue alcanc¸ar o pro´ximo cano com um pulo.

Escreva um programa que, dadas as alturas de 5 canos e a altura do pulo do sapo, mostre se a fase do jogo pode ser vencida ou na~o.

Entrada
A altura do pulo do sapo e a altura dos 5 canos ordenados da esquerda para a direita.

Saída
A sai´da e´ dada em uma u´nica linha. Se o sapo pode chegar no cano mais a` direita, escreva "YOU WIN". Se o sapo na~o consegue, escreva "GAME OVER".
 */

int main (){

	int pulo, cano1, cano2, cano3, cano4, cano5;
	int i, j, l, m;
	////i , j, l, m vão guarda as diferenças dos canos para poder compara com a altura do pulo do sapo
	
	scanf("%d", &pulo);	
	scanf("%d %d %d %d %d", &cano1, &cano2, &cano3, &cano4, &cano5);

	//verificando e armazenando a difença das alturas dos canos consecultivos
	if(cano1 > cano2) 
		i = cano1-cano2;
	else 
		i = cano2-cano1;
	if(cano2 > cano3) 
		j = cano2-cano3;
	else 
		j = cano3-cano2;		   	
	if(cano4 > cano3) 
   	   l = cano4-cano3;
  	else 
		l = cano3-cano4;
	if(cano5 > cano4) 
		m = cano5-cano4;
	else 
		m = cano4-cano5;
	//testando se a as diferenças canos permite ganhe ou não
	if ((i <= pulo) && (j <= pulo) && (l <= pulo) && (m <= pulo))
		printf("YOU WIN");
	else 
		printf("GAME OVER");
	return 0;
}

