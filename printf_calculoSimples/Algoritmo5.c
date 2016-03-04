#include <stdio.h>
void main(){
float salarioatual = 0;
float reajuste = 0;
float salarioFinal = 0;

printf ("Digite o valor do salario : ");
scanf("%f", &salarioatual);

printf ("Digite o valor do reajuste: ");
scanf("%f", &reajuste);

salarioFinal = (salarioatual * (reajuste / 100)) + salarioatual;

printf("\nO salario reajustado : %.2f", salarioFinal);
}

