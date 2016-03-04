#include <stdio.h>


int soma(int n1, int n2){

	float n3;
	n3 = n1 + n2;
	return n3;

}

int subtracao(int n1, int n2){

	float n3;
	n3 = n1 - n2;
	return n3;

}

int divisao(int n1, int n2){

	float n3;
	n3 = n1 / n2;
	return n3;

}

int multiplicao(int n1, int n2){

	float n3;
	n3 = n1 * n2;
	return n3;

}

int main(){

	float resultado;
	int operacao,n1,n2;

	comeco:
	system("cls");

	printf("Calculadora Basica\n\n");

	printf("1 - Soma        2-Subtracao       3-Multiplicacao       4-Divisao       5-Sair\n\n");
	printf("Digite a operacao: ");
	scanf("%d",&operacao);

	if(operacao == 1 || operacao == 2 || operacao == 3 || operacao == 4 || operacao == 5){

	if(operacao == 5){

		return 0;


	}

	printf("\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	printf("\n");

	if(operacao == 1){

		resultado = soma(n1,n2);
		printf("%.0f",resultado);

	}

	if(operacao == 2){

		resultado = subtracao(n1,n2);
		printf("%.0f",resultado);

	}

	if(operacao == 3){

		resultado = multiplicao(n1,n2);
		printf("%.0f",resultado);

	}

	if(operacao == 4){

		resultado = divisao(n1,n2);
		printf("%.1f",resultado);


	}



}else{

	printf("Voce digitou uma operacao incorreta");
	getch();
	goto comeco;

}
getch();
goto comeco;
}




