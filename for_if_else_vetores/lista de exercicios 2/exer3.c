#include <stdio.h>
void main(){
    int tamanho = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int v[tamanho];

    LerValoresVetor(v, tamanho);
    printf("\n");
    ImprimeVetor(v, tamanho);


}

void LerValoresVetor(int vetor[], int tamanho){
    int i = 0;

    for(i = 0; i < tamanho; i++){
        printf("\nDigite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);

    }
}

void ImprimeVetor(int vetor[], int tamanho){
    int i = 0;
    int maior = 0;
    for(i = 0; i< tamanho; i++){
        printf("Vetor[%d] = %d\n", i, vetor[i]);
        if(vetor[i] > maior){
            maior = vetor[i];
        } else{
            maior = maior + 0;
        }


    }
    printf("\nO maior numero do vetor acime e: %d.\n", maior);

}

