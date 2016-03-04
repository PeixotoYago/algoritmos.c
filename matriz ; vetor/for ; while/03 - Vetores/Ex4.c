#include <stdio.h>>

/*
– Faça um algoritmo que crie um vetor de N posições
informadas pelo usuario. Em seguida,
imprima os índices pares e depois os índices impares do
vetor.

*/

void main(){
    int tamanho = 0;

    printf("Digite o tamanho do vetor\n");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    int indice = 0;
    while(indice < tamanho){
        printf("Digite o valor da posicao %d\n", indice);
        scanf("%d", &vetor[indice]);

        indice++;
    }

    int indicePar = 0;
    while(indicePar < tamanho){
        printf("Indice %d, Valor %d\n",
               indicePar, vetor[indicePar]);

        indicePar = indicePar + 2;
    }

    int indiceImpar = 1;
    while(indiceImpar < tamanho){
        printf("Indice %d, Valor %d\n",
               indiceImpar, vetor[indiceImpar]);

        indiceImpar = indiceImpar + 2;
    }

}







