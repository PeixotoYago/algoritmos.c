#include <stdio.h>

int vetorA[100],vetorB[100],vetorC[100]; // declarei os vetores como GlOBAL para facilitar e coloquei tamanho maximo fixo.

//o usuario nao ira precisar somar mais vetores que isso, podendo aumentar, estava dando um erro quando tentava
//retornar o vetorC da função.

int main(){
	
	int n1,cont;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&n1);
	printf("\n\n");

	
	
	for(cont=0;cont<n1;cont++){
		
		printf("Digite os valor do vetor A (%d): ",cont+1);
		scanf("%d",&vetorA[cont]);
		
	}
	printf("\n\n");
	for(cont=0;cont<n1;cont++){
		
		printf("Digite os valor do vetor B (%d): ",cont+1);
		scanf("%d",&vetorB[cont]);
		
	}


	somadevetores(n1);

	printf("\n\n");
	for(cont=0;cont<n1;cont++){
		
		printf("Os resultados sao: %d\n ",vetorC[cont]);
		
		
	}
getch();

}

int somadevetores(int n1){
	
	int cont;

	for(cont=0;cont<n1;cont++){
		
		vetorC[cont] = vetorA[cont] + vetorB[cont];
		
	}

	return 0;
	
}


