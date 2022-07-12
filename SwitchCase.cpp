#include <stdio.h>

/*Caso de Aninhamento Condicional onde há uma estrutura copndicional dentro de outra
int main(){
    int opcao;
     
    printf("Digite o numero\n");
    scanf("%d", &opcao);
    
    if(opcao >= 0){
        if(opcao == 0){
            printf("Numero Zero\n");
        }else{
            printf("Numero maior que Zero\n");
        }

    }else{
        printf("Numero negativo\n");
    }

}*/

/*Operação de vários casos*/
int main(){
    int opcao;
     
    printf("Digite o numero\n");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1:{
        printf("\nNumero 1\n");
        

    } 
    case 2:{
        printf("\nNumero 2\n");
        break;

    }
    default:
        printf("\nNumero diferente de 1 e 2!\n");
        break;
    }
    printf("\nFinal do Codigo!\n");
}