#include <stdio.h>
void main(){
    //EXEMPLO DE ENQUANTO
    /*int numero = 1;
    while(numero <= 100){
        printf("%d\n", numero);

        numero++;
    }*/

    //[ 2, 5, 7, 4 ]
    int qtdNotas = 3;
    float notas[qtdNotas];
    int indice = 0;
    while(indice < qtdNotas){
        printf("Digite a nota %d\n", indice + 1);
        scanf("%f", &notas[indice]);

        indice++;
    }

    indice = 0;
    while(indice < qtdNotas){
        printf("Nota %d: %f\n", indice + 1,
               notas[indice]);

        indice++;
    }



    //EXEMPLO O PARA-FAÇA
    /*int i = 0;
    for(i = 1; i <= 100; i++){
        printf("%d\n", i);
    }*/


}
