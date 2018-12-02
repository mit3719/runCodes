/*
Saldo do vovô

Vovô jão tem um banca de jornais; ele tem muitos clientes, e 
diariamente recebe muito dinheiro, mas também faz muito pagamentos
para manter o seu estoque de jornais e revistas.
Todo dia ele vai ao banco realizar um depósito ou uma 
retirada de dinheiro. Em alguns dias, o saldo de sua conta no
banco ficar negativo, mas Vovô jão tem um acordo com o banco
que garante que ele somente é cobrado se o saldo for menor do que
um valor pré-estabelecido. Dada a movimentação diária da conta do
banco do Vovô jão, você dever escrever um programa que calcule o
menor saldo da conta, no período dado.

ENTRADA
A primeira linha de entrada contém dois números inteiros N e S que 
indicam repectivamente o número de dias do periodo de interesse e 
o saldo da conta no inicio do periodo. Cada uma das N linhas 
seguintes contém um numero inteiro indicando a movimentação de um 
dia(valor positivo no caso de depósito, valor negativo no caso
de retirada). A movimentação é dada para um período de N dias
consecutivos: a primeira das N linhas corresponde ao primeiro dia
do período de interesse, a segunda linha corresponde ao segundo dia, 
e assim por diante.

SAIDA
uma unica linha, contendo um único número inteiro, o menor valor
de saldo da conta no período dado
*/

#include <stdio.h>

int main()
{
	int n, saldoC, i, movi, saldoI;
	/*n >> o número de dias do período de interesse*/
	/*saldoC >> saldo da conta no inicio do periodo*/
	/*movi >>movimentação de um dia*/
	/*saldoI >> receber o saldo do inicio do periodo para
 teste*/	
	
	scanf("%d %d", &n, &saldoC);
	
	saldoI = saldoC;
	
	for(i = 0; i < n; i++){
		scanf("%d", &movi);
		
		saldoI += movi; /*receber todas as movitações do vovô jão*/
		
		if(saldoI < saldoC)/*compara as movimentações com o saldo*/
			saldoC = saldoI;/*é somado ou descontado*/
	}
	printf("%d", saldoC);
	return 0;
}