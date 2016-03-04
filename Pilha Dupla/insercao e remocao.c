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


void Remocao()
{
   int vr;

   if(topo1 != 0)
   {
     topo1--;
     vr=P[topo1];
     printf("\nO valor %d foi removido da pilha!\n", vr);
   }
   else
   {
    if(topo2 != m)
    {
      vr=P[topo2];
      topo2++;
      printf("\nO valor %d foi removido da pilha!\n", vr);
    }

    else printf("\nUnderflow!\n");
   }
}


int main(){
  int x,i ; char cond;

  do
  {
    printf("\nQual a opcaor? <I>nserir - <R>emover - <S>air) ");
    scanf("%s", &cond);

    if(cond=='I' || cond=='i')
    {
      printf("\nDigite o valor a ser inserido: ");
      scanf("%d", &x);

      Insercao(x);

    }

    if(cond=='R' || cond=='r')
    {
      Remocao();
    }

    printf("\nPilha atual:");
    for(i=topo1-1; i>=0;i--)
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
