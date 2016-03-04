#include <stdio.h>
#include <stdlib.h>

int v[ 5 ] = {1,2,3,4,5}; int n = 5;

int Busca1( int x )
{
   int i = 0 ; int Busca1 = 0;

   while (i <= n)
   {

     if (v[i] == x)
       {
          Busca1 = i;
          return (Busca1);
       }
     else
          i = i + 1;
   }

        return 0;

}

int main()
{
      int valor ; int s;

      printf("Digite o valor: "); scanf("%d",&valor);

	  s = Busca1(valor);

        if(Busca1(valor) == 0){
            printf("Valor No Se encontra no Vetor \n");
            return main();
        }else{
            printf("\n\n\nO Valor %d existe e esta na posicao Esta na posicao = %d \n\n\n",valor, s);
        }



}
