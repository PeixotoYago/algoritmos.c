#include <stdio.h>

void main(){

int qtd = 5;
int v1[qtd];
int v2[qtd];
int mult[qtd];
int cont = 0;

for (cont=0; cont<qtd;cont++){
        if (cont > 0){
            printf("\n");
        }

    printf("Digite um valor para o primeiro vetor: ");
    scanf("%d", &v1[cont]);
    printf("Digite um valor para o segundo vetor: ");
    scanf("%d", &v2[cont]);

}

printf("\n");
for (cont=0;cont<qtd;cont++)
{
    mult[cont] = v1[cont] * v2[cont];
    printf("(%d) - A * B = %d\n", cont, mult[cont]);


}


printf("\n\n");



}
