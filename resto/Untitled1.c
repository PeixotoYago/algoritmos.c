#include <stdio.h>

int x = 0;
int y = 0;
int n = 0;
int m  = 5;
int v[5];


int inserir(int x,int y){
    if(x < m){
        v[x] = y;
        n = n + 1;
        printf("Inserido com sucesso !!");
    }else{
        printf("lista cheia ... \n\n");
    }
    return n;


}


void main(){
    int y;
    char sim = 's';

    while(sim == 's' || sim == 'S'){
        printf("\nDigite o Valor: ");
        scanf("%d", &y);

        n = inserir(n, y);

        printf("\n \nDeseja outro valor S/N: ");
        scanf("%s", &sim);

    for(y = 0; y < m; y++){
        printf(" %d ", v[y]);
    }

}
}
