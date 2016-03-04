#include <stdio.h>

void main(){

    printf("Digite o numero\n");
    int num = 0;
    scanf("%d", &num);

    int resultado = 0;
    int cont = 0;
    while(cont <= 10){
        resultado = Tabuada(cont, num);
        if(cont<10){
            printf("0");
        }
        printf("%d * %d = %d\n", cont, num, resultado);
        cont++;
    }
}

int Tabuada(int cont, int num){
    int tabuada[100][100];

    int i = 0;
    int j = 0;
    for(i = 0; i <= 100; i++){
        for(j = 0; j <= 100; j++){
            tabuada[i][j] = (i + 1) * (j + 1);
        }
    }

    return tabuada[cont - 1][num - 1];
}

