#include <stdio.h>

int main(){

	int n1;

	printf("digite o numero para fazer a multiplicacao ");

	scanf("%d",&n1);

	tabuada(n1);

}

void tabuada(int numero){

	int cont,resultado;

	for(cont = 1;cont <= 10;cont++){
    resultado = cont * numero;

    printf("%d X %d = %d\n", numero, cont, resultado);

	}

	getch();



}



