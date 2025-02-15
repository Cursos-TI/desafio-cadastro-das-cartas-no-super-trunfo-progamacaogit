#include <stdio.h>

#define NUM_CIDADES 32

typedef struct {
     char codigo[4];
     char pais[30];
     int populacao;
     float area;
     float pib;
     int pontos_turisticos;
} cidade;

int main() {
    cidade cidades[NUM_CIDADES];

    printf("Super Trunfo - Paises\n");

for (int i = 0; i < NUM_CIDADES; i++) {
    printf("\nCidade %d:\n" , i + 1);   
    printf("Codigo (ex:A01, A02, B01, B02...) ");
    scanf("%s", cidades[i].codigo);
    printf("país:");
    scanf(" %[^\n]" , cidades[i].pais);
    printf("populacao:");
    scanf("%d", &cidades[i].populacao);
    printf("area (km2):");
    scanf("%f", &cidades[i].area);
    printf("PIB(em bilhoes):");
    scanf("%f", &cidades[i].pib);
    printf("numero de pontos turisticos:");
    scanf("%d", &cidades[i].pontos_turisticos);
}

printf("\nCartas cadastradas:\n");
for (int i = 0; i < NUM_CIDADES; i++) {
    printf("\ncodigo: %s\n", cidades[i].codigo);
    printf("pais: %s\n, cidades[i].pais");
    printf("populacao: %d\n", cidades[i].populacao);
    printf("area: %.2f km2\n", cidades[i].area);
    printf("PIB: %.2f bilhoes\n", cidades[i].pib);
    printf("pontos turisticos: %d\n", cidades[i].pontos_turisticos);
 }

return 0;
}