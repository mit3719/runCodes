#include <stdio.h>
/**
 * Existe uma tradicional indu´stria no Brasil que produz equipamentos musicais. Atualmente eles esta~o totalmente imergidos com a era da Indu´stria 4.0 e a sua principal atuac¸a~o e´ a criac¸a~o de pedais de efeitos para guitarra, que existem em uma diversidade incri´vel, cada um para um tipo de cliente. Esta indu´stria implementou um sistema em que o seu cliente cria seu pro´prio pedal atrave´s de um proto´tipo 3D e interativo, inclusive com sons, simulando o pedal real. Sendo assim, apo´s o cliente gerar seu modelo o mesmo e´ enviado para a empresa, onde sera´ fabricado.

Acontece que para ser fabricado, o circuito do pedal e´ impresso em uma PCI (placa de circuito impresso), com um certo tamanho e é destinado 1cm de cada dimensão do circuito do cliente para montagem. Com a criatividade dos clientes, as placas esta~o tomando dimenso~es inimagina´veis, tal fato faz com que a placa disponi´vel na empresa na~o sirva. Como voce^ e´ um excelente programador e um amante da mu´sica, cabe a voce^ criar um programa em que dada as dimenso~es do circuito do cliente e a dimensa~o da placa disponi´vel, diga se e´ possi´vel utilizar ou na~o aquela placa.

Entrada
Quatro inteiros, representando, respectivamente, as dimensões da placa da empresa e as dimensões do PCI do cliente. Ambos medidos em cm.

Saída
Para cada circuito determine se e´ possi´vel utilizar a PCI da empresa ou na~o (SIM ou NAO).
 */


int main()
{
	
	int x1, y1;
	int x2, y2;
	int i, j;
	
	//recebendo as dimensões da placa da empresa
	scanf("%d %d", &x1, &y1);
	//recebendo as dimensões da plca do cliente
	scanf("%d %d", &x2, &y2);
	
	//incrementando o 1cm de cada dimensão do circuito do cliente
	x2++;
	y2++;
	
	//calculando a area da empresa
	i = x1 * y1;
	//calculando a area do cliente
	j = x2 * y2;
	
	//verificando se a area do cliente é menor ou igual a da empresa
	if(j <= i)
		printf("SIM");
	else
		printf("NAO");
	return 0;
}