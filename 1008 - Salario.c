#include <stdio.h>

int main(){
	
	int NUMBER, HORAS;
	double VALORHORA, SALARY;
	
	scanf("%d", &NUMBER);
	scanf("%d", &HORAS);
	scanf("%lf", &VALORHORA);
	
	SALARY = HORAS * VALORHORA;
	
	printf("NUMBER = %d\n", NUMBER);
	printf("SALARY = U$ %.2f\n", SALARY);
	
	return 0;
}
