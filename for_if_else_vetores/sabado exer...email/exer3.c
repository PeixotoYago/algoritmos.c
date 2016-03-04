#include <stdio.h>

int main(){

	int n1,cont,resposta;

	printf("Digite o tamanho do vetor: ");
	scanf("%d",&n1);
	printf("\n\n");
	int vetor[n1];

	for(cont=0;cont<n1;cont++){

		printf("Digite os valor numero %d: ",cont+1);
		scanf("%d",&vetor[cont]);

	}

		resposta = valorimpar(vetor,n1);

	printf("\nO maior valor digitado foi: %d ",resposta);
}

int valorimpar(int vetor2[], int n1){

	int cont,maior=0;
	for(cont=0;cont<n1;cont++){

		if(vetor2[cont] > maior){

			maior = vetor2[cont];

		}


	}
	return maior;
}


