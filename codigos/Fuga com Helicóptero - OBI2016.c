#include <stdio.h>

int main(){
	
	int i, pHelicoptero, pPolicial, pFugitivo, direcao;
	
	scanf("%d %d %d %d", &pHelicoptero, &pPolicial, &pFugitivo, &direcao);
	
	//se a declara��o for anti-hor�ria
	if(direcao == 1){
		for(i = pFugitivo;;i++){
			//se tiver dado a volta completa
			if(i==16){/*na verdade estou na primeira posi��o*/
				i = 0;/*ele estar na primeira posi��o*/
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