#include <stdio.h>
#include <stdlib.h>
/**
 * Escrever um programa para ler um peso na Terra e o número de um planeta, e imprimir o valor do seu peso neste planeta segundo os dados abaixo.

Número Planeta Gravidade relativa g 1 Mercúrio 0,37 2 Vênus 0,88 3 Marte 0,38 4 Júpiter 2,64 5 Saturno 1,15 6 Urano 1,17

Para calcular o peso no planeta use a fórmula Pi = PTerra / 10.0 * gi

Entrada Dois números representando, respectivamente, o número do planeta e o peso do indivíduo na terra.

Saída Um número fracionário com duas casas decimais representando o peso do indivíduo no planeta.


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