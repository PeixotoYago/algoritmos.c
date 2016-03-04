#include <stdio.h>
float calcularPesoIdeal(float altura, int sexo){
    float pesoIdeal = 0;
    if(sexo == 2){
        pesoIdeal = 72.7 * altura - 58;
    }else{
        pesoIdeal = 62.1 * altura - 44.7;
    }
    return pesoIdeal;
}

void main(){
    float altura = 0;
    int sexo = 0;

    printf("Digite a sua altura\n");
    scanf("%f", &altura);

    printf("Digite o seu sexo\n1 - feminino\n2 - masculino\n");
    scanf("%d", &sexo);

    float pesoIdeal = calcularPesoIdeal(altura, sexo);

    printf("O seu peso ideal eh %f\n", pesoIdeal);
}


