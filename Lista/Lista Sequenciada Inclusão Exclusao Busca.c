
/////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int v[5] = {1,2,3,4,5}; int n = 5;

int Busca2( int x )
{
   int i = 0; int Busca2 = 0;

   v[n + 1] = x;

   while (v[i] != x)
   {
       i = i + 1;
   }

   if ( i != n)
     {
        Busca2 = i;
     }

    return(Busca2);

}

main()
{
      int valor ; int s;

      printf("Digite o valor "); scanf("%d",&valor);

      s = Busca2(valor);

      printf("Busca2 = %d \n",s);

}

/////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

int v[6] = {2,5,7,10,11,15}; int n = 6;

int Busca_ord1( int x )
{
   int i = 0; int Busca_ord1 = 0;

   while (v[i] < x)
   {
       i = i + 1;

   }

   if ( i <= n && v[i] == x )
   {
        Busca_ord1 = i;
   }

    return(Busca_ord1);

}

main()
{
      int valor ; int s;

      printf("Digite o valor "); scanf("%d",&valor);

	  s = Busca_ord1(valor);

      printf("Busca2 = %d \n",s);

}


////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int v[6] = {2,5,7,10,11,15}; int n = 6;

int Busca_ord2( int x )
{

int Busca_ord2;

if (x <= v[n-1])
{
   int i = 0;

   while (v[i] < x)
   {
       i = i + 1;

   }

   if ( v[i] != x )
   {
        Busca_ord2 = 0;
   }
   else
        Busca_ord2 = i;

}
else
    Busca_ord2 = 0;

return(Busca_ord2);

}


main()
{
      int valor ; int s;

      printf("Digite o valor "); scanf("%d",&valor);

	  s = Busca_ord2(valor);

      printf("Busca_ord2 = %d \n",s);

}

/////////////////////////////////////////////////
