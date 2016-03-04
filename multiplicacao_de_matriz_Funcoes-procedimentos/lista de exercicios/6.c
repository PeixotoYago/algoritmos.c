
#include<stdio.h>

int pesoIdeal(float alt, int sex){
    if (sex == 1){
        return (62.1 * alt) - 44.7;
    }
    if (sex == 2){
        return (72.7 * alt) - 58;
    }
}

void main(){
float alt = 0;
printf("Digite a sua altura: ");
scanf("%f", &alt);
int sex = 0;
printf("Qual e o seu sexo: 1) Masc; 2) Fem : ");
scanf("%d", &sex);
float resu = pesoIdeal(alt, sex);

printf("\nO peso ideal para voce e aproximado: %.0f kilogramas", resu);


}

