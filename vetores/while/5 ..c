#include <stdio.h>

void main(){

int v1[2] = {2, 7};
int v2[3] = {8, 5, 3};
int v3[5];
int cont = 0;


v3[0] = v1[0];
v3[1] = v2[0];
v3[2] = v1[1];
v3[3] = v2[1];
v3[4] = v2[2];

while (cont < 5){
    printf("%d", v3[cont]);
cont++;
}


}
