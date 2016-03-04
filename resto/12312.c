#include <stdio.h>

int vetor[6] = {2, 5, 7, 10, 11, 15};
int n = 6;

int Busca1(int x)
{
    int i = 0;
    int Busca1 = 0;


    while(i <= n)
    {

        if (vetor[i] == x)
        {
            return i + 1;

            i = n + 1;
        }
        else
        {
            i++;
        }
    }

}

void main()
{
    int x;
    printf("Digite o Numero");
    scanf("%d", &x);

    printf("A posicao eh:  %d", Busca1(x));


}
