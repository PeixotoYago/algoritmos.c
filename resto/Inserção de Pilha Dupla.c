#include <stdio.h>
int p[5]; int topo_1 = 0, m = 6;



int Insercao(int novo_valor){

    int b;
    int topo_2 = m + 1;

    if(topo_2 != topo_1){

        if(topo_2 == topo_1){

            topo_1 = topo_1 + 1;

            p[topo_1] = novo_valor;

            printf("\nO valor foi inserido com sucesso!\n\n");

        }else{

            topo_2 = topo_2 - 1;

            p[topo_2] = novo_valor;

            printf("\nO valor foi inserido com sucesso!\n\n");
        }
    }else{
        printf("\nOverflow! A pilha ja esta cheia!\n\n");
         }

}


void main(){


    int i,x;
    char cond;

    do{
    printf("\nQual a opcao ? \n\n<I>nserir na pilha ou <S>air): ");
    scanf("%s", &cond);

    if(cond == 'i' || cond == 'I')
    {
      printf("\nDigite o valor a ser inserido na pilha: ");
      scanf("%d", &x);

      Insercao(x);

      printf("\nPilha:\n");

      for(i=topo_2; i>=topo_1; i--){
         printf("%d\n", p[i]);
      }


    }

  }while(cond != 's' && cond != 'S');



system("pause");
}
