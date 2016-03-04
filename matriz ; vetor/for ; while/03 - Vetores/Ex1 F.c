#include <stdio.h>

void main(){
    int const tamanho = 3;
    int numeros[tamanho];

    //[ 0 , 0 , 0 , 0 , 0 ]
    //  0   1   2   3   4

    int i;
    for(i = 0; i < tamanho; i++){
        printf("Digite o numero %d\n", i);
        scanf("%d", &numeros[i]);
    }

    for(i = tamanho - 1; i >= 0; i--){
        printf("Posicao %d, Valor %d\n",
               i, numeros[i]);
    }
}
