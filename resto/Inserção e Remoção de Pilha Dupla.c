#include <stdio.h>


int InserirPilha(){
    printf("Entrou na Inserir Pilha");

}
int RemoverPilha(){
    printf("Entrou na Remover Pilha \n");

}

void main(){
    int opcao;

    printf("Digite a Opcao que voce deseja \n \n");
    printf("Digite 1 Para Inserir \nDigite 2 Para Excluir \nDigite 0 Para Sair \n\n Valor:");
    scanf("%d", &opcao);

    if(opcao == 1){

        InserirPilha();
        printf("\n Saiu da Funcao Inserir Pilha \n");

    }if(opcao == 0){

        system("exit");

    }if(opcao == 2){

        RemoverPilha();
        printf("\n Saiu da Funcao Remover Pilha \n");


    }else{

        printf("\n Voce digitou um Numero invalido! \n");

    }




system("pause");
}
