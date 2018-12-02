/*
Saldo do vov�

Vov� j�o tem um banca de jornais; ele tem muitos clientes, e 
diariamente recebe muito dinheiro, mas tamb�m faz muito pagamentos
para manter o seu estoque de jornais e revistas.
Todo dia ele vai ao banco realizar um dep�sito ou uma 
retirada de dinheiro. Em alguns dias, o saldo de sua conta no
banco ficar negativo, mas Vov� j�o tem um acordo com o banco
que garante que ele somente � cobrado se o saldo for menor do que
um valor pr�-estabelecido. Dada a movimenta��o di�ria da conta do
banco do Vov� j�o, voc� dever escrever um programa que calcule o
menor saldo da conta, no per�odo dado.

ENTRADA
A primeira linha de entrada cont�m dois n�meros inteiros N e S que 
indicam repectivamente o n�mero de dias do periodo de interesse e 
o saldo da conta no inicio do periodo. Cada uma das N linhas 
seguintes cont�m um numero inteiro indicando a movimenta��o de um 
dia(valor positivo no caso de dep�sito, valor negativo no caso
de retirada). A movimenta��o � dada para um per�odo de N dias
consecutivos: a primeira das N linhas corresponde ao primeiro dia
do per�odo de interesse, a segunda linha corresponde ao segundo dia, 
e assim por diante.

SAIDA
uma unica linha, contendo um �nico n�mero inteiro, o menor valor
de saldo da conta no per�odo dado
*/

#include <stdio.h>

int main()
{
	int n, saldoC, i, movi, saldoI;
	/*n >> o n�mero de dias do per�odo de interesse*/
	/*saldoC >> saldo da conta no inicio do periodo*/
	/*movi >>movimenta��o de um dia*/
	/*saldoI >> receber o saldo do inicio do periodo para
 teste*/	
	
	scanf("%d %d", &n, &saldoC);
	
	saldoI = saldoC;
	
	for(i = 0; i < n; i++){
		scanf("%d", &movi);
		
		saldoI += movi; /*receber todas as movita��es do vov� j�o*/
		
		if(saldoI < saldoC)/*compara as movimenta��es com o saldo*/
			saldoC = saldoI;/*� somado ou descontado*/
	}
	printf("%d", saldoC);
	return 0;
}