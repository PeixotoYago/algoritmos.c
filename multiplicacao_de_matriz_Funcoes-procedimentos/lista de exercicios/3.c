#include<stdio.h>
int LerNumero(){
    int lado = 0;
    printf("Digite o comprimento: ");
    scanf("%d", &lado);
    return lado;
}

int calculaArea(int base, int altura){
    return base * altura;
}

void main(){
    int base = LerNumero();
    int altura = LerNumero();
    int resultado = calculaArea(base, altura);
    printf("\nO retangulo de base: %d e altura: %d tem area de: %d\n", base, altura, resultado);
}

