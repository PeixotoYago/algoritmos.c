#include <stdio.h>

//Faça uma tabuada de multiplicação utilizando matrizes.
//O usuário informará os dois
//numeros e deverá ser retornado o valor da multiiplicação.
//Ex.: 3 * 8, o algoritmo deve
//retornar 24.

void main(){
    int tabuada[10][10];

    int linha = 0;
    int coluna = 0;
    for(linha = 0; linha < 10; linha++){
        for(coluna = 0; coluna < 10; coluna++){
            tabuada[linha][coluna] =
            (linha + 1) * (coluna + 1);
        }
    }

    int num1 = 0;
    int num2 = 0;

    printf("Digite o primeiro numero\n");
    scanf("%d", &num1);

    printf("Digite o segundo numero\n");
    scanf("%d", &num2);

    printf("%d", tabuada[num1 - 1][num2 - 1]);

}
