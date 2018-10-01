#include <stdio.h>

int main(){
	
	int CODIGO1, CODIGO2, PECAS1, PECAS2;
	double VALOR1, VALOR2, PAGAR;
	
	scanf("%d %d %lf", &CODIGO1, &PECAS1, &VALOR1);
	scanf("%d %d %lf", &CODIGO2, &PECAS2, &VALOR2);
	
	PAGAR = (PECAS1 * VALOR1) + (PECAS2 * VALOR2);
	
	printf("VALOR A PAGAR: R$ %.2f\n", PAGAR);
	
	return 0;
}
