#include <stdio.h>
void main(){
    int qtdLinha = 2;
    int matriz[qtdLinha][3];

    LerValoresMatriz(matriz, qtdLinha);

    ImprimirMatriz(matriz, qtdLinha);
}

void LerValoresMatriz(int matriz[][3], int qtdLinha){
    int linha = 0;
    int coluna = 0;
    for(linha = 0; linha < qtdLinha; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("Digite o valor da posicao %d%d\n",
                   linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
}

void ImprimirMatriz(int matriz[][3], int qtdLinha){
    int linha = 0;
    int coluna = 0;
    for(linha = 0; linha < qtdLinha; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("Matriz[%d][%d] = %d\n",
                   linha, coluna, matriz[linha][coluna]);
        }
    }
}
