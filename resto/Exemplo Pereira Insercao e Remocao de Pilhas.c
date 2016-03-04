#include <stdio.h>
#include <stdlib.h>

int p[5]; int topo = 0, m = 5;

void Insercao(int novo_valor)
{
  if(topo != m)
  {
    p[topo] = novo_valor;
    topo++;
    printf("\nO valor foi inserido com sucesso!\n\n");
  }
  else
    printf("\nOverflow! A pilha ja esta cheia!\n\n");

}

int main()
{
  int i; char cond, x;
  do
  {
    printf("\nQual a opcao ? \n\n<I>nserir na pilha ou <S>air): ");
    scanf("%s", &cond);

    if(cond == 'i' || cond == 'I')
    {
      printf("\nDigite o valor a ser inserido na pilha: ");
      scanf("%d", &x);

      Insercao(x);

      printf("\nPilha:\n");

      for(i=topo-1; i>=0; i--)
      {
         printf("%d\n", p[i]);
      }
    }

  }
  while(cond != 's' && cond != 'S');
}


#include <stdio.h>
#include <stdlib.h>

int p[5]={1,2,3,4,5}; int topo = 5;

void Remocao()
{
  int valor_recuperado;

  if(topo != 0)
  {
    valor_recuperado=p[topo];
    topo--;
    printf("\nO valor foi removido com sucesso!\n\n");
  }
  else printf("\nUnderflow! A pilha esta vazia!\n\n");

}


int main()
{
  int i; char cond;

  printf("Pilha: \n");
  for (i=topo-1 ; i>=0 ; i--)
  {
  	printf("%d",p[i]);
  }

  do
  {
    printf("\nQual a opcao ? \n\n<R>emocao da pilha ou <S>air): ");
    scanf("%s", &cond);

    if(cond == 'r' || cond == 'R')
    {
      Remocao();

      printf("\nPilha:\n");

      for(i=topo-1; i>=0; i--)
      {
         printf("%d\n", p[i]);
      }
    }
  }
  while(cond != 's' && cond != 'S');
}

///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int p[5]; int topo = 0, m = 5;

void Insercao(int novo_valor)
{
  if(topo != m)
  {
    p[topo] = novo_valor;
    topo++;
    printf("\nO valor foi inserido com sucesso!\n\n");
  }
  else
    printf("\nOverflow! A pilha ja esta cheia!\n\n");

}

void Remocao()
{
  int valor_recuperado;

  if(topo != 0)
  {
    valor_recuperado=p[topo];
    topo--;
    printf("\nO valor foi removido com sucesso!\n\n");
  }
  else printf("\nUnderflow! A pilha esta vazia!\n\n");

}

int main()
{
  int i,x; char cond;
  do
  {
    printf("\nQual a opcao ? \n\n<I>nserir na pilha - <R>emover - <S>air): ");
    scanf("%s", &cond);

    if(cond == 'i' || cond == 'I')
    {
      printf("\nDigite o valor a ser inserido na pilha: ");
      scanf("%d", &x);

      Insercao(x);

      printf("\nPilha:\n");

      for(i=topo-1; i>=0; i--)
      {
         printf("%d\n", p[i]);
      }
    }

    if(cond == 'r' || cond == 'R')
    {
      Remocao();

      printf("\nPilha:\n");

      for(i=topo-1; i>=0; i--)
      {
         printf("%d\n", p[i]);
      }
    }
  }
  while(cond != 's' && cond != 'S');
}
