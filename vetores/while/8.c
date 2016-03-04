#include <stdio.h>

void main(){

int qtd = 0;
int v1[qtd];
int n = 0;
int v2[n];
int cont = 0;



printf("Digite a quantidade de posições que vc deseja: ");
scanf("%d", &qtd);

n = qtd;

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
    n--;
    v2[n] = v1[cont];
    printf("Vetor 2: %d Posicao %d \n", v2[n], n);
    cont++;

}



printf("\n\n");


}


