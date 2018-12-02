#include <stdio.h>

int main(){
	
	int diaI, diaF, horaI, horaF, minI, minF, segI, segF;
	int inicio = 0, termino = 0;
	int t, d, h, m, s;
	
	scanf("%d %d %d %d %d %d %d %d", &diaI, &horaI, &minI, &segI, &diaF, &horaF, &minF, &segF);
	
	inicio = (diaI * 86400) + (horaI * 3600) + (minI * 60) + segI;
	termino = (diaF * 86400) + (horaF * 3600) + (minF * 60) + segF;
	
	t = termino - inicio;
	
	d = t/86400;
	t = t%86400;
	h = t/3600;
	t = t%3600;
	m = t/60;
	t = t%60;
	s = t;
	
	printf("%d dia(s) %d hora(s) %d minuto(s) %d segundo(s)", d, h, m, s);
	
	return 0;
}