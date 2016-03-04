#include<stdio.h>
int linhasMatriz(){
    int lado = 0;
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &lado);
    return lado;
}
int colunasMatriz(){
    int lado = 0;
    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d", &lado);
    return lado;
}

void LerValoresMatriz(int matriz[][], int linha, int coluna){
    int i = 0;
    int j = 0;
    for(i = 0; i < linha; i++){
            for(i = 0; i < coluna; i++){
                printf("\nDigite o valor da posicao [%d][%d]: ", i, j);
                scanf("%d", &matriz[i][j]);
            }
    }
}

void ImprimirMatriz(int matriz[][], int linha, int coluna){
    int i = 0;
    int j = 0;
    for(i = 0; i < linha; i++){
            for(j = 0; i < coluna; i++){
     if (i == 0 && j == 0){
        printf("\n");
    }
        printf("%d ", matriz[i][j]);
    }
}

void main(){
    int linha = linhasMatriz();
    int coluna = colunasMatriz();
    int matriz[linha, coluna];
    LerValoresMatriz(matriz, linha, coluna);
    ImprimirMatriz(matriz, linha, coluna);
}


