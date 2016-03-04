#include <stdio.h>
void main(){
int operacao = 0;
printf("escolha a operacao\n\n");

printf("1 - Soma        2-Subtracao       3-Multiplicacao       4-Divisao       5-Sair\n\n");
scanf("%d",&operacao);
int n1 = 0;
int n2 = 0;



while(operacao < 5){
    printf("\nDigite o primeiro numero: ");
    scanf("%d",&n1);
    printf("\nDigite o segundo numero: ");
    scanf("%d",&n2);

    if(operacao == 1){
        FuncSoma(n1, n2);
    }
    if(operacao == 2){
        FuncSub(n1, n2);
    }
    if(operacao == 3){
        FuncMult(n1, n2);
    }
    if(operacao == 4){
        FuncDiv(n1, n2);
    }


   printf("1 - Soma        2-Subtracao       3-Multiplicacao       4-Divisao       5-Sair\n\n");

    scanf("%d",&operacao);
};
}

void FuncSoma(int n1, int n2){
    int n = 0;
    n = n1 + n2;
    printf("\n%d + %d = %d\n", n1, n2, n);
}

void FuncSub(int n1, int n2){
    int n = 0;
    n = n1 - n2;
    printf("\n%d - %d = %d\n", n1, n2, n);
}

void FuncMult(int n1, int n2){
    int n = 0;
    n = n1 * n2;
    printf("\n%d * %d = %d\n", n1, n2, n);
}

void FuncDiv(int n1, int n2){
    int n = 0;
    int resto = 0;
    n = n1 / n2;
    resto = (n1) - (n * n2);
    printf("\n%d / %d = %d\tresto = %d\n", n1, n2, n, resto);
}
