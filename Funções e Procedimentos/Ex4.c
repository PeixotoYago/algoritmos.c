#include <stdio.h>
void main(){
    int tamanho = 3;
    int v[tamanho];

    LerValoresVetor(v, tamanho);

    ImprimeVetor(v, tamanho);
}

void LerValoresVetor(int vetor[], int tamanho){
    int i = 0;
    for(i = 0; i < tamanho; i++){
        printf("Digite o valor da posicao %d\n", i);
        scanf("%d", &vetor[i]);
    }
}

void ImprimeVetor(int vetor[], int tamanho){
    int i = 0;
    for(i = 0; i< tamanho; i++){
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }
}
