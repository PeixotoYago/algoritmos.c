#include <stdio.h>
void main(){
    int linha = 0;
    int coluna = 0;


    printf ("Digite a quantidade de linhas:");
    scanf ("%d",&linha);
    printf ("Digite a quantidade de colunas:");
    scanf ("%d",&coluna);

    int matriz[linha][coluna];
    int i = 0;
    int j = 0;
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("Digite o valor %d%d\n", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }


    for(j = 0; j < coluna; j++){
        for(i = 0; i < linha; i++){
            printf("Linha %d coluna %d, %d\n", i, j, matriz[i][j]);
        }
    }

printf("\n");
system ("pause");
}
