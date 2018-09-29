#include <stdio.h>

int main(){
	
	char nome;
	double salarioFixo, totalVendas, TOTAL;
	
	scanf("%s", &nome);
	scanf("%lf", &salarioFixo);
	scanf("%lf", &totalVendas);
	
	TOTAL = salarioFixo + (totalVendas * 0.15);
	
	printf("TOTAL = R$ %.2f\n", TOTAL);
	
	return 0;
}
