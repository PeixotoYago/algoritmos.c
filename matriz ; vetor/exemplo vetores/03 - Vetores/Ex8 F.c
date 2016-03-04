//Faça um algoritmo que leia n valores inteiros e armazene em um
//vetor de n posições.
//Copie os valores para outro vetor na ordem inversa.

#include <stdio.h>
void main(){
    int tamanho = 0;

    printf("Digite o tamanho do vetor\n");
    scanf("%d", &tamanho);

    int numeros[tamanho];

    int i = 0;

    for(i = 0; i < tamanho; i++){
        printf("Digite o valor da posicao %d\n", i);
        scanf("%d", &numeros[i]);
    }

    int numerosCopiaInversa[tamanho];

    int iNumeros = tamanho - 1;
    int iCopiaInversa = 0;
    while(iNumeros > -1){
        numerosCopiaInversa[iCopiaInversa] = numeros[iNumeros];

        iNumeros--;
        iCopiaInversa++;
    }

    for(i = 0; i < tamanho; i++){
        printf("numeros[%d] = %d\n", i, numeros[i]);
        printf("numerosCopia[%d] = %d\n", i, numerosCopiaInversa[i]);
    }

}
