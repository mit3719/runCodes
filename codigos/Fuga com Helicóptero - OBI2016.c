#include <stdio.h>

int main(){
	
	int i, pHelicoptero, pPolicial, pFugitivo, direcao;
	
	scanf("%d %d %d %d", &pHelicoptero, &pPolicial, &pFugitivo, &direcao);
	
	//se a declaração for anti-horária
	if(direcao == 1){
		for(i = pFugitivo;;i++){
			//se tiver dado a volta completa
			if(i==16){/*na verdade estou na primeira posição*/
				i = 0;/*ele estar na primeira posição*/
			}
			else if(i == pPolicial){ /*se tiver encontrado o policial*/
				printf("N\n");break;
			}
			if(i == pHelicoptero){
				  printf("S\n");break;
			}
		}
	}
	if(direcao == -1){
		for(i = pFugitivo;; i--){
			if(i == -1){/*se tiver dado a volta completa*/
				i = 15;/*ele na verdade esta na ultima */
			}
			else if(i == pPolicial){
				printf("N\n");break;
			}
			if(i == pHelicoptero){
				printf("S\n");break;
			}
		}
	}
	return 0;
}