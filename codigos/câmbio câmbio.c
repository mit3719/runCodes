#include <stdio.h>
/*
não é permitida que uma mensagem seja destinada ao remetente, 
assim como o conteúdo da mensagem não pode ser câmbio, o remetente ou o destinatário.
*/
/**
 * O professor Rui está desenvolvendo um sistema de comunicação codificado para utilizar com seus alunos de programação. Como a comunicação será restrista aos alunos de programação do professor Rui, ele criou uma codificação para cada mensagem enviada que é conhecida apenas por seus alunos. A mensagem segue o padrão CRDMC, onde C, R, D, M representam respectivamente Câmbio, Remetente, Destinatário e Mensagem. Além disso o professor Rui estabeleceu algumas regras: não é permitida que uma mensagem seja destinada ao remetente, assim como o conteúdo da mensagem não pode ser câmbio, o remetente ou o destinatário.

Os sensores do sistema do professor Rui produzem apenas uma sequência de cinco números representando o padrão da mensagem. Só que ele não sabe qual número representa qual código da mensagem. Por exemplo, se a sequência for 5 1 3 9 5, podemos dizer que a mensagem é válida, mesmo sem saber qual número representa qual código. O professor Rui convidou você para escrever um programa que diga se a mensagem é válida.

Entrada
Cinco números inteiro representando a codificação da mensagem.

Saída
V indicando que a mensagem é válida e I indicando que a mensagem é inválida.
 */
int main(){
	
	int cambio1, remetente, destinatario, mensagem, cambio2;
	
	scanf("%d %d %d %d %d", &cambio1, &remetente, &destinatario, &mensagem, &cambio2);
	
	if((cambio1 == cambio2) &&
 	   (cambio1 != remetente && cambio1 != destinatario && cambio1 != mensagem)&&
       (cambio2 != remetente && cambio2 != destinatario && cambio2 != mensagem)&&
	   (mensagem != cambio1 && mensagem != cambio2)&& 
 	   (mensagem != remetente && mensagem != destinatario)&&(remetente != destinatario))
 	   printf("V");
   else
	   printf("I");
	
	return 0;
}