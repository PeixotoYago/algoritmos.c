#include<stdio.h>
int LerTamanhoVetor(){
    int lado = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &lado);
    return lado;
}

void LerValoresVetor(int vetor[], int tamanho){
    int i = 0;
    for(i = 0; i < tamanho; i++){
        printf("\nDigite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void ImprimirVetor(int vetor[], int tamanho){
    int i = 0;
    for(i = 0; i < tamanho; i++){
     if (i == 0){
        printf("\n");
    }
        printf("%d ", vetor[i]);
    }
}

void main(){
    int n = LerTamanhoVetor();
    int vetor[n];
    LerValoresVetor(vetor, n);
    ImprimirVetor(vetor, n);
}


