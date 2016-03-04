#include <stdio.h>

/*
Faça um algoritmo para para multiplicar os
valores de dois vetores A e B, sendo a primeira
posição  do  vetor  A  multiplicada  pela
primeira  do  vetor  B  e  assim  por  diante.
Escreva o resultado da multiplicação na tela.
*/

void main(){
    int vetA[3] = {3, 4, 5};
    int vetB[3] = {7, 8, 7};
    //21, 32, 35

    int indice = 0;
    int multiplicacao = 0;
    while(indice < 3){
        multiplicacao = vetA[indice] * vetB[indice];

        printf("%d\n", multiplicacao);

        indice++;
    }
}




