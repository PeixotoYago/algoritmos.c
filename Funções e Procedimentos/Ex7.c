#include <stdio.h>
void main(){
    int num1 = 0;
    printf("Digite o primeiro numero\n");
    scanf("%d", &num1);

    int num2 = 0;
    printf("Digite o segundo numero\n");
    scanf("%d", &num2);

    int soma =
        SomaNumerosIntervalo(num1, num2);

    printf("Resultado: %d\n", soma);
}

int SomaNumerosIntervalo(int n1, int n2){
    int soma = 0;
    int i = 0;
    for(i = n1; i <= n2; i++){
        soma = soma + i;
    }
    return soma;
}
