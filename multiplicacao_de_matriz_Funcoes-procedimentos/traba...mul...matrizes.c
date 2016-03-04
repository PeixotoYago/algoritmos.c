#include <stdio.h>
void main(){

    int i = 0;
    int j = 0;
    int m = 0;
    int n =0;
    int p = 0;
    int q = 0;
    int matrizA[5][5];
    int matrizB[5][5];
    int matrizC[5][5];
    int X = 0;
    int Aux = 0;

    printf("Informe a quantidade de linhas da matriz A : ");

    scanf("%d",&m);

    printf("Informe a quantidade de colunas da matriz A : ");

    scanf("%d",&n);

    printf("\n Informe a quntidade de linhas da matriz B : ");

    scanf("%d",&p);

    printf("Informe a quantidade de colunas da matriz B : ");

    scanf("%d",&q);

    if(n==p){
        printf("\n");
        for(i=0; i<m; i++){

            for(j=0; j<n; j++){

                printf(" Informe o valor da %d%c Linha e da %d%c Coluna da Matriz A: ", i+1, 167, j+1, 167);
                scanf("%d", &matrizA[i][j]);
            }
        }
        printf("\n");
        for(i=0; i<p; i++){
            for(j=0; j<q; j++){
                printf(" Informe o valor da %d%c Linha e da %d%c Coluna da 2%c Matriz B: ", i+1, 167, j+1, 167, 167);
                scanf("%d", &matrizB[i][j]);

            }
        }

        for(i=0; i<m; i++){
            for(j=0; j<q; j++){
                matrizC[i][j]=0;

                for(X=0; X<p; X++){

                    Aux += matrizA[i][X] * matrizB[X][j];
                }

                matrizC[i][j]=Aux;
                Aux=0;
            }
        }

        printf("\n\n");

        printf("***** Matriz \"A\" Gerada *****\n\n");

        for(i=0; i<m; i++){
            for(j=0; j<n; j++){

                printf("%d\t", matrizA[i][j]);
            }
            printf("\n\n");
        }

        printf("***** Matriz \"B\" Gerada *****\n\n");

        for(i=0; i<p; i++){
            for(j=0; j<q; j++){
                printf("%d\t", matrizB[i][j]);
            }

            printf("\n\n");
        }

        printf(" Matriz Multiplicada\n\n");

        for(i=0; i<m; i++){
            for(j=0; j<q; j++){

                printf("%d\t", matrizC[i][j]);
            }
            printf("\n\n");
        }
        printf("\n\n");

    } else{

        printf("\n\n Nao ha como multiplicar as matrizes dadas ");
    }

    system("pause");

}
