#include <stdio.h>
void main(){

 int qtdnotas = 4;
    float notas[qtdnotas];
    int indice = 0;
    while(indice < qtdnotas){
        printf("Digite a nota %d\n", indice + 1);
        scanf("%f", &notas[indice]);

        indice++;
    }

    indice = 0;
    while(indice < qtdnotas){
        printf("Nota %d: %f\n", indice + 1,
               notas[indice]);

        indice++ ;
        }
     }
