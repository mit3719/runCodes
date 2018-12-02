/*
Aldo e´ um garoto muito esperto que adora promoc¸o~es e sorteios. Como ja´ participou de muitas promoc¸o~es da forma "para participar, envie n ro´tulos de produtos ...", Aldo tem o costume de guardar o ro´tulo de todos os produtos que compra. Dessa forma, sempre que uma empresa faz uma promoc¸a~o ele ja´ tem um monte de ro´tulos para mandar.

A SBC (Super Balas e Caramelos) esta´ fazendo uma nova promoc¸a~o, e, como era de se esperar, Aldo quer participar. Para participar da promoc¸a~o e´ preciso enviar um envelope contendo um ro´tulo de cada tipo de bala que a SBC produz. Por exemplo, se a SBC produz 3 tipos de balas, A, B, C, e uma pessoa tem 3 ro´tulos de A, 3 de B e 2 de C, ela pode enviar no ma´ximo 2 envelopes, ja´ que falta um ro´tulo de C para compor o terceiro envelope. Na~o ha´ limite para o nu´mero de envelopes que uma pessoa pode enviar.

Balas sa~o a segunda coisa de que Aldo mais gosta (a primeira como voce^ sabe sa~o promoc¸o~es). Por causa disso a quantidade de ro´tulos de balas que ele tem e´ muito grande, e ele na~o esta´ conseguindo determinar a quantidade ma´xima de envelopes que ele pode enviar.

Como voce^ e´ o melhor amigo de Aldo ele pediu sua ajuda para fazer o ca´lculo, de modo que ele compre o nu´mero exato de envelopes. Voce^ deve escrever um programa que, a partir da lista de ro´tulos de Aldo, calcula o nu´mero ma´ximo de envelopes va´lidos que ele pode enviar.

Entrada
A primeira linha da entrada conte´m um nu´mero inteiro N representando o nu´mero de tipos diferentes de balas que a SBC produz. A segunda linha da entrada conte´m N nu´meros inteiros, cada um representando uma quantidade de ro´tulos de balas que Aldo tem. O primeiro nu´mero nessa linha representa a quantidade de ro´tulos do tipo 1 que Aldo possui, o segundo nu´mero representa a quantidade de ro´tulos do tipo 2, e assim por diante, ate´ o u´ltimo nu´mero, que representa a quantidade de ro´tulos de tipo N que Aldo possui.

Saída
Seu programa deve imprimir a quantidade ma´xima de envelopes que Aldo por enviar.
*/
#include <stdio.h>

int main()
{
	int n, i, q, menor;

	scanf("%d", &n);/*numero de tipos balas que a SBC produz*/

	for(i = 0; i < n; i++){
		scanf("%d", &q);/*numero de rotulos por balas*/
		
		if(i == 0){
			menor = q;
		}
		if(q < menor){
			menor = q;
		}
	}
	printf("%d", menor);
	return 0;
}

