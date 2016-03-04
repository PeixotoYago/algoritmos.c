#include <stdio.h>

void main(){

int qtd = 5;
int v1[qtd];
int cont = 0;


while (cont < qtd){
        if (cont > 0){
            printf("\n");
        }

    printf("Digite um valor: ");
    scanf("%d", &v1[cont]);
    cont++;
}
cont = 4;
printf("\n");
while (cont >= 0)
{
    printf("Posiçao %d: %d\n", cont, v1[cont]);
    cont--;
}
printf("\n\n");

}
