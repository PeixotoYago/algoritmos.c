#include <stdio.h>

void main(){

int qtd = 0;
int v1[qtd];
int n = 0;
int cont = 0;
int contposi = 0;


printf("Digite a quantidade de posições que vc deseja: ");
scanf("%d", &qtd);

while (cont < qtd){

            printf("\n");


    printf("Digite um valor: ");
    scanf("%d", &v1[cont]);
    cont++;
}

cont = 0;
printf("\n");
while (cont < qtd )
{
    if (cont > 0){
        printf("\n");
    }
    if (v1[cont] > n){
    n = v1[cont];
    contposi = cont;
    }

    cont++;

}

printf("O maior numero e %d e a sua posicao e %d", n, contposi);

printf("\n\n");


}

