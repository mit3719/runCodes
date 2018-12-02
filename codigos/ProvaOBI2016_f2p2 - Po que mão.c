#include <stdio.h>
/**
 * Um novo jogo se tornou popular entre jovens de todas as idades recentemente: o “Po^, que ma~o”. Trata-se de um jogo onde uma ma~o captura criaturas raras e depois as forc¸a a lutarem umas contra as outras. Uma verdadeira barba´rie.

Ainda assim, o jogo se tornou bastante popular. As criaturas sa~o chamadas de “po^-que-ma~os”. No jogo, voce^ pode dar doces para as po^-que-ma~os, para que elas fiquem mais fortes e evoluam. Como ha´ poucos doces, nem sempre e´ possi´vel evoluir todas as po^- que-ma~os que um jogador possui.

Um jogador tem exatamente 3 po^-que-ma~os. Cada um deles necessita de uma quantidade de doces para evoluir. Conhecendo-se a quantidade de doces disponi´veis, escreva um programa para determinar qual o maior nu´mero de po^-que-ma~os que podem evoluir.

Entrada
A entrada e´ composta por quatro números inteiro. O primeiro corresponde ao nu´mero de doces disponi´veis. O segundo ao nu´mero de doces necessa´rios para a primeira po^-que-ma~o evoluir. O pro´ximo ao nu´mero de doces necessa´rios para a segunda po^-que-ma~o evoluir. E o último corresponde ao nu´mero de doces necessa´rios para a terceira po^-que-ma~o evoluir.

Saída
Seu programa deve produzir uma u´nica linha, contendo um inteiro, o maior nu´mero possi´vel de po^-que-ma~os que podem evoluir.


 */

int main()
{
	int doces, pQM1, pQM2, pQM3;
	// doces é a quantidade de doces disponivel
	// pQM1, 2, 3 se refere aos pô que mãos que precisam de doces para evoluir
	
	scanf("%d %d %d %d", &doces, &pQM1, &pQM2, &pQM3);
	
	if((doces < pQM1) || (doces < pQM2) || (doces < pQM3)){
		printf("0");
	}else
		if(((doces - pQM1) >= pQM2 )&& ((doces - pQM1 - pQM2) >= pQM3)){
			printf("3");
		}else
			if(((doces - pQM1) >= pQM2) || ((doces - pQM1 - pQM2)< pQM3)){
				printf("2");
			}else
				if(((doces - pQM1) < pQM2) || ((doces - pQM1 - pQM2) < pQM3)){
					printf("1");
				}	
	return 0;
}