#include <stdio.h>
#include <stdlib.h>

int P[8]; int m=8; int topo1=0; int topo2=8;

void Insercao(int nv)
{
  if(topo2 != topo1)
  {
    if(topo1 < 4)
    {
      P[topo1]=nv;
      topo1++;
      printf("\nO valor %d foi inserido na pilha!\n", nv);
    }
    else
    {
      topo2--;
      P[topo2]=nv;
      printf("\nO valor %d foi inserido na pilha!\n", nv);
    }
  }
  else
     printf("\nOverflow!\n");
}


int main()
{
  int x ; char cond; int i;

  do
  {
    printf("\n\nQual a opcao? \n\n<I>nserir em pilha dupla ou <S>air) ");
    scanf("%s", &cond);

    if(cond=='I' || cond=='i')
    {
      printf("\nDigite o valor a ser inserido: ");
      scanf("%d", &x);

      Insercao(x);

    }

    printf("\nPilha atual:");

    for(i=topo1-1;i>=0 ;i--)
    {
       printf("\n%d", P[i]);
    }

    for(i=topo2;i<m;i++)
    {
       printf("\n%d", P[i]);
    }
  }
  while (cond != 's' && cond != 'S');
}
