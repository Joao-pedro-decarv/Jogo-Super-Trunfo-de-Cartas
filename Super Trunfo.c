#include <stdio.h>

int main(){

//Carta 1
    char estado1[50],codcarta1[50],cidade1[50];
    int populacao1,pontos1;
    float area1,pib1;

//Carta 2
    char estado2[50],codcarta2[50],cidade2[50];
    int populacao2,pontos2;
    float area2,pib2;

//Entrada de dados da carta 1

    printf("Digite os dados da Carta 1: \n");

    printf("Digite o estado: \n");
    scanf("%s", estado1);
    
    printf("Digite o código da carta: \n");
    scanf("%s", codcarta1);

    printf("Digite a cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos1);

//Entrada de dados da carta 2

    printf("Digite os dados da Carta 2: \n");

    printf("Digite o estado: \n");
    scanf("%s", estado2);
    
    printf("Digite o código da carta: \n");
    scanf("%s", codcarta2);

    printf("Digite a cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos2);

//cálculos para a carta 1

    float densidade1 = populacao1 / area1;
    float pibper1 = pib1 / area1;

//cálculos para a carta 2

    float densidade2 = populacao2 / area2;
    float pibper2 = pib2 / area2;

//impressão de dados carta1

    printf("\n---------- Carta 1 ----------- \n"
    "Estado: %s \n"
    "Código da carta: %s \n"
    "Cidade: %s \n"
    "População: %d \n"
    "Área: %.2f \n"
    "PIB: %.2f \n"
    "Quantidade de Pontos Turisticos: %d \n"
    "Densidade: %.2f\n"
    "PIB percapita: %.2f\n",
    estado1, codcarta1, cidade1, populacao1, area2, pib1, pontos1,densidade1,pibper1
    ); 

//impressão de dados carta2

    printf("\n---------- Carta 2 ----------- \n"
    "Estado: %s \n"
    "Código da carta: %s \n"
    "Cidade: %s \n"
    "População: %d \n"
    "Área: %.2f \n"
    "PIB: %.2f \n"
    "Quantidade de Pontos Turisticos: %d \n"
    "Densidade: %.2f\n"
    "PIB percapita: %.2f\n",
    estado2, codcarta2, cidade2, populacao2, area2, pib2, pontos2,densidade2,pibper2
    ); 


    return 0;
}