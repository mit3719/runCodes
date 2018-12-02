#include <stdio.h>
#include <stdlib.h>
/**
 * Escrever um programa para ler um peso na Terra e o n�mero de um planeta, e imprimir o valor do seu peso neste planeta segundo os dados abaixo.

N�mero Planeta Gravidade relativa g 1 Merc�rio 0,37 2 V�nus 0,88 3 Marte 0,38 4 J�piter 2,64 5 Saturno 1,15 6 Urano 1,17

Para calcular o peso no planeta use a f�rmula Pi = PTerra / 10.0 * gi

Entrada Dois n�meros representando, respectivamente, o n�mero do planeta e o peso do indiv�duo na terra.

Sa�da Um n�mero fracion�rio com duas casas decimais representando o peso do indiv�duo no planeta.


 */

int main(){
	
	float pTerra, novoPeso;
	int caso;
	
	scanf("%d\n", &caso);//numero do planeta
	
	scanf("%f", &pTerra);//peso do individuo na terra
	
	switch(caso){
		case 1:
			novoPeso = pTerra/10.0 * 0.37;
			printf("%.2f", novoPeso);
			break;
		case 2:
			novoPeso = pTerra/10.0*0.88;
			printf("%.2f", novoPeso);
			break;
		case 3:
			novoPeso = pTerra/10.0*0.38;
			printf("%.2f", novoPeso);
			break;
		case 4:
			novoPeso = pTerra/10.0*2.64;
			printf("%.2f", novoPeso);
			break;
		case 5:
			novoPeso = pTerra/10.0*1.15;
			printf("%.2f", novoPeso);
			break;
		case 6:
			novoPeso = pTerra/10.0*1.17;
			printf("%.2f", novoPeso);
			break;
	default:
		return 0;
	}
	return 0;
}