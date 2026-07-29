#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
    // Dados Carta A
    char estado_A;
    char codigo_A[4];
    char cidade_A[40];
    unsigned int populacao_A;
    float area_A;
    float PIB_A;
    int turistico_A;

    // Carta B
    char estado_B;
    char codigo_B[4];
    char cidade_B[40];
    unsigned int populacao_B;
    float area_B;
    float PIB_B;
    int turistico_B;

  
    // Cadastramento Carta A
    printf("=== CADASTRO DA CARTA A ===\n");

    printf("Estado: ");
    scanf(" %c", &estado_A);

    printf("Código: ");
    scanf("%3s", codigo_A);

    printf("Cidade: ");
    scanf(" %39[^\n]", cidade_A);

    printf("Populacao: ");
    scanf("%lu", &populacao_A);

    printf("Area: ");
    scanf("%f", &area_A);

    printf("PIB: ");
    scanf("%f", &PIB_A);

    printf("Pontos Turisticos: ");
    scanf("%d", &turistico_A);

    // Cadastramento Carta B
    printf("\n=== CADASTRO DA CARTA B ===\n");

    printf("Estado: ");
    scanf(" %c", &estado_B);

    printf("Código: ");
    scanf("%3s", codigo_B);

    printf("Cidade: ");
    scanf(" %39[^\n]", cidade_B);

    printf("Populacao: ");
    scanf("%s", &populacao_B);

    printf("Area: ");
    scanf("%f", &area_B);

    printf("PIB: ");
    scanf("%f", &PIB_B);

    printf("Pontos Turisticos: ");
    scanf("%d", &turistico_B);

      
    // Área para exibição dos dados da cidade  
    printf("\n===== CARTA A =====\n");
    printf("Estado: %c\n", estado_A);
    printf("Codigo: %s\n", codigo_A);
    printf("Cidade: %s\n", cidade_A);
    printf("Populacao: %lu\n", populacao_A);
    printf("Area: %.2f km2\n", area_A);
    printf("PIB: %.2f habitantes\n", PIB_A);
    printf("Pontos Turisticos: %d\n", turistico_A);

    printf("\n===== CARTA B =====\n");
    printf("Estado: %c\n", estado_B);
    printf("Codigo: %s\n", codigo_B);
    printf("Cidade: %s\n", cidade_B);
    printf("Populacao: %lu\n", populacao_B);
    printf("Area: %.2f km2\n", area_B);
    printf("PIB: %.2f\n", PIB_B);
    printf("Pontos Turisticos: %d\n", turistico_B);

    return 0;
}