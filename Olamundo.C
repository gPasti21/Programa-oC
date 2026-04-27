#include <stdio.h>

int main(){
    
    //Definindo variáveis.
    char estado1[20], estado2[20], codigo1[20], codigo2[20], cidade1[20], cidade2[20];
    int populacao1, populacao2, turistico1, turistico2;
    float area1, area2, pib1, pib2;


    //Pedindo informações da primeira cidade.
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
    scanf("%d", &populacao1);

    printf("Quantos pontos turísticos?:  ");
    scanf("%d", &turistico1);

    printf("O PIB:  ");
    scanf("%f", &pib1);

    //Calculando Densidade demográfica e PIB per capita.
    float densidade1 = (float) populacao1 / area1;
    float percapita1 = (float) populacao1 / pib1;
    
    //Calculando Super trunfo.
    float supertrunfo1 = (float) area1 + populacao1 + pib1 + percapita1 + (1 / densidade1) + turistico1;

    //Devolvendo informações.
    printf("\nEstado: %s \n", estado1);
    printf("Cidade: %s \n", cidade1);
    printf("Codigo: %s \n", codigo1);
    printf("Area em km2: %.2f km2\n", area1);
    printf("População: %d habitantes\n", populacao1);
    printf("Pontos Turísticos: %d \n", turistico1);
    printf("PIB: %.2f bi \n", pib1);
    printf("Densidade demografica: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", percapita1);
    printf("Valor Super Trunfo: %.2f\n", supertrunfo1);

    //Pedindo informações da segunda cidade.
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
    scanf("%d", &populacao2);

    printf("Quantos pontos turísticos?:  ");
    scanf("%d", &turistico2);

    printf("O PIB:  ");
    scanf("%f", &pib2);

    //Calculando Densidade demográfica e PIB per capita.
    float densidade2 = (float) populacao2 / area2;
    float percapita2 = (float) populacao2 / pib2;

    //Calculando Super trunfo.
    float supertrunfo2 = (float) area2 + populacao2 + pib2 + percapita2 + (1 / densidade2) + turistico2;
        
    //Devolvendo informações.
    printf("\nEstado: %s \n", estado2);
    printf("Cidade: %s \n", cidade2);
    printf("Codigo: %s \n", codigo2);
    printf("Area em km2: %.2f km2\n", area2);
    printf("População: %d habitantes\n", populacao2);
    printf("Pontos Turísticos: %d \n", turistico2);
    printf("PIB: %.2f bi\n", pib2);
    printf("Densidade demografica: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", percapita2);
    printf("Valor Super Trunfo: %.2f\n", supertrunfo2);

    //Resultados
    if(area1 > area2){
        printf("\n%s Tem a area maior! %.2f Km2", cidade1, area1);
    } else {
        printf("\n%s Tem a area maior! %.2f Km2", cidade2, area2);
    }

    if(populacao1 > populacao2){
        printf("\n%s Tem mais habitantes! %d", cidade1, populacao1);
    } else {
        printf("\n%s Tem mais habitantes! %d", cidade2, populacao2);
    }

    if(turistico1 > turistico2){
        printf("\n%s Tem mais pontos turísticos! %d", cidade1, turistico1);
    } else {
        printf("\n%s Tem mais pontos turísticos! %d", cidade2, turistico2);
    }

    if(pib1 > pib2){
        printf("\n%s Tem o PIB maior! %.1fbi", cidade1, pib1);
    } else {
        printf("\n%s Tem o PIB maior! %.1fbi", cidade2, pib2);
    }

    if(densidade1 < densidade2){
        printf("\n%s Tem a Densidade Populacional menor! %.2f hab/km2", cidade1, densidade1);
    } else {
        printf("\n%s Tem a Densidade Populacional menor! %.2f hab/km2", cidade2, densidade2);
    }

    if(percapita1 > percapita2){
        printf("\n%s Tem o PIB per Capita melhor! R$ %.2f\n", cidade1, percapita1);
    } else {
        printf("\n%s Tem o PIB per Capita melhor! R$ %.2f\n", cidade2, percapita2);
    }

    if(supertrunfo1 > supertrunfo2){
        printf("\n%s Ganhou!", cidade1);
    } else {
        printf("\n%s Ganhou!", cidade2);
    }

    return 0;
}
