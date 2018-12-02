#include <stdio.h>
/**
 * magine que voc� tenha uma m�quina do tempo que possa ser usada no m�ximo tr�s vezes, e com cada uso da m�quina voc� pode escolher voltar ao passado ou ir para o futuro. A m�quina possui tr�s cr�ditos fixos; Cada cr�dito representa uma certa quantidade de anos, e pode ser usado para ir essa quantidade de anos para o passado ou para o futuro. Voc� pode fazer uma, duas ou tr�s viagens e cada um desses tr�s cr�ditos pode ser usado apenas uma vez. Por exemplo, se os cr�ditos forem 5, 12 e 9, voc� pode decidir fazer duas viagens: passar 5 anos para o futuro e depois voltar 9 anos para o passado. Dessa forma, voc� terminaria quatro anos no passado. Voc� tamb�m poderia fazer tr�s viagens, todas indo para o futuro, usando os cr�ditos em qualquer ordem, terminando em 26 anos no futuro.

Nesse problema, dados os valores dos tr�s cr�ditos da m�quina, seu programa deve dizer se � poss�vel viajar no tempo e retornar ao presente, fazendo pelo menos uma viagem e no m�ximo tr�s viagens. Sempre usando cada um dos tr�s cr�ditos no m�ximo uma vez.

Exemplos: Entrada: 22 5 22 Sa�da: S Entrada: 31 110 79 Sa�da: S Entrada: 45 8 7 Sa�da: N
 */

int main(){
	
	int credito1, credito2, credito3;
	
	scanf("%d %d %d", &credito1, &credito2, &credito3);
	
	if(credito1 - credito2 == 0)
		printf("S");
	else if(credito1 - credito3 == 0)
		printf("S");
	else if(credito2 - credito3 == 0)
		printf("S");
	else if((credito1 + credito2) - credito3 == 0)
		printf("S");
	else if((credito2 + credito3) - credito1 == 0)
		printf("S");
	else if((credito1 + credito3) - credito2 == 0)
		printf("S");
	else
		printf("N");
	return 0;
}