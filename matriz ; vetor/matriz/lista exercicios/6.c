#include <stdio.h>
void main(){
    int linha1 = 0;
    int coluna1 = 0;
    int linha2 = 0;
    int coluna2 = 0;


    printf ("Digite a quantidade de linhas da primeira matriz:");
    scanf ("%d",&linha1);
    printf ("Digite a quantidade de colunas da primeira matriz:");
    scanf ("%d",&coluna1);

    int matriz1[linha1][coluna1];

    int i1 = 0;
    int j1 = 0;
    int soma1 = 0;
    for(i1 = 0; i1 < linha1; i1++){
        for(j1 = 0; j1 < coluna1; j1++){
            printf("Digite o valor %d%d\n", i1,j1);
            scanf("%d", &matriz1[i1][j1]);
            soma1 = soma1 + matriz1[i1][j1];
        }
    }

    printf ("Digite a quantidade de linhas da segunda matriz:");
    scanf ("%d",&linha2);
    printf ("Digite a quantidade de colunas da segunda matriz:");
    scanf ("%d",&coluna2);

    int matriz2[linha2][coluna2];

    int i2 = 0;
    int j2 = 0;
    int soma2 = 0;
    for(i2 = 0; i2 < linha2; i2++){
        for(j2 = 0; j2 < coluna2; j2++){
            printf("Digite o valor %d%d\n", i2,j2);
            scanf("%d", &matriz2[i2][j2]);
            soma2 = soma2 + matriz2[i2][j2];
        }
    }
    printf("\n\nA soma da primeira matriz: %d\n", soma1);
    printf("A soma da segunda matriz: %d\n", soma2);
    int soma = 0;
    soma = soma1 + soma2;
    printf("\n\n A soma total: %d\n", soma);


printf("\n");
system ("pause");
}
