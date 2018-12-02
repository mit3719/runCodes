#include <stdio.h>

int main()
{
	int caso;
	float custFabr, comiVend, cusVenAuto;
	
	scanf("%d %f %f", &caso, &custFabr, &comiVend);
	
	switch(caso)
	{
	case 1:
		cusVenAuto = (custFabr + (custFabr * 0.20)) + ((comiVend/100) * (custFabr + (custFabr * 0.20)));
		printf("%.2f", cusVenAuto);
		break;
	case 2:
		cusVenAuto = (custFabr + (custFabr * 0.10)) + ((comiVend/100) * (custFabr + (custFabr * 0.10)));
		printf("%.2f", cusVenAuto);
		break;
	case 3:
		cusVenAuto = (custFabr + (custFabr * 0.05)) + ((comiVend/100) * (custFabr + (custFabr * 0.05)));
		printf("%.2f", cusVenAuto);
		break;
	case 4:
		cusVenAuto = (custFabr + (custFabr * 0.03)) + ((comiVend/100) * (custFabr + (custFabr * 0.03)));
		printf("%.2f", cusVenAuto);
		break;
	default:
		printf("Estilo incorreto");
		break;
	}
	return 0;
}