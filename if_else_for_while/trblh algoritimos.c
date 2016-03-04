#include <stdio.h>

void main(){
char nome[20];
int perg = 0;
int cont = 0;

printf ("escreva seu nome: ");
scanf("%s", nome);

//Pergunta numero 1
printf("\n o quiz abaixo tem perguntas sobre geografia(paises e capitais), responda-o colocando apenas o numero da alternativa que achar correta.");
printf("\n\n pergunta 1. qual a capital do pais de camarões ?: \n");
printf(" 1) cairo\n 2) mosanbique\n 3) gaborone\n 4) Yaoundé\n\n");
scanf("%d" , &perg);
    if (perg == 4){
        cont = cont + 1;
        printf("\nVoce acertou!");
    }
    else {
        cont = cont + 0;
        printf("\nVoce errou!");
    }

//Pergunta numero 2

printf("\n\nPergunta 2. Qual a capital da costa do marfin ?\n");
printf(" 1) Asmara\n 2) Libreville\n 3) Abidjan \n 4) Dakar\n");
scanf("%d" , &perg);

    if (perg == 3){
        cont = cont + 1;
        printf("\nVoce acertou!");
    }
    else {
        cont = cont + 0;
        printf("\nVoce errou!");
}
//Pergunta numero 3

printf("\n\nPergunta 3. Qual a capital do Canadá?:\n");
printf(" 1) Washington\n 2) Otawwa\n 3) Bridgetown\n 4) Tegucigalpa\n");
scanf("%d" , &perg);

    if (perg == 2){
        cont = cont + 1;
        printf("\nVoce acertou!");
    }
    else {
        cont = cont + 0;
        printf("\nVoce errou!");
    }

//Pergunta numero 4

printf("\n\nPergunta 4. qual a capital da Grécia?:\n");
printf(" 1) atenas \n 2) paris \n 3) lisboa \n 4) roma \n");
scanf("%d" , &perg);

    if (perg == 1){
        cont = cont + 1;
        printf("\nVoce acertou!");
    }
    else {
        cont = cont + 0;
        printf("\nVoce errou!");
    }

//Pergunta numero 5

printf("\n\nPergunta 5. qual a capital da Ucrânia?:\n");
printf(" 1)  Moscou \n 2) Kiev \n 3) Luxemburgo \n 4) Budapeste \n");
scanf("%d" , &perg);

    if (perg == 2){
        cont = cont + 1;
        printf("\nVoce acertou!");
    }
    else {
        cont = cont + 0;
        printf("\nVoce errou!");
    }

printf("\n%s " , nome);
    if (cont == 0)
        printf("voce errou todas perguntas!!!\n\n\n");
    if (cont == 1)
        printf("voce acertou %d pergunta!!!\n\n\n", cont);
    if ((cont > 1) && (cont < 5))
        printf("voce acertou %d perguntas!!!\n\n\n", cont);
    if (cont == 5)
        printf("voce acertou todas as 5 perguntas. \n\n\n", cont);

}
