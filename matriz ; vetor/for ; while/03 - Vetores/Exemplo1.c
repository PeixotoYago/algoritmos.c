#include <stdio.h>
void main(){
    float geografia[3];
    float matematica[3];

    printf("Digite as notas de geografia\n");
    scanf("%f", &geografia[0]);
    scanf("%f", &geografia[1]);
    scanf("%f", &geografia[2]);

    float mediaGeografia =
        (geografia[0] + geografia[1] + geografia[2])
        / 3;

    printf("Digite as notas de matematica\n");
    scanf("%f", &matematica[0]);
    scanf("%f", &matematica[1]);
    scanf("%f", &matematica[2]);

    float mediaMatematica =
        (matematica[0] + matematica[1] + matematica[2])
        / 3;

    printf("Notas de geografia:\n");
    printf("Nota 1: %.2f\n", geografia[0]);
    printf("Nota 2: %.2f\n", geografia[1]);
    printf("Nota 3: %.2f\n", geografia[2]);
    printf("Media final: %.2f\n", mediaGeografia);

}
