#include<stdio.h>
int LerNumero(){
    int n = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    return n;
}

int intervalo(int n1, int n2){
   int soma = 0;
   if (n1 < n2){
        while(n1 <= n2){
            soma = soma + n1;
            n1++;
        }
        return soma;
   }
   if (n1 == n2){
    soma = n1;
    return soma;
   } else{
   soma = 0;
   return soma;
   }
}

void main(){
    int n1 = LerNumero();
    int n2 = LerNumero();
    int resultado = intervalo(n1, n2);
    if(resultado == 0){
        printf("\nO segundo numero e maior que o primeiro\n");
    } else{
    printf("\nA soma do intervalo e: %d\n", resultado);
    }
}

