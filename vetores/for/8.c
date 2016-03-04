#include <stdio.h>

void main(){

int qtd = 0;
int v1[qtd];
int n = 0;
int v2[n];
int cont = 0;



printf("Digite a quantidade de posições que vc deseja: ");
scanf("%d", &qtd);



for (cont=0;cont<qtd;cont++){

            printf("\n");


    printf("Digite um valor: ");
    scanf("%d", &v1[cont]);
}
n = qtd;
printf("\n");
for (cont=0;cont<qtd;cont++)
{
    n--;
    v2[n] = v1[cont];
    printf("Vetor 2: %d Posição %d \n", v2[n], n);

}



printf("\n\n");


}


