#include <stdio.h>

void main(){

int qtd = 0;
int v1[qtd];
int cont = 0;
int contpar = 0;
int contimpar = 0;

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
    if (v1[cont]%2 == 0){
    contpar++;
    contimpar = contimpar + 0;
    }
    if (v1[cont]%2 == 1){
        contimpar++;
        contpar = contpar + 0;
    }
    cont++;

}

printf("O vetor tem %d numeros pares e %d numeros impares.", contpar, contimpar);
printf("\n\n");


}

