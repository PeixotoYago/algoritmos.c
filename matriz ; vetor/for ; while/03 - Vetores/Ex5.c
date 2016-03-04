#include <stdio.h>
/*
Dado  dois  vetores  A  e  B  de  tamanhos  e
valores  distintos,  criar  um  terceiro  vetor  C
para armazenar os valores dos vetores A e B da
seguinte maneira.

*/

void main(){
    int tamanhoVetorA = 0;
    printf("digite o tamanho do vetor A\n");
    scanf("%d", &tamanhoVetorA);

    int vetorA[tamanhoVetorA];

    int tamanhoVetorB = 0;
    printf("digite o tamanho do vetor B\n");
    scanf("%d", &tamanhoVetorB);

    int vetorB[tamanhoVetorB];

    int indiceVetorA = 0;
    while(indiceVetorA < tamanhoVetorA){
        printf("Digite o valor da posicao %d\n",
               indiceVetorA);
        scanf("%d", &vetorA[indiceVetorA]);

        indiceVetorA++;
    }

    int indiceVetorB = 0;
    while(indiceVetorB < tamanhoVetorB){
        printf("Digite o valor da posicao %d\n",
               indiceVetorB);
        scanf("%d", &vetorB[indiceVetorB]);

        indiceVetorB++;
    }

    int vetorC[tamanhoVetorA + tamanhoVetorB];

    indiceVetorA = 0;
    while(indiceVetorA < tamanhoVetorA){
        vetorC[indiceVetorA] = vetorA[indiceVetorA];

        indiceVetorA++;
    }

    indiceVetorB = 0;
    while(indiceVetorB < tamanhoVetorB){
        vetorC[indiceVetorB + tamanhoVetorA] =
        vetorB[indiceVetorB];

        indiceVetorB++;
    }

    indiceVetorA = 0;
    while(indiceVetorA < tamanhoVetorA){
        printf("Vetor A posicao %d, valor %d\n",
               indiceVetorA, vetorA[indiceVetorA]);

        indiceVetorA++;
    }

    indiceVetorB = 0;
    while(indiceVetorB < tamanhoVetorB){
        printf("Vetor B posicao %d, valor %d\n",
               indiceVetorB, vetorB[indiceVetorB]);

        indiceVetorB++;
    }

    int indiceVetorC = 0;
    while(indiceVetorC <
          tamanhoVetorA + tamanhoVetorB){
        printf("Vetor C posicao %d, valor %d\n",
               indiceVetorC, vetorC[indiceVetorC]);

        indiceVetorC++;
    }
}
