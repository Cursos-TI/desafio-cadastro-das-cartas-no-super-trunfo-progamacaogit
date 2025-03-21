#include <stdio.h>

int main(){

//declaracao das variaveis para a primeira carta
    char estado1;
    char estado2;
    char codigo1[4];
    char codigo2[4];
    char nome_cidade1[50], nome_cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2;
    float pib1, pib2;
    float densipopulacional1, densipopulacional2;
    float pibpercapita1, pibpercapita2;
    int resultadoCart1, resultadoCart2;

         printf("\nJOGO SUPER TRUNFO!\n");
         printf("------CARTA------ 1\n");


 //entrada de dados para a primeira carta
  printf("digite o estado: (ex: A-H):\n");
  scanf("%c", &estado1);

  printf("digite o codigo da carta (ex: A01, B03):\n"); //imprime o codigo da primeira carta
  scanf("%c", &codigo1);

  printf("digite o nome da cidade:\n"); //imprime na tela o nome dacidade
  scanf("%s", nome_cidade1);

  printf("digite a populacao:\n"); //imprime a populacao
  scanf("%u", &populacao1);

  printf("digite os pontos turisticos:\n"); //imprime os pontos turisticos
  scanf("%d", &pontosTuristicos1);

  printf("digite a area:\n"); //imprimr a area
  scanf("%f", &area1 );

  printf("digite o PIB:\n"); //imprime o pib
  scanf("%f", &pib1);

//densidade populacional para a primeira carta
  float divisao;
 divisao = populacao1 / area1;
 printf("densidade populacional: %f hab/km2 \n", divisao);

 //Pib Per Capita para a primeira carta
  divisao = pib1 / populacao1;
  printf("pib per capita1:%f bi de reais\n", divisao);
  
    
    
    printf("--------CARTA 2!--------\n");


 //entrada de dados para a segunda carta
  printf("digite o estado:\n");
  scanf("%c", &estado2);

  printf("digite o codigo:\n");
  scanf("%c", &codigo2);
 //imprime na tela a mensagem "digite o nome da cidade"
  printf("digite o nome da cidade:\n");
  scanf("%s", nome_cidade2);
 //imprime na tela "digite a populacao"
  printf("digite a populacao:\n");
  scanf("%u", &populacao2);

  printf("digite os pontos turisticos:\n"); //imprime na tela "digite os pontos turisticos"
  scanf("%d", &pontosTuristicos2);

  printf("digite a area:\n"); //imprime a area
  scanf("%f", &area2);

  printf("digite o PIB:\n"); //imprime o pib
  scanf("%f", &pib2);

  //densidade populacional da carta 2

 divisao = populacao2 / area2;
 printf("densidade populacional: %f hab/km2\n", divisao);

 //Pib Per Capita para a segunda carta
 divisao = pib2 / populacao2;
 printf("Pib Per Capita: %f bi de reais\n", divisao);



//Comparacao entre as cartas.
printf("\nCOMPARACAO DAS CARTAS 1 E 2:\n");

resultadoCart1 = populacao1 + pontosTuristicos1 + area1 + pib1 + pibpercapita1 + densipopulacional1; 
printf("super poder Carta1: %d\n", resultadoCart1);
resultadoCart2 = populacao2 + pontosTuristicos2 + area2 + pib2 + pibpercapita2 + densipopulacional2;
printf("super poder Carta2: %d\n", resultadoCart2);



int resultado;                                                  

printf("\nComparacao da cartas 1 e 2:\n");
resultado = populacao1 > populacao2;
printf("Carta1 tem populacao maior que Carta2? %d\n", resultado);

pontosTuristicos1 > pontosTuristicos2;
printf("Carta1 tem pontos turisticos maior que Carta2? %d\n", resultado);

resultado = area1 > area2;
printf("Carta1 tem area maior que Carta2? %d\n", resultado);

resultado = pib1 > pib2;
printf("Carta1 tem pib maior que Carta2? %d\n", resultado);

resultado = densipopulacional1/1 > densipopulacional2/1;
printf("Carta1 tem densidade populacional maior que Carta2? %d\n", resultado);

resultado = pibpercapita1 > pibpercapita2;
printf("Carta1 tem pib per capita maior que Carta2? %d\n", resultado);






return 0;
}






    