#include <stdio.h>

int main(){
	
	double RAIO, VOLUME;
	
	scanf("%lf", &RAIO);
	
	VOLUME = (4/3.0) * 3.14159 * (RAIO * RAIO * RAIO);
	
	printf("VOLUME = %.3f\n", VOLUME);
	
	return 0;
}
