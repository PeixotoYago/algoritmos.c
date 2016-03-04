#include <stdio.h>

void main(){

int vet1[2] = {2, 7};
int vet2[3] = {8, 5, 3};
int vet3[5];
int cont = 0;


vet3[0] = vet1[0];
vet3[1] = vet2[0];
vet3[2] = vet1[1];
vet3[3] = vet2[1];
vet3[4] = vet2[2];

while (cont < 5){
    printf("%d", vet3[cont]);
cont++;
}


}
