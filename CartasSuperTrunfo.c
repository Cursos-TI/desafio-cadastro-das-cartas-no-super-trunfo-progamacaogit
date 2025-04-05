
#include <stdio.h>

int main() {
    // Declaracao das variaveis
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

    printf("Digite o codigo da carta (ex: A01, B03): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %c", nome_cidade1);

    printf("Digite a populasao: ");
    scanf(" %lu", &populacao1);

    printf("Digite os pontos turisticos: ");
    scanf(" %d", &pontosTuristicos1);

    printf("Digite a area: ");
    scanf(" %f", &area1);

    printf("Digite o PIB: ");
    scanf( "%f", &pib1);



    // Calculo dos valores derivados da primeira carta
    densipopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    printf("Densidade populacional: %.2f hab/km²\n", densipopulacional1);
    printf("PIB per capita: %.2f bilhoes de reais\n", pibpercapita1);

    // Entrada de dados para a segunda carta
    printf("\n------CARTA 2------\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %c", nome_cidade2);

    printf("Digite a populacao: ");
    scanf(" %lu", &populacao2);

    printf("Digite os pontos turisticos: ");
    scanf(" %d", &pontosTuristicos2);

    printf("Digite a area: ");
    scanf(" %f", &area2);

    printf("Digite o PIB: ");
    scanf(" %f", &pib2);
	

    // Calculo dos valores derivados da segunda carta
    densipopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    printf("Densidade populacional: %.2f hab/km²\n", densipopulacional2);
    printf("PIB per capita: %.2f bilhoes de reais\n", pibpercapita2);
    
          printf("\n");
    printf("comparacao das cartas 1 e 2(imprime 1 para verdadeiro e 0 para falso)\n");
    
    printf("populacao1 e maior que populacao2? %d\n", populacao1 > populacao2);
    printf("Pontos Turisticos1 e maior que Pontos Turisticos2? %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("area1 e maior que area2? %d\n", area1 > area2);
    printf("Pib1 e maior que Pib2? %d\n", pib1 > pib2);
    printf("Densidade populacional1 e maior que densidade populacional2? %d\n", densipopulacional1 > densipopulacional2);
    printf("Pib Per Capita1 e maior que Pib Per Capita2? %d\n", pibpercapita1 > pibpercapita2);

    // Calculo do "Super Poder" das cartas
    SuperPoderCart1 = populacao1 + pontosTuristicos1 + (int)area1 + (int)pib1 + (int)pibpercapita1 + (int)densipopulacional1;
    SuperPoderCart2 = populacao2 + pontosTuristicos2 + (int)area2 + (int)pib2 + (int)pibpercapita2 + (int)densipopulacional2;
    
//resultado dos poderes das cartas 1 e 2
    printf("\nSUPER PODER DAS CARTAS:\n");
    printf("Super Poder da Carta 1 e maior que o da carta2: %d\n", SuperPoderCart1 > SuperPoderCart2);


 return 0;

}









    