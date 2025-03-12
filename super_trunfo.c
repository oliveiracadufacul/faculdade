#include <stdio.h>
 
int main()
{
    char estado1, estado2,
         cidade1[100], cidade2[100],
         codigo1[5], codigo2[5];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;

    // Carta 1
    printf("Carta 1: \n");
    printf("Digite o estado (letra de A a H): \n");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta (ex: A01, B03): \n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("Digite o Número de Pontos Turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    printf("Digite a Área (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    // Carta 2
    printf("Carta 2: \n");
    printf("Digite o estado (letra de A a H): \n");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta (ex: A01, B03): \n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite o Número de Pontos Turisticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("Digite a Área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n\n", pontosTuristicos1);

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2);

    return 0;
}