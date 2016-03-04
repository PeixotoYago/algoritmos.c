#include <stdio.h>
#include <stdlib.h>

void main()
{
   int tabuada [10][10];
    int i = 0;
    int j = 0;
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
        tabuada[i][j] = (i + 1) * (j + 1);

    }
}

printf("digite o primeiro numero\n");
int num1 = 0;
scanf("%d", &num1);

printf("digite o segundo numero\n");
int num2 = 0;
scanf("%d", &num2);

printf("%d * %d = %d\n", num1, num2, tabuada[num1 -1][num2 - 1]);

system("pause");
}
