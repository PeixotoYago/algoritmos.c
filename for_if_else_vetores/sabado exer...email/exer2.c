#include <stdio.h>

int main(){

	int n1,cont,resposta;

	printf("Digite o tamanho do vetor: ");
	scanf("%d",&n1);

	printf("\n\n");

	int vetor[n1];

	for(cont=0;cont<n1;cont++){

    printf("Digite os valor %d: ",cont+1);
    scanf("%d",&vetor[cont]);

	}

	resposta = valorimpar(vetor,n1);

	printf("\nO numero de numeros impares que foi digitado foi: %d ",resposta);
	getch();
}


int valorimpar(int vetor2[], int n1){
int cont,numerodeimpar=0;
for(cont=0;cont<n1;cont++){

if(vetor2[cont] % 2 == 1){

numerodeimpar++;

		}
	}
	return numerodeimpar;
}

