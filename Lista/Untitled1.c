#include<stdio.h>

int vet[3] = {1,2,3};

int busca(int num1){
    int i = 0;
    while(i < 3 || vet[i] != num1){
        i++;
    }
    if (vet[i] = num1){
        printf("Numero encontrado na posicao %d", i);
    }else{
        printf("Numero nao encontrado no array");
    }

}


void main(){
    int numero;
    scanf("%d", numero);
    printf("A busca retorna %d",busca(numero));
}
