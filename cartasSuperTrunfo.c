#include <stdio.h>

void main() {
    // Variáveis para armazenar os dados das cartas
    char estado1, estado2, 
         codigo1[4], codigo2[4], 
         cidade1[100], cidade2[100];
    unsigned long int populacao1, populacao2; 
    int pontos1, pontos2;
    float area1, area2, 
          pib1, pib2, 
          densidade1, densidade2, 
          pibPerCapta1, pibPerCapta2, 
          superPoder1, superPoder2;

    // Entrada de dados para a primeira carta
    printf("Insira os dados da primeira carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1); // O espaço antes de %c é necessário para capturar a nova linha corretamente
    printf("Código da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %s", cidade1); // O espaço antes de %s é necessário para capturar a nova linha corretamente
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);
    
    //calcula densidade, pib per capta e super poder da carta 1
    densidade1 = populacao1/area1;
    pibPerCapta1 = pib1/populacao1;
    superPoder1 = (float)populacao1+area1+pib1+(float)pontos1+pibPerCapta1-densidade1;

    // Entrada de dados para a segunda carta
    printf("\nInsira os dados da segunda carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2); // O espaço antes de %c é necessário para capturar a nova linha corretamente
    printf("Código da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %s", cidade2);  // O espaço antes de %s é necessário para capturar a nova linha corretamente
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    //calcula densidade, pib per capta e super poder da carta 2
    densidade2 = populacao2/area2;
    pibPerCapta2 = pib2/populacao2;
    superPoder2 = (float)populacao2+area2+pib2+(float)pontos2+pibPerCapta2-densidade2;

    // Exibição das informações da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapta1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição das informações da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapta2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\nComparação de Cartas: \n");
    // Compara a populacao
    if (populacao1 > populacao2) {
        printf("População: Carta 1 Venceu(%lu)\n", populacao1);
    } else if (populacao1 < populacao2) {
        printf("População: Carta 2 Venceu(%lu)\n", populacao2);
    } else {
        printf("População: Empatou - Carta 1(%lu) - Carta 2(%lu)\n", populacao1, populacao2);
    }

    // Compara a area
    if (area1 > area2) {
        printf("Área: Carta 1 Venceu(%.2f)\n", area1);
    } else if (area1 < area2) {
        printf("Área: Carta 2 Venceu(%.2f)\n", area2);
    } else {
        printf("Área: Empatou - Carta 1(%.2f) - Carta 2(%.2f)\n", area1, area2);
    }

    // Compara o pib
    if (pib1 > pib2) {
        printf("PIB: Carta 1 Venceu(%.2f)\n", pib1);
    } else if (pib1 < pib2) {
        printf("PIB: Carta 2 Venceu(%.2f)\n", pib2);
    } else {
        printf("PIB: Empatou - Carta 1(%.2f) - Carta 2(%.2f)\n", pib1, pib2);
    }

    // Compara o numero de pontos turisticos
    if (pontos1 > pontos2) {
        printf("Pontos Turísticos: Carta 1 Venceu(%d)\n", pontos1);
    } else if (pontos1 < pontos2) {
        printf("Pontos Turísticos: Carta 2 Venceu(%d)\n", pontos2);
    } else {
        printf("Pontos Turísticos: Empatou - Carta 1(%d) - Carta 2(%d)\n", pontos1, pontos2);
    }

    // Compara a densidade
    if (densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 1 Venceu(%.2f)\n", densidade1);
    } else if (densidade1 > densidade2) {
        printf("Densidade Populacional: Carta 2 Venceu(%.2f)\n", densidade2);
    } else {
        printf("Densidade Populacional: Empatou - Carta 1(%.2f) - Carta 2(%.2f)\n", densidade1, densidade2);
    }

    // Compara o pib per capta
    if (pibPerCapta1 > pibPerCapta2) {
        printf("PIB per Capita: Carta 1 Venceu(%.2f)\n", pibPerCapta1);
    } else if (pibPerCapta1 < pibPerCapta2) {
        printf("PIB per Capita: Carta 2 Venceu(%.2f)\n", pibPerCapta2);
    } else {
        printf("PIB per Capita: Empatou - Carta 1(%.2f) - Carta 2(%.2f)\n", pibPerCapta1, pibPerCapta2);
    }

    // Compara o super poder
    if (superPoder1 > superPoder2) {
        printf("Super Poder: Carta 1 Venceu(%.2f)\n", superPoder1);
    } else if (superPoder1 < superPoder2) {
        printf("Super Poder: Carta 2 Venceu(%.2f)\n", superPoder2);
    } else {
        printf("Super Poder: Empatou - Carta 1(%.2f) - Carta 2(%.2f)\n", superPoder1, superPoder2);
    }
}