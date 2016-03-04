
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
