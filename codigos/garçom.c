/*Parte do treinamento de um novo gar�om � carregar uma grande bandeja com v�rias latas de bebidas e copos e entreg�-las todas numa mesa do restaurante. Durante o treinamento � comum que os gar�ons deixem cair as bandejas, quebrando todos os copos.

A SBC -- Sociedade Brasileira de Copos -- analisou estat�sticas do treinamento de diversos gar�ons e descobriu que os gar�ons em treinamento deixam cair apenas bandejas que t�m mais latas de bebidas que copos. Por exemplo, se uma bandeja tiver 10 latas e 4 copos, certamente o gar�om em treinamento a deixar� cair, quebrando os 4 copos. J� se a bandeja tiver 5 latas e 6 copos, ele conseguir� entreg�-la sem deixar cair.

Escreva um programa que, dado o n�mero de latas e copos em cada bandeja que o gar�om tentou entregar, imprime o total de copos que ele quebrou.

Entrada
A primeira linha da entrada cont�m um inteiro N representando o n�mero de bandejas que o gar�om tentou entregar. As N linhas seguintes representam as N bandejas. Cada linha cont�m dois inteiros L e C, indicando o n�mero de latas e o n�mero de copos naquela bandeja, respectivamente.

Sa�da
Seu programa deve imprimir uma �nica linha, contendo um �nico inteiro, indicando o n�mero total de copos que o gar�om quebrou.
*/
#include <stdio.h>

int main()
{
	int i, n, l, c, qtd = 0;
	
	scanf("%d", &n);/*o numero de bandejas*/
	
	for(i = 0; i < n; i++){
		scanf("%d %d", &l, &c);/*o numero de latas e de copos de cada bandeja*/
		
		if(l > c)	
//se o numero de latas por bandeja for maior que os copos
			qtd += c;
//vai somando o numero de copos(unicos que quebram), a uma variavel
	}
	printf("%d", qtd);
	//a saida � o numero de copos quebrados por n(bandeijas)
	return 0;
}