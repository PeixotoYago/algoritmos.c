#include<stdio.h>
int LerNumero(){
    int lado = 0;
    printf("Digite o lado do quadrado: ");

    scanf("%d", &lado);

    return lado;
}

int calculaArea(int lado){
    return lado * lado;
}

void main(){
    int lado = LerNumero();
    int resultado = calculaArea(lado);
    printf("\nO quadrado de lado: %d sua area: %d\n", lado, resultado);
}
