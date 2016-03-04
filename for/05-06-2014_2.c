#include <stdio.h>
//FAÇA UMA FUNÇÃO QUE IMPRIMA OS VALORES DE UM VETOR

void main (){
   int i = 0;
   int tamanho = 2;
   int vetor [tamanho];

   lervaloresvetor(vetor, tamanho);

   int tamanho2 = 2;
   int vetor2 [tamanho2];

    lervaloresvetor(vetor2, tamanho2);

    imprimir(vetor, tamanho);

    imprimir(vetor2, tamanho2);
}

void lervaloresvetor(int vetor[],int tamanho){
    int i = 0;
   for (i = 0; i < tamanho; i++){
    printf ("digite o valor da posicao %d\n",i);
    scanf ("%d", &vetor[i]);
   }
}
void imprimir (int vetor[],int tamanho){
    int i = 0;
   for (i = 0; i < tamanho; i++){
    printf ("os valores na posicao %d sao: %d \n",i,vetor[i]);

    }}
