#include <stdio.h>
void main(){
    int n;
    printf("Digite um numero\n");
    scanf("%d", &n);

    int resultado;
    resultado = verificaNumeroParImpar(n);

    if(resultado == 0){
        printf("Eh par\n");
    }else{
        printf("Eh impar\n");
    }
}

int verificaNumeroParImpar(int numero){
    if(numero % 2 == 0){
        return 0;
    }else{
        return 1;
    }
}
