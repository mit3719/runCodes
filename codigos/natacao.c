x#include <stdio.h>
/**
 * A nata��o foi um dos esportes mais emocionantes nas Olimp�adas do Rio. Houve at� um evento em que tr�s atletas chegaram empatados, cada um recebendo uma medalha de prata! Normalmente, no entanto, os tr�s primeiros lugares terminam a corrida em diferentes momentos e, portanto, temos a distribui��o mais comum de medalhas: o nadador que terminou no menor tempo recebe uma medalha de ouro; O nadador que terminar com o segundo menor tempo recebe uma medalha de prata; E aquele que terminou com o terceiro menor tempo recebe uma medalha de bronze. Neste problema, dado os tr�s diferentes tempos de chegada, dos tr�s nadadores que ganharam medalhas, seu programa deve dizer quem ganhou uma medalha de ouro, quem ganhou a prata e quem ganhou o bronze.

Entrada Tr�s n�meros inteiros que representam o tempo de cada nadador levou para terminar a prova.

Sa�da Tr�s linhas na sa�da. A primeira linha deve conter o n�mero do nadador que ganhou a medalha de ouro; A segunda linha, o n�mero do nadador que ganhou prata; E a terceira linha, o n�mero do nadador que levou o bronze.
 */

int main(){
	
	int temp1, temp2, temp3;
	
	scanf("%d %d %d", &temp1, &temp2, &temp3);
	
	//Descobrindo quem � o primeiro colocado
	if(temp1 < temp2 && temp1 < temp3){
		printf("1\n");
	}else if(temp2 < temp1 && temp2 < temp3){
		printf("2\n");	
	}else if(temp3 < temp1 && temp3 < temp2){
		printf("3\n");
	}
	
	//Descobrindo quem � o segundo colocado
	if((temp2 > temp1 && temp1 > temp3) ||(temp3 > temp1 && temp1 > temp2)){
		printf("1\n");
	}else if((temp1 > temp2 && temp2 > temp3) ||(temp3 > temp2 && temp2 > temp1)){
		printf("2\n");
	}else if((temp1 > temp3 && temp3 > temp2) ||(temp2 > temp3 && temp3 > temp1)){
		printf("3\n");
	}
	
	//Descobrindo quem � o terceiro colocado
	if(temp1 > temp2 && temp1 > temp3){
		printf("1\n");
	}else if(temp2 > temp1 && temp2 > temp3){
		printf("2\n");	
	}else if(temp3 > temp1 && temp3 > temp2){
		printf("3\n");
	}
	return 0;
}