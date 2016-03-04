#include <stdio.h>

void main(){

int qtd = 0;
int v1[qtd];
int n = 0;
int cont = 0;
int contvezes = 0;


printf("Digite a quantidade de posições que vc deseja: ");
scanf("%d", &qtd);

for (cont=0;cont<qtd;cont++){

            printf("\n");


    printf("Digite um valor: ");
    scanf("%d", &v1[cont]);

}

printf("Digite um numero para verificar qnts vezes ele aparece:");
scanf("%d", &n);

printf("\n");
for (cont=0;cont<qtd;cont++)
{
    if (cont > 0){
        printf("\n");
    }
    if (v1[cont] == n){
    contvezes++;
    }



}

printf("O numero %d aparece %d vezes.", n, contvezes);

printf("\n\n");


}

