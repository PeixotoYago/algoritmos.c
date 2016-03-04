#include<stdio.h>
int LerNumero(){
int n = 0;
printf("Digite um numero: ");
    scanf("%d", &n);
    return n;
}

int verifica(int n){
    if ((n % 2) == 0){
        return 0;
    } else{
        return 1;
    }
}

void main(){
    int n = LerNumero();
    int resultado = verifica(n);
    printf("\n%d\n", resultado);
}
