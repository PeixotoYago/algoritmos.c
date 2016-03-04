#include <stdio.h>
void main(){
    int linha = 0;
    int coluna = 0;


    printf ("Digite a quantidade de linhas e colunas de uma matriz quadrada:");
    scanf ("%d",&linha);

    coluna = linha;
    int matriz[linha][coluna];
    int matriz2[linha][coluna];
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
            printf("Primeira Martiz: Posicao [%d][%d], %d\n", i, j, matriz[i][j]);
            matriz2[j][i] = matriz[i][j];
        }
    }
    printf("\n");
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("Segunda Matriz: Posicao [%d][%d], %d\n", i, j, matriz2[i][j]);

        }
    }

printf("\n");
system ("pause");
}
