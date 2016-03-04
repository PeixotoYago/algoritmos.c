#include <stdio.h>

void main(){

int qtd = 5;
int v1[qtd];
int v2[qtd];
int mult[qtd];
int cont = 0;

while (cont < qtd){
        if (cont > 0){
            printf("\n");
        }

    printf("Digite um valor para o primeiro vetor: ");
    scanf("%d", &v1[cont]);
    printf("Digite um valor para o segundo vetor: ");
    scanf("%d", &v2[cont]);
    cont++;
}
cont = 0;
printf("\n");
while (cont < qtd)
{
    mult[cont] = v1[cont] * v2[cont];
    printf("(%d) - A * B = %d\n", cont, mult[cont]);
    cont++;

}


printf("\n\n");



}
