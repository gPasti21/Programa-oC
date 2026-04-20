#include <stdio.h>

int main(){
    
    //Definindo variáveis.
    char estado1[20], estado2[20], codigo1[20], codigo2[20], cidade1[20], cidade2[20];
    int população1, população2, turistico1, turistico2;
    float area1, area2, pib1, pib2;


    //Pedindo informações da primeira cidade
    printf("Bem vindo ao Supertrunfo! Para iniciar digite as seguintes informações da cidade escolhida.\n");

    printf("Estado onde a cidade fica:  ");
    scanf("%s", estado1);

    printf("Nome da cidade escolhida:  ");
    scanf("%s", cidade1);

    printf("Codigo da cidade:  ");
    scanf("%s", codigo1);

    printf("Area da cidade (em km2):  ");
    scanf("%f", &area1);
    
    printf("População:  ");
    scanf("%d", &população1);

    printf("Quantos pontos turísticos?:  ");
    scanf("%d", &turistico1);

    printf("O PIB:  ");
    scanf("%f", &pib1);

    //confirmando informações
    printf("\nEstado: %s \n", estado1);
    printf("Cidade: %s \n", cidade1);
    printf("Codigo: %s \n", codigo1);
    printf("Area em km2: %f \n", area1);
    printf("População: %d \n", população1);
    printf("Pontos Turísticos: %d \n", turistico1);
    printf("PIB: %f \n", pib1);

    //Pedindo informações da segunda cidade
    printf("\nEscolha outra cidade e preencha as informações.\n");
   
    printf("Estado onde a cidade fica:  ");
    scanf("%s", estado2);

    printf("Nome da cidade escolhida:  ");
    scanf("%s", cidade2);

    printf("Codigo da cidade:  ");
    scanf("%s", codigo2);

    printf("Area da cidade (em km2):  ");
    scanf("%f", &area2);
    
    printf("População:  ");
    scanf("%d", &população2);

    printf("Quantos pontos turísticos?:  ");
    scanf("%d", &turistico2);

    printf("O PIB:  ");
    scanf("%f", &pib2);
        
    //confirmando informações
    printf("\nEstado: %s \n", estado2);
    printf("Cidade: %s \n", cidade2);
    printf("Codigo: %s \n", codigo2);
    printf("Area em km2: %f \n", area2);
    printf("População: %d \n", população2);
    printf("Pontos Turísticos: %d \n", turistico2);
    printf("PIB: %f \n", pib2);

    return 0;
}
