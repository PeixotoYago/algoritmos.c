#include<stdio.h>

int indice=0, number=0, m=5;

int vetor[5];

void inserir(int xValor)
{
     int y;

     if(number == m)
        printf("Vetor cheio!!! \n");
     else
     {
         vetor[number] = xValor;

         while(vetor[indice] < xValor)
         {
           indice = indice + 1;
         }

         if(indice < number && vetor[indice] != xValor)
         {
           for(y = number ; y > indice ; y = y - 1)
           {
             vetor[y] = vetor[ y - 1 ];
           }
           vetor[indice] = xValor;

		   number = number + 1;
           printf("\n Inserido com sucesso \n");
         }

         else
         {
           if(indice == number)
           {
             number = number + 1;
             printf("\nInserido com sucesso!!! \n");
           }
           else
             printf("\nJa existe no vetor!!! \n");
         }
     }
}


int main()
{
  int valor ; char s='s';

  while (s == 's' || s=='S')
  {
    printf("Digite o valor: ") ; scanf("%d",&valor);

    inserir( valor );

    printf("Outro valor [s/n]: "); scanf("%s",&s);

  }

  printf("\n--------\n");

  for (indice=0 ; indice < number ; indice++)
     printf("%d",vetor[indice]);

  printf("\n--------\n\n");
}
