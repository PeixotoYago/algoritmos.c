#include <stdio.h>
void main(){

 int numeros[5];

   int i;

   for (i = 0; i < 5; i++)
    {
    printf("Digite o numero %d", i);
    scanf("%d", &numeros [i]);
   }

   for(i = 0; i < 5; i++){
    printf("posicao %d, valor %d\n",i, numeros [i]);



   }



     }
