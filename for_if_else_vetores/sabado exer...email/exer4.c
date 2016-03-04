#include <stdio.h>
void main(){
    int tamanho = 0;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    int v1[tamanho];
    int v2[tamanho];

    printf("\nPrimeiro Vetor.\n");
    LerValoresVetor(v1, tamanho);

    printf("\n");

    printf("\nSegundo Vetor.\n");
    LerValoresVetor(v2, tamanho);

    printf("\n");
    ImprimeVetor(v1, v2, tamanho);
}

void LerValoresVetor(int vetor[], int tamanho){
    int i = 0;
    for(i = 0; i < tamanho; i++){
        printf("\nDigite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);

    }
}

void ImprimeVetor(int v1[], int v2[], int tamanho){
    int v3[tamanho];
    int i = 0;
    for(i = 0; i< tamanho; i++){

        v3[i] = v1[i] + v2[i];
        printf("vetor1[%d] + vetor2[%d] => %d + %d = %d\n", i, i, v1[i], v2[i], v3[i]);
    }

}


