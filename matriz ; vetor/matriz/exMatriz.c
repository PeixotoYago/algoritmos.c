#include <stdio.h>
void main(){
    int linha = 2;
    int coluna = 2;
    int matriz[linha][coluna];

    int i = 0;
    int j = 0;
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("Digite o valor %d%d\n", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("Posicao [%d][%d], %d\n", i, j, matriz[i][j]);
        }
    }

}
