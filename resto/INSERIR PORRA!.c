#include<stdio.h>

int i=0, n=0, m=5;

int v[5];

void inserir(int xValor)
{
     int y;

     if(n == m)
        printf("Vetor cheio!!! \n");
     else
     {
         v[n] = xValor;

         while(v[i] < xValor)
         {
           i = i + 1;
         }

         if(i < n && v[i] != xValor)
         {
           for(y = n ; y > i ; y = y - 1)
           {
             v[y] = v[ y - 1 ];
           }
           v[i] = xValor;

		   n = n + 1;
           printf("\n Inserido com sucesso \n");
         }

         else
         {
           if(i == n)
           {
             n = n + 1;
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

  for (i=0 ; i < n ; i++)
     printf("%d",v[i]);

  printf("\n--------\n\n");
}

