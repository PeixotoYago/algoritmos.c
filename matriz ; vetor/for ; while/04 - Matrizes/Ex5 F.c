#include <stdio.h>

//Faça um algoritmo que leia os valores de uma matriz
//nxn informados pelo usuário.
//Imprima os valores das duas diagonais da matriz.

void main(){
    int tamanho = 0;
    printf("Digite o tamanho da matriz\n");
    scanf("%d", &tamanho);

    int matriz[tamanho][tamanho];

    int linha = 0;
    int coluna = 0;

    //while(linha < tamanho){
        //while(coluna < tamanho){
            //printf("Digite o valor da posicao %d%d\n",
                   //linha, coluna);
            //scanf("%d", &matriz[linha][coluna]);

            //coluna++;
        //}
        //coluna = 0;
        //linha++;
    //}

    for(linha = 0; linha < tamanho; linha++){
        for(coluna = 0; coluna < tamanho; coluna++){
            printf("Digite o valor da posicao %d%d\n",
                   linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    //PRIMEIRA DIAGONAL
    for(linha = 0; linha < tamanho; linha++){
        for(coluna = 0; coluna < tamanho; coluna++){
            if(linha == coluna){
                printf("Diagonal A Matriz[%d][%d] = %d\n",
                       linha, coluna, matriz[linha][coluna]);
            }
        }
    }

    //int indice = 0;
    //for(indice = 0; indice < tamanho; indice++){
        //printf("Diagonal A Matriz[%d][%d] = %d\n",
                       //indice, indice, matriz[indice][indice]);
    //}

    coluna = 0;
    for(linha = tamanho - 1; linha >= 0; linha--){
        printf("Diagonal B Matriz[%d][%d] = %d\n",
            linha, coluna, matriz[linha][coluna]);

        coluna++;
    }

}
