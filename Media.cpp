#include <stdio.h>

int main(){

    // Primeiro definimos nossas variáveis.
    float av1, av2, media;

    //Depois processamos a entrada
    //Primeiro com a informação para o usuário
    printf("\nInforme a nota da AV1\n");
    //Depois com o comando de leitura.
    scanf("%f", &av1);

    //Repetimos para a segunda nota.
    printf("\nInforme a nota da AV2\n");
    scanf("%f", &av2);

    //Calculamos agora a média aritmética.
    media = (av1 + av2) / 2.0;
    if(media >= 7){
        printf("Media Aprovada: %f", media);
    }else{
        printf("Media Reprovada: %f", media);
    }

}