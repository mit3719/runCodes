#include <stdio.h>
/**
 * O Shopping Boas Compras - SBC está preocupado com o consumo de energia e, resolveu trocar todas as escadas rolantes por modelos mais modernos, que se desligam caso ningu´em esteja utilizando.

A nova escada rolante possui um sensor no ini´cio. Toda vez que ela está vazia e alguém passa pelo sensor, a escada comec¸a a funcionar, parando de funcionar novamente apo´s 10 segundos se ninguém mais passar pelo sensor. Estes 10 segundos representam o tempo suficiente para levar alguém de um ni´vel ao outro. Preocupados em saber exatamente quanto de energia o shopping está economizando, o gerente pediu sua ajuda. Como eles sabem qual era o consumo da escada rolante antiga, eles te pediram para calcular o tempo que a nova escada ficou funcionando.

O gerente analisou um período de tempo em que passaram 3 pessoas. Dados os instantes, em segundos, em que passaram cada uma das 3 pessoas pela escada rolante, faça um algoritmo que calcule quantos segundos ela ficou ligada.

Entrada
Três valores inteiro que representam o tempo em segundos em que passou cada uma das 3 pessoas.

Saída
Um valor inteiro indicando o tempo que a escada ficou funcionando
 */

int main()
{
	int pessoa1, pessoa2, pessoa3;
	int diferenca_de_Pessoa_pra_Pessoa = 0;
	int segundoAcumulados = 0;
	int i = 0;
	
	scanf("%d %d %d", &pessoa1, &pessoa2, &pessoa3);
	
	//verificação se a diferença de uma pessoa para a outra
	if(pessoa2 - pessoa1 < 10)
		//acumulando essa diferença
		diferenca_de_Pessoa_pra_Pessoa = pessoa2 - pessoa1;
	else
		//senão acumulo adiciono a propria variavel mais 10 à variavel
		diferenca_de_Pessoa_pra_Pessoa += 10;
		if(pessoa3 - pessoa2 < 10)
			segundoAcumulados = pessoa3 - pessoa2;
		else
			segundoAcumulados += 10;
		//calculando a quantidade de segundo gastos na escada rolante
		i = diferenca_de_Pessoa_pra_Pessoa + segundoAcumulados + 10;
		printf("%d", i);			
	return 0;
}