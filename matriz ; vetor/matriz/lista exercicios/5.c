#include <stdio.h>
void main(){
    int linha = 0;
    int coluna = 0;


    printf ("Digite a quantidade de linhas e colunas de uma matriz quadrada:");
    scanf ("%d",&linha);

    coluna = linha;

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
            if(i == j){
            printf("Diagonal Principal: Posicao [%d][%d], %d\n", i, j, matriz[i][j]);
            }
        }
    }
printf("\n\n");
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
                while(j == coluna - 1){
            printf("Diagonal Secundaria: Posicao [%d][%d], %d\n", i, j, matriz[i][j]);
            coluna--;
            }
        }
    }


printf("\n");
system ("pause");

}
