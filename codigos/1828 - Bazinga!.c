#include <stdio.h>

/**
 * No oitavo episodio da segunda temporada do seriado The Big Bang Theory, The Lizard- Spock Expansion, Sheldon e Raj discutem qual dos dois e´ o melhor: o filme Saturn 3 ou a se´rie Deep Space 9. A sugesta~o de Raj para a resoluc¸a~o do impasse e´ uma disputa de Pedra-Papel-Tesoura-Lagarto-Spock. As regras do jogo proposto sa~o:

a tesoura corta o papel;
o papel embrulha a pedra;
a pedra esmaga o lagarto;
o lagarto envenena Spock;
Spock destro´i a tesoura;
a tesoura decapita o lagarto;
o lagarto come o papel;
o papel contesta Spock;
Spock vaporiza a pedra;
a pedra quebra a tesoura. Caso Sheldon vencesse, ele exclama "Bazinga!"; caso Raj vencesse, Sheldon concluiria que "Raj trapaceou!"; caso o resultado fosse empate, ele exclamaria "De novo!". Escolhidas as personagens do jogo por ambos, fac¸a um programa que imprima a reac¸a~o de Sheldon. Entrada: Dois valores represenando as escolhas de Sheldon e Raj: 1 - pedra, 2 - papel, 3 - tesoura, 4 - lagarto e 5 - Spock. Saída: Uma das tre^s reac¸o~es possi´veis de Sheldon: "Bazinga!", "Raj trapaceou!", ou "De novo!".
 */

int main()
{
	int sheldon, raj;
	
	scanf("%d %d", &sheldon, &raj);
	
	if(sheldon == raj){
		printf("De novo!\n");
	}else if ((sheldon == 3 && raj == 2)||(sheldon == 2 && raj == 1)||
			(sheldon == 1 && raj == 4)||(sheldon == 4 && raj == 5)||
			(sheldon == 5 && raj == 3)||(sheldon == 3 && raj == 4)||
			(sheldon == 4 && raj == 2)||(sheldon == 2 && raj == 5)||
			(sheldon == 5 && raj == 1)||(sheldon == 1 && raj == 3)){
		printf("Bazinga!\n");
	}else
		printf("Raj trapaceou!\n");
	return 0;
}