#include <stdio.h>

int main(){

//declaracao das variaveis para a primeira carta
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1[50], populacao2[50];
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2;
    float pib1, pib2;

         printf("\nJOGO SUPER TRUNFO\n");
         printf("------CARTA------ 1\n");


 //entrada de dados para a primeira carta
  printf("digite o estado: (ex: A-H) \n");
  scanf("%c", &estado1);

  printf("digite o codigo da carta (ex: A01, B03):\n");
  scanf("%s", codigo1);

  printf("digite o nome da cidade:\n");
  scanf("%s", nome_cidade1);

  printf("digite a populacao:\n");
  scanf("%d", &populacao1);

  printf("digite os pontos turisticos:\n");
  scanf("%d", &pontos_turisticos1);

  printf("digite a area:\n");
  scanf("%f", &area1 );

  printf("digite o PIB:\n");
  scanf("%f", &pib1);
    
    
    printf("--------CARTA 2--------\n");


 //entrada de dados para a segunda carta
  printf("digite o estado:\n");
  scanf("c", &estado2);

  printf("digite o codigo:\n");
  scanf("%c", codigo2);
 //imprime na tela a mensagem "digite o nome da cidade"
  printf("digite o nome da cidade:\n");
  scanf("%s", nome_cidade2);
 //imprime na tela "digite a populacao"
  printf("digite a populacao:\n");
  scanf("s", populacao2);
 
  printf("digite os pontos turisticos:\n");
  scanf("%d", &pontos_turisticos2);

  printf("digite a area:\n"),
  scanf("%f", &area2);

  printf("digite o PIB:\n");
  scanf("%f", &pib2);


  return 0;


}


    