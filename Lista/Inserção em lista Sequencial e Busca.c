#include <stdio.h>


void main(){
    int vetor[5];
    int i = 0;
    int temp;
    int z,j;

    for(i = 0; i < 5; i++){
        printf("Digite um valor \n\n");
        scanf("%d", &z);
        if(z){
            for(j = 0;j<5;j++){
                if(vetor[j] = z){
                    printf("Overflool");

                }
            }
        }

        printf("posicao [%d] valor [%d]",i,vetor[i]);
    }

    system("pause");

    for(i=4;i>-1;i--){
        printf("%d",vetor[i]);
    }

}


