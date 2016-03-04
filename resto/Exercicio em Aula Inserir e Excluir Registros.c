
#include<stdio.h>

int indice=0, number=0, m=5;

int i , n = 5, busca = 0;
//int v[5] = {2,5,4,7,8};

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





//////////////////////////////////////////////////////////////////////////////////////////


int Buscar1(int x)
{
   i = 0;

   while ( vetor[i] != x && i < n)
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
            vetor[j] = vetor[j+1];
          }

          n--;

          printf("\n\nO valor foi removido com sucesso!!!\n\n");
        }
     }
}


int main()
{
    int u;
    printf("Digite A Opcao \n 1 para Inserir \n 0 Para Excluir \n \n");
    scanf("%d", &u);
    if(u == 1){
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

  return main();
    }else{

    //////////////////


  int valor, c; char s = 's';

  for (i = 0 ; i < n ; i++)
  {
    printf("%d ",vetor[i]);
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
     printf("%d",vetor[i]);

  printf("\n--------\n\n");
  return main();
    }
}

