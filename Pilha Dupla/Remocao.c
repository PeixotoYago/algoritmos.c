#include <stdio.h>
#include <stdlib.h>

int P[8]={1,2,3,4,5,6,7,8}; int m=8; int topo1=4; int topo2=4;

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


int main()
{
  int x, i ; char cond;

  for(i=0; i<m ; i++)
  {
  	printf("\n%d",P[i]);
  }

  do
  {
    printf("\nQual a opcao? <R>emover ou <S>air) ");
    scanf("%s", &cond);

    if(cond=='R' || cond=='r')
    {
      Remocao();
    }

    printf("\nPilha atual:");
    for(i=0;i<topo1;i++)
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

