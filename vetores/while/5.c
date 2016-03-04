#include <stdio.h>

void main(){

int qtd = 0;
int v1[qtd];
int n = 0;
int cont = 0;
int contvezes = 0;


printf("Digite a quantidade de posições que vc deseja: ");
scanf("%d", &qtd);

while (cont < qtd){

            printf("\n");


    printf("Digite um valor: ");
    scanf("%d", &v1[cont]);
    cont++;
}

printf("Digite um numero para verificar qnts vezes ele aparece:");
scanf("%d", &n);

cont = 0;
printf("\n");
while (cont < qtd )
{
    if (cont > 0){
        printf("\n");
    }
    if (v1[cont] == n){
    contvezes++;
    }

    cont++;

}

printf("O numero %d aparece %d vezes.", n, contvezes);

printf("\n\n");


}

