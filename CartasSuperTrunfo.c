#include <stdio.h>

int main() {

    // =====================================================
    // DECLARACAO DAS VARIAVEIS - CARTA A
    // =====================================================

    char Estado_A;
    char Codigo_A[4];
    char Cidade_A[50];
    float Populacao_A;
    float Area_A;
    float PIB_A;
    int Turistico_A;

    // =====================================================
    // DECLARACAO DAS VARIAVEIS - CARTA B
    // =====================================================

    char Estado_B;
    char Codigo_B[4];
    char Cidade_B[50];
    float Populacao_B;
    float Area_B;
    float PIB_B;
    int Turistico_B;

    // =====================================================
    // VARIAVEIS CALCULADAS
    // =====================================================

    float Densidade_A;
    float Densidade_B;

    float PIBperCapita_A;
    float PIBperCapita_B;

    // =====================================================
    // CADASTRO DA CARTA A
    // =====================================================

    printf("=== CADASTRO DA CARTA A ===\n");

    printf("Estado: ");
    scanf(" %c", &Estado_A);

    printf("Codigo: ");
    scanf("%3s", Codigo_A);

    printf("Cidade: ");
    scanf(" %49[^\n]", Cidade_A);

    printf("Populacao: ");
    scanf("%f", &Populacao_A);

    printf("Area: ");
    scanf("%f", &Area_A);

    printf("PIB: ");
    scanf("%f", &PIB_A);

    printf("Pontos Turisticos: ");
    scanf("%d", &Turistico_A);

    // =====================================================
    // CADASTRO DA CARTA B
    // =====================================================

    printf("\n=== CADASTRO DA CARTA B ===\n");

    printf("Estado: ");
    scanf(" %c", &Estado_B);

    printf("Codigo: ");
    scanf("%3s", Codigo_B);

    printf("Cidade: ");
    scanf(" %49[^\n]", Cidade_B);

    printf("Populacao: ");
    scanf("%f", &Populacao_B);

    printf("Area: ");
    scanf("%f", &Area_B);

    printf("PIB: ");
    scanf("%f", &PIB_B);

    printf("Pontos Turisticos: ");
    scanf("%d", &Turistico_B);

    // =====================================================
    // CALCULO DA DENSIDADE POPULACIONAL
    // =====================================================

    Densidade_A = Populacao_A / Area_A;
    Densidade_B = Populacao_B / Area_B;

    // =====================================================
    // CALCULO DO PIB PER CAPITA
    // =====================================================

    PIBperCapita_A =
        (PIB_A * 1000000000.0) / Populacao_A;

    PIBperCapita_B =
        (PIB_B * 1000000000.0) / Populacao_B;

    // =====================================================
    // EXIBICAO DA CARTA A
    // =====================================================

    printf("\n===== CARTA A =====\n");

    printf("Estado: %c\n", Estado_A);
    printf("Codigo: %s\n", Codigo_A);
    printf("Cidade: %s\n", Cidade_A);
    printf("Populacao: %.0f habitantes\n", Populacao_A);
    printf("Area: %.2f km2\n", Area_A);
    printf("PIB: %.2f bilhoes\n", PIB_A);
    printf("Pontos Turisticos: %d\n", Turistico_A);
    printf("Densidade Populacional: %.2f hab/km2\n",
           Densidade_A);
    printf("PIB per capita: R$ %.2f\n",
           PIBperCapita_A);

    // =====================================================
    // EXIBICAO DA CARTA B
    // =====================================================

    printf("\n===== CARTA B =====\n");

    printf("Estado: %c\n", Estado_B);
    printf("Codigo: %s\n", Codigo_B);
    printf("Cidade: %s\n", Cidade_B);
    printf("Populacao: %.0f habitantes\n", Populacao_B);
    printf("Area: %.2f km2\n", Area_B);
    printf("PIB: %.2f bilhoes\n", PIB_B);
    printf("Pontos Turisticos: %d\n", Turistico_B);
    printf("Densidade Populacional: %.2f hab/km2\n",
           Densidade_B);
    printf("PIB per capita: R$ %.2f\n",
           PIBperCapita_B);

    // =====================================================
    // ESCOLHA DO ATRIBUTO
    // =====================================================

    /*
       A escolha e feita diretamente no codigo.

       1 = Populacao
       2 = Area
       3 = PIB
       4 = Densidade Populacional
       5 = PIB per capita

       Neste exemplo, a comparacao sera por POPULACAO.
    */

    int atributo = 1;

    // =====================================================
    // LOOP ANINHADO
    // =====================================================

    /*
       O primeiro FOR representa a Carta A.
       O segundo FOR representa a Carta B.

       Como existem duas cartas, sera realizada
       uma comparacao entre Carta A e Carta B.
    */

    for (int i = 0; i < 1; i++) {

        for (int j = 0; j < 1; j++) {

            printf("\n========================================\n");
            printf("       COMPARACAO DE CARTAS\n");
            printf("========================================\n");

            // =================================================
            // COMPARACAO POR POPULACAO
            // =================================================

            if (atributo == 1) {

                printf("\nAtributo: Populacao\n\n");

                printf("Carta A - %s (%c): %.0f habitantes\n",
                       Cidade_A,
                       Estado_A,
                       Populacao_A);

                printf("Carta B - %s (%c): %.0f habitantes\n",
                       Cidade_B,
                       Estado_B,
                       Populacao_B);

                // Maior populacao vence
                if (Populacao_A > Populacao_B) {

                    printf("\nResultado: Carta A (%s) venceu!\n",
                           Cidade_A);

                } else if (Populacao_B > Populacao_A) {

                    printf("\nResultado: Carta B (%s) venceu!\n",
                           Cidade_B);

                } else {

                    printf("\nResultado: Empate!\n");
                }
            }

            // =================================================
            // COMPARACAO POR AREA
            // =================================================

            else if (atributo == 2) {

                printf("\nAtributo: Area\n\n");

                printf("Carta A - %s: %.2f km2\n",
                       Cidade_A, Area_A);

                printf("Carta B - %s: %.2f km2\n",
                       Cidade_B, Area_B);

                if (Area_A > Area_B) {

                    printf("\nResultado: Carta A (%s) venceu!\n",
                           Cidade_A);

                } else if (Area_B > Area_A) {

                    printf("\nResultado: Carta B (%s) venceu!\n",
                           Cidade_B);

                } else {

                    printf("\nResultado: Empate!\n");
                }
            }

            // =================================================
            // COMPARACAO POR PIB
            // =================================================

            else if (atributo == 3) {

                printf("\nAtributo: PIB\n\n");

                printf("Carta A - %s: %.2f bilhoes\n",
                       Cidade_A, PIB_A);

                printf("Carta B - %s: %.2f bilhoes\n",
                       Cidade_B, PIB_B);

                if (PIB_A > PIB_B) {

                    printf("\nResultado: Carta A (%s) venceu!\n",
                           Cidade_A);

                } else if (PIB_B > PIB_A) {

                    printf("\nResultado: Carta B (%s) venceu!\n",
                           Cidade_B);

                } else {

                    printf("\nResultado: Empate!\n");
                }
            }

            // =================================================
            // COMPARACAO POR DENSIDADE
            // =================================================

            else if (atributo == 4) {

                printf("\nAtributo: Densidade Populacional\n\n");

                printf("Carta A - %s: %.2f hab/km2\n",
                       Cidade_A, Densidade_A);

                printf("Carta B - %s: %.2f hab/km2\n",
                       Cidade_B, Densidade_B);

                /*
                   Para densidade populacional,
                   o MENOR valor vence.
                */

                if (Densidade_A < Densidade_B) {

                    printf("\nResultado: Carta A (%s) venceu!\n",
                           Cidade_A);

                } else if (Densidade_B < Densidade_A) {

                    printf("\nResultado: Carta B (%s) venceu!\n",
                           Cidade_B);

                } else {

                    printf("\nResultado: Empate!\n");
                }
            }

            // =================================================
            // COMPARACAO POR PIB PER CAPITA
            // =================================================

            else if (atributo == 5) {

                printf("\nAtributo: PIB per capita\n\n");

                printf("Carta A - %s: R$ %.2f\n",
                       Cidade_A, PIBperCapita_A);

                printf("Carta B - %s: R$ %.2f\n",
                       Cidade_B, PIBperCapita_B);

                if (PIBperCapita_A > PIBperCapita_B) {

                    printf("\nResultado: Carta A (%s) venceu!\n",
                           Cidade_A);

                } else if (PIBperCapita_B > PIBperCapita_A) {

                    printf("\nResultado: Carta B (%s) venceu!\n",
                           Cidade_B);

                } else {

                    printf("\nResultado: Empate!\n");
                }
            }
        }
    }

    return 0;
}
