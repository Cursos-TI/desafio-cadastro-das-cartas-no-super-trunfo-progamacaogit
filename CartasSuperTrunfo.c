#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome_cidade1[50], nome_cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;
    float densipopulacional1, densipopulacional2;
    float pibpercapita1, pibpercapita2;
    int resultadoCart1, resultadoCart2;
    
    printf("\nJOGO SUPER TRUNFO!\n");

    // Entrada de dados para a primeira carta
    printf("------CARTA 1------\n");

    printf("Digite o estado (ex: A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01, B03): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nome_cidade1);

    printf("Digite a população: ");
    scanf(" %lu", &populacao1);

    printf("Digite os pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    printf("Digite a área: ");
    scanf(" %f", &area1);

    printf("Digite o PIB: ");
    scanf( "%f", &pib1);

    // Cálculo dos valores derivados da primeira carta
    densipopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    printf("Densidade populacional: %.2f hab/km²\n", densipopulacional1);
    printf("PIB per capita: %.2f bilhões de reais\n", pibpercapita1);

    // Entrada de dados para a segunda carta
    printf("\n------CARTA 2------\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nome_cidade2);

    printf("Digite a população: ");
    scanf(" %lu", &populacao2);

    printf("Digite os pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    printf("Digite a área: ");
    scanf(" %f", &area2);

    printf("Digite o PIB: ");
    scanf(" %f", &pib2);

    // Cálculo dos valores derivados da segunda carta
    densipopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    printf("Densidade populacional: %.2f hab/km²\n", densipopulacional2);
    printf("PIB per capita: %.2f bilhões de reais\n", pibpercapita2);

    // Cálculo do "Super Poder" das cartas
    resultadoCart1 = populacao1 + pontosTuristicos1 + (int)area1 + (int)pib1 + (int)pibpercapita1 + (int)densipopulacional1;
    resultadoCart2 = populacao2 + pontosTuristicos2 + (int)area2 + (int)pib2 + (int)pibpercapita2 + (int)densipopulacional2;
//resultado dos poderes das cartas 1 e 2
    printf("\nSUPER PODER DAS CARTAS:\n");
    printf("Carta 1: %d\n", resultadoCart1);
    printf("Carta 2: %d\n", resultadoCart2);

    // Comparação entre as cartas
    printf("\nCOMPARAÇÃO DAS CARTAS:\n");

    printf("Carta 1 venceu em população? %d\n", populacao1 > populacao2);
    printf("Carta 1 venceu em pontos turísticos? %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Carta 1 venceu em área? %d\n", area1 > area2);
    printf("Carta 1 venceu em PIB? %d\n", pib1 > pib2);
    
    // Comparação para densidade populacional (menor valor vence)
    printf("Carta 1 venceu em densidade populacional? %d\n", densipopulacional1 < densipopulacional2);

    printf("Carta 1 venceu em PIB per capita? %d\n", pibpercapita1 > pibpercapita2);

    return 0;
}



    