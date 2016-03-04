#include <stdio.h>

/*
Faça um algoritmo que troque os valores de dois
vetores (o vetor A receberá os valores do
vetor B, e o vetor B os de A).
*/

void main(){
    int vetA[3] = {8, 9, 5};
    int vetB[3] = {3, 4, 6};

    int aux = 0;
    int indice = 0;
    while(indice < 3){
        aux = vetA[indice];
        vetA[indice] = vetB[indice];
        vetB[indice] = aux;

        indice++;
    }

    indice = 0;
    while(indice < 3){
        printf("VetA posicao %d, valor %d\n",
               indice, vetA[indice]);

       indice++;
    }

    indice = 0;
    while(indice < 3){
        printf("VetB posicao %d, valor %d\n",
               indice, vetB[indice]);

       indice++;
    }

}






