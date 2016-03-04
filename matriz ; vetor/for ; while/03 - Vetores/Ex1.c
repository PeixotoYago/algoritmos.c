#include <stdio.h>

/*
Faça  um  algoritmo  que  leia  5  valores  digitados  pelo
usuario  e  armaze  em um  vetor.
Imprima o vetor na ordem inversa.

[ 0, 0, 0, 0, 0]
  0  1  2  3  4
*/

void main(){
    int numeros[5];

    int indice = 0;
    while(indice < 5){
        printf("Digite o valor da posicao %d\n", indice);
        scanf("%d", &numeros[indice]);

        indice++;
    }

    indice = 4;

    while(indice > -1){
        printf("posicao %d, valor %d\n",
               indice, numeros[indice]);

        indice--;
    }
}





