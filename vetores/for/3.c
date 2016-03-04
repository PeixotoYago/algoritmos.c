#include <stdio.h>

void main(){

int qtd = 5;
int v1[qtd];
int v2[qtd];
int v3[qtd];
int cont = 0;

for (cont=0;cont<qtd;cont++){
        if (cont > 0){
            printf("\n");
        }

    printf("Digite um valor para o primeiro vetor: ");
    scanf("%d", &v1[cont]);
    printf("Digite um valor para o segundo vetor: ");
    scanf("%d", &v2[cont]);
}
cont = 0;
printf("\n");
for (cont=0;cont<qtd;cont++)
{
    v3[cont] = v1[cont];
    v1[cont] = v2[cont];
    v2[cont] = v3[cont];

    printf("(%d) - v1: %d  v2: %d Trocados\n", cont, v1[cont], v2[cont]);




}


printf("\n\n");



}
