#include <stdio.h>

void main(){
    int tamanho = 3;
    int vet1[tamanho];
    vet1[0] = 4;
    vet1[1] = 5;
    vet1[2] = 3;

    int vet2[tamanho];
    vet2[0] = 9;
    vet2[1] = 3;
    vet2[2] = 4;

    int vetResultado[tamanho];

    int i;
    for(i = 0; i < tamanho; i++){
        vetResultado[i] = vet1[i] * vet2[i];
    }

    for(i = 0; i < tamanho; i++){
        printf("pos%d * pos%d: %d\n", i, i,
               vetResultado[i]);
    }
}

