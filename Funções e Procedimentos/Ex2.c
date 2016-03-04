#include <stdio.h>
void main(){
    int l;
    printf("Digite o lado\n");
    scanf("%d", &l);

    int area = calculaAreaQuadrado(l);

    printf("Area eh %d", area);
}

int calculaAreaQuadrado(int lado){
    int area = lado * lado;
    return area;
}
