#include <stdio.h>
/**
 * magine que você tenha uma máquina do tempo que possa ser usada no máximo três vezes, e com cada uso da máquina você pode escolher voltar ao passado ou ir para o futuro. A máquina possui três créditos fixos; Cada crédito representa uma certa quantidade de anos, e pode ser usado para ir essa quantidade de anos para o passado ou para o futuro. Você pode fazer uma, duas ou três viagens e cada um desses três créditos pode ser usado apenas uma vez. Por exemplo, se os créditos forem 5, 12 e 9, você pode decidir fazer duas viagens: passar 5 anos para o futuro e depois voltar 9 anos para o passado. Dessa forma, você terminaria quatro anos no passado. Você também poderia fazer três viagens, todas indo para o futuro, usando os créditos em qualquer ordem, terminando em 26 anos no futuro.

Nesse problema, dados os valores dos três créditos da máquina, seu programa deve dizer se é possível viajar no tempo e retornar ao presente, fazendo pelo menos uma viagem e no máximo três viagens. Sempre usando cada um dos três créditos no máximo uma vez.

Exemplos: Entrada: 22 5 22 Saída: S Entrada: 31 110 79 Saída: S Entrada: 45 8 7 Saída: N
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