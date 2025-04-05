
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
    int SuperPoderCart1, SuperPoderCart2;

    printf("\nJOGO SUPER TRUNFO!\n");

    // Entrada de dados para a primeira carta
    printf("------CARTA 1------\n");

    printf("Digite o estado (ex: A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01, B03): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_cidade1);

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
    scanf(" %s", nome_cidade2);

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
    SuperPoderCart1 = populacao1 + pontosTuristicos1 + (int)area1 + (int)pib1 + (int)pibpercapita1 + (int)densipopulacional1;
    SuperPoderCart2 = populacao2 + pontosTuristicos2 + (int)area2 + (int)pib2 + (int)pibpercapita2 + (int)densipopulacional2;

    printf("\nSUPER PODER DAS CARTAS:\n");
    printf("Carta 1: %d\n", SuperPoderCart1);
    printf("Carta 2: %d\n", SuperPoderCart2);

    // Comparações simples
    printf("\nCOMPARAÇÃO DOS ATRIBUTOS (0 = perdeu, 1 = venceu):\n");

    printf("População: Carta 1 = %d | Carta 2 = %d\n",
           populacao1 > populacao2 ? 1 : 0,
           populacao2 > populacao1 ? 1 : 0);

    printf("Pontos Turísticos: Carta 1 = %d | Carta 2 = %d\n",
           pontosTuristicos1 > pontosTuristicos2 ? 1 : 0,
           pontosTuristicos2 > pontosTuristicos1 ? 1 : 0);

    printf("Área: Carta 1 = %d | Carta 2 = %d\n",
           area1 > area2 ? 1 : 0,
           area2 > area1 ? 1 : 0);

    printf("PIB: Carta 1 = %d | Carta 2 = %d\n",
           pib1 > pib2 ? 1 : 0,
           pib2 > pib1 ? 1 : 0);

    // Regra especial: MENOR densidade vence
    printf("Densidade Populacional (menor vence): Carta 1 = %d | Carta 2 = %d\n",
           densipopulacional1 < densipopulacional2 ? 1 : 0,
           densipopulacional2 < densipopulacional1 ? 1 : 0);

    printf("PIB per capita: Carta 1 = %d | Carta 2 = %d\n",
           pibpercapita1 > pibpercapita2 ? 1 : 0,
           pibpercapita2 > pibpercapita1 ? 1 : 0);

    printf("Super Poder: Carta 1 = %d | Carta 2 = %d\n",
           SuperPoderCart1 > SuperPoderCart2 ? 1 : 0,
           SuperPoderCart2 > SuperPoderCart1 ? 1 : 0);

    return 0;
}


}







    