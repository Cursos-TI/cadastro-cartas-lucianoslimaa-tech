#include <stdio.h>
#include <string.h>

int main()
{
    // ===== CARTA 1 =====
    char estado1;
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area_km21;
    float pib1;
    int pontos_turisticos1;

    // ===== CARTA 2 =====
    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area_km22;
    float pib2;
    int pontos_turisticos2;

    // ============================
    // ENTRADA CARTA 1
    // ============================
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A a H): \n");
    scanf(" %c", &estado1);

    // valida codigo carta 1
    do {
        printf("Codigo da Carta (ex: %c01 ate %c04): \n", estado1, estado1);
        scanf("%s", codigo1);

        if (strlen(codigo1) != 3 ||
            codigo1[0] != estado1 ||
            codigo1[1] != '0' ||
            codigo1[2] < '1' || codigo1[2] > '4') {

            printf("❌ Codigo invalido! Tente novamente.\n");
        } else {
            break;
        }

    } while (1);

    printf("Nome da Cidade (uma palavra): \n");
    scanf("%s", cidade1);

    printf("Populacao: \n");
    scanf("%d", &populacao1);

    printf("Area (km2): \n");
    scanf("%f", &area_km21);

    printf("Pib: \n");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: \n");
    scanf("%d", &pontos_turisticos1);


    // ============================
    // ENTRADA CARTA 2
    // ============================
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A a H): \n");
    scanf(" %c", &estado2);

    // valida codigo carta 2
    do {
        printf("Codigo da Carta (ex: %c01 ate %c04): \n", estado2, estado2);
        scanf("%s", codigo2);

        if (strlen(codigo2) != 3 ||
            codigo2[0] != estado2 ||
            codigo2[1] != '0' ||
            codigo2[2] < '1' || codigo2[2] > '4') {

            printf("❌ Codigo invalido! Tente novamente.\n");
        } else {
            break;
        }

    } while (1);

    printf("Nome da Cidade (uma palavra): \n");
    scanf("%s", cidade2);

    printf("Populacao: \n");
    scanf("%d", &populacao2);

    printf("Area (km2): \n");
    scanf("%f", &area_km22);

    printf("Pib: \n");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: \n");
    scanf("%d", &pontos_turisticos2);


    // ============================
    // EXIBIÇÃO
    // ============================
    printf("\n===== CARTAS CADASTRADAS =====\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Numero da populacao: %d\n", populacao1);
    printf("Area em km2: %.2f\n", area_km21);
    printf("Pib: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Numero da populacao: %d\n", populacao2);
    printf("Area em km2: %.2f\n", area_km22);
    printf("Pib: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}