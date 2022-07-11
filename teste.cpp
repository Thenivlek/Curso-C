#include <stdio.h>

int main(){
    int cadastrado, ativo, logado;
    char opcao;

    /*Iguala o valor das váriaveis*/
    cadastrado = ativo = logado = 0; 


    printf("Deseja cadastrar sua conta? S/N  \n");
        scanf(" %c", &opcao);
    if(opcao == 'S'){
        cadastrado = 1;
        printf("\n Conta Cadastrada.\n");
    }

    /*--------------------------------------------*/
    printf("Deseja ativar sua conta? S/N \n" );
        scanf(" %c", &opcao);
    if(opcao == 'S'){
        ativo = 1;
        printf("\n Conta Ativada!.\n");
    }

    /*--------------------------------------------*/
    printf("Deseja logar na sua conta? S/N \n" );
        scanf(" %c", &opcao);
    if(opcao == 'S'){
        logado = 1;
        printf("\n Logado.\n");
    }
    /*--------------------------------------------*/

    /* Verificação usando operador OU
        if((cadastrado == 1) && ((ativo == 1) || (logado == 1))){
    */

    /*Verificação Condicional*/
    if((cadastrado == 1) && ((ativo == 1) && (logado == 1))){
        printf("\nSeja Bem Vindo!\n");


    }else{
        printf("\nAlgo deu errado.\n");
    }


}