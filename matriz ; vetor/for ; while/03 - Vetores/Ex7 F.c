//Fa�a um algoritmo que leia n valores inteiros e
//armazene em um vetor de n posi��es.
//Retorne a posi��o do maior n�mero do vetor.

#include <stdio.h>
void main(){
    int tamanho = 0;

    //PEDIR AO USUARIO PARA DIGITAR O TAMANHO DO VETOR
    printf("Digite o tamanho do vetor\n");
    scanf("%d", &tamanho);

    int numeros[tamanho];

    //LER OS VALORES DO VETOR
    int i = 0;
    for(i = 0; i < tamanho; i++){
        printf("Digite o valor %d\n", i);
        scanf("%d", &numeros[i]);
    }

    //ACHAR O MAIOR VALOR NO VETOR
    i = 0;
    int maior = 0;
    int posicao = 0;
    //PARA I IR DO VALOR INICIAL; ATE I < TAMANHO(VALOR FINAL), INCREMENTA O I
    for(i = 0; i < tamanho; i++){

        if(numeros[i] > maior){
            maior = numeros[i];
            posicao = i;
        }

    }

    printf("A posicao do maior valor e %d", posicao);
}
