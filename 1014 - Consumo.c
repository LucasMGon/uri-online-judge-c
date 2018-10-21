#include <stdio.h>

int main(){
	
	int X;
	double Y, CONSUMO;
	
	scanf("%d", &X);
	scanf("%lf", &Y);
	
	CONSUMO = X / Y;
	
	printf("%.3f km/l\n", CONSUMO);
	
	return 0;
}
