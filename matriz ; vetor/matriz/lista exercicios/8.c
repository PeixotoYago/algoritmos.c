#include <stdio.h>
void main(){
    int matriz[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
int i = 0;
int j = 0;
int n1 = 0;
int n2 = 0;

printf("Digite o primeiro numero:");
scanf("%d",&n1);
printf("Digite o segundo numero:");
scanf("%d",&n2);


for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(n1 == matriz[i][j]){
            printf("Posicao [%d][%d] ", i, j);
            n1 = matriz[i][j];
            }
        }
    }
for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(n2 == matriz[i][j]){
            printf("* Posicao [%d][%d] = ", i, j);
            n2 = matriz[i][j];
            }

        }
    }

    printf("%d",n1 * n2);


printf("\n\n");
system ("pause");
}

