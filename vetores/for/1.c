#include <stdio.h>

void main(){

int qtd = 5;
int v1[qtd];
int cont = 0;


for (cont=0; cont<qtd;cont++){
        if (cont > 0){
            printf("\n");
        }

    printf("Digite um valor: ");
    scanf("%d", &v1[cont]);

}

printf("\n");
for (cont=4; cont>=0;cont--)
{
    printf("Posiçao %d: %d\n", cont, v1[cont]);

}
printf("\n\n");

}
