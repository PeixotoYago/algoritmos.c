#include <stdio.h>

void main(){

int qtd = 0;
int v1[qtd];
int cont = 0;

printf("Digite a quantidade de posi��es que vc deseja: ");
scanf("%d", &qtd);

for (cont=0;cont<qtd;cont++){

            printf("\n");


    printf("Digite um valor: ");
    scanf("%d", &v1[cont]);
}


printf("\n\n");
for (cont=0;cont<qtd;cont++)
{
    if (cont > 0){
        printf("\n");
    }
    if (cont%2 == 0){
        printf("Posi�ao par: %d", v1[cont]);
    }



}

printf("\n");
for (cont=0;cont<qtd;cont++)
{
    if (cont > 0){
        printf("\n");
    }
    if (cont%2 == 1){
        printf("Posi�ao impar: %d", v1[cont]);
    }

}

printf("\n\n");


}
