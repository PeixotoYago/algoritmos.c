#include <stdio.h>

void main(){

int qtd = 0;
int contpar = 0;
int contimpar = 0;
int v1[qtd];
int v2[contpar];
int v3[contimpar];
int cont = 0;


printf("Digite a quantidade de posições que vc deseja: ");
scanf("%d", &qtd);

for (cont=0;cont<qtd;cont++){

            printf("\n");


    printf("Digite um valor: ");
    scanf("%d", &v1[cont]);
}

printf("\n");
for (cont=0;cont<qtd;cont++)
{
    if (cont > 0){
        printf("\n");
    }
    if (v1[cont]%2 == 0){
    v2[contpar] = v1[cont];
    contpar++;
    }
    if (v1[cont]%2 == 1){
        v3[contimpar] = v1[cont];
        contimpar++;
    }

}

printf("O vetor inicial tem %d numeros pares e %d numeros impares.", contpar, contimpar);

printf("\n");
for (cont=0;cont<contpar;cont++)
{
printf("\n Vetor 2 com numeros pares: %d", v2[cont]);
printf("\n\n");
}
cont = 0;
printf("\n");
for (cont=0;cont<contimpar;cont++)
{
printf("\n Vetor 3 com numeros impares: %d", v3[cont]);
printf("\n\n");
}

}

