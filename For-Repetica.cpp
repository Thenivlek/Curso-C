#include <stdio.h>
#include <stdlib.h>
/*
======================================================================================================

--Estrutura com for que repete a Quantidade de linhas digitadas pelo usuário

int main(){
    int num, count;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for(count = 1 ; count <= num; count = count+1){
        printf("Numero = %d \n",num);
    }
    return 0;
}

======================================================================================================
--Estrutura que não finaliza a execução enquanto a clausula do while não for falsa
int main(){
    int num;

    printf ("Digite um numero: ");
    scanf("%d",&num);
    while (num!=0){
        printf ("O numero lido foi = %d\n\n ",num);
        printf ("Digite um numero: ");
        scanf("%d",&num);
    }

    return 0;
}

======================================================================================================
--Estrutura que recebe 15 inputs e seleciona o maior número usando for e if
int main(){
    
   
    int count, num, maior;
    maior = 0;
    for(count =1; count <= 15; count++){
        printf ("Digite um numero: ");
        scanf("%d",&num);
        if(num > maior){
            maior = num;
        }
    }
    printf("O maior numero = %d", maior);
    return 0;
}

======================================================================================================
--Estrutura de repetição com clausula de saída usando DoWhile
*/
int main(){
    int num;
    
    do{
        printf ("Digite um numero: \n");
        scanf("%d",&num);
        if(num != 0){
            printf ("Numero = %d\n",num);
        }
    } while (num != 0);
  
    return 0;
}


