#include <stdio.h>

void main(){

int qtd = 0;
int v1[qtd];
int cont = 0;

printf("Digite a quantidade de posi��es que vc deseja: ");
scanf("%d", &qtd);

while (cont < qtd){

            printf("\n");


    printf("Digite um valor: ");
    scanf("%d", &v1[cont]);
    cont++;
}

cont = 0;
printf("\n\n");
while (cont < qtd)
{
    if (cont > 0){
        printf("\n");
    }
    if (cont%2 == 0){
        printf("Posi�ao par: %d", v1[cont]);
    }

    cont++;

}
cont = 0;
printf("\n");
while (cont < qtd)
{
    if (cont > 0){
        printf("\n");
    }
    if (cont%2 == 1){
        printf("Posi�ao impar: %d", v1[cont]);
    }

    cont++;

}

printf("\n\n");


}
