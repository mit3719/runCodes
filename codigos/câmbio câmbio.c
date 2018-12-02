#include <stdio.h>
/*
n�o � permitida que uma mensagem seja destinada ao remetente, 
assim como o conte�do da mensagem n�o pode ser c�mbio, o remetente ou o destinat�rio.
*/
/**
 * O professor Rui est� desenvolvendo um sistema de comunica��o codificado para utilizar com seus alunos de programa��o. Como a comunica��o ser� restrista aos alunos de programa��o do professor Rui, ele criou uma codifica��o para cada mensagem enviada que � conhecida apenas por seus alunos. A mensagem segue o padr�o CRDMC, onde C, R, D, M representam respectivamente C�mbio, Remetente, Destinat�rio e Mensagem. Al�m disso o professor Rui estabeleceu algumas regras: n�o � permitida que uma mensagem seja destinada ao remetente, assim como o conte�do da mensagem n�o pode ser c�mbio, o remetente ou o destinat�rio.

Os sensores do sistema do professor Rui produzem apenas uma sequ�ncia de cinco n�meros representando o padr�o da mensagem. S� que ele n�o sabe qual n�mero representa qual c�digo da mensagem. Por exemplo, se a sequ�ncia for 5 1 3 9 5, podemos dizer que a mensagem � v�lida, mesmo sem saber qual n�mero representa qual c�digo. O professor Rui convidou voc� para escrever um programa que diga se a mensagem � v�lida.

Entrada
Cinco n�meros inteiro representando a codifica��o da mensagem.

Sa�da
V indicando que a mensagem � v�lida e I indicando que a mensagem � inv�lida.
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