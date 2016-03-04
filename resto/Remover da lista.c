#include<stdio.h>


int i , n = 5, busca = 0; int v[5] = {2,5,4,7,8};

int Buscar1(int x)
{
   i = 0;

   while ( v[i] != x && i < n)
   {
      i++;
   }

   if ( i == n )
   {
      busca = 0;
   }
   else
   {
     busca = 1;
   }

   return( busca);
 }


void remover(int x)
{
     int z, j;

     if(n == 0)
        printf("\nO Vetor esta vazia!\n");
     else
     {
        z = Buscar1(x);

        if(z == 0)
           printf("\nO Valor nao existe no vetor!\n\n");
        else
        {

          for(j = i ;j < n ; j++)
          {
            v[j] = v[j+1];
          }

          n--;

          printf("\n\nO valor foi removido com sucesso!!!\n\n");
        }
     }
}


int main()
{
  int valor, c; char s = 's';

  for (i = 0 ; i < n ; i++)
  {
    printf("%d ",v[i]);
  }

  printf("\n");

  while (s == 's' || s=='S')
  {
    printf("Digite o valor a remover: ") ; scanf("%d",&valor);

    remover( valor );

    printf("Outro valor [s/n]: "); scanf("%s",&s);

  }

  printf("\n--------\n");

  for (i=0 ; i < n ; i++)
     printf("%d",v[i]);

  printf("\n--------\n\n");

}
