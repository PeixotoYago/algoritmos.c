//Faça um algoritmo que leia n valores inteiros e armazene
//em um vetor de n posições.
//Em  um  novo  vetor,  armazene  os  números  pares  do
//vetor  inicial.  Em  outro  vetor,
//armazene os números ímpares.

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

    //DESCOBRE A QTD DE NUMEROS PARES E IMPARES PARA
    //CRIAR OS VETORES
    int qtdPares = 0;
    int qtdImpares = 0;
    for(i = 0; i < tamanho; i++){
        if(numeros[i] % 2 == 0){
            qtdPares++;
        }else{
            qtdImpares++;
        }
    }

    //CRIA OS VETORES PARES DE IMPARES E OS SEUS INDICES
    int numerosPares[qtdPares];
    int iPares = 0;
    int numerosImpares[qtdImpares];
    int iImpares = 0;

    //PERCORRE OS NUMEROS E VERIFICA
    //SE PAR => GUARDA NO VETOR PAR E INCREMENTA O INDICE
    //SE IMPAR => GUARDA NO VETOR IMPAR E INCREMENTA O INDICE
    for(i = 0; i < tamanho; i++){
        if(numeros[i] % 2 == 0){
            numerosPares[iPares] = numeros[i];
            iPares++;
        }else{
            numerosImpares[iImpares] = numeros[i];
            iImpares++;
        }
    }

    //IMPRIME OS NUMEROS PARES
    for(i = 0; i < qtdPares; i++){
        printf("Numeros pares posicao %d, %d\n", i, numerosPares[i]);
    }

    //IMPRIME OS NUMEROS IMPARES
    for(i = 0; i < qtdImpares; i++){
        printf("Numeros impares posicao %d, %d\n", i, numerosImpares[i]);
    }
}
