#include <stdio.h>
#include <string.h>

int main()
{
    // ===== CARTA 1 =====
    char estado1;
    char codigo1[10];
    char cidade1[50];
    unsigned long int populacao1;
    float area_km21;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;
    float super_poder1;

    // ===== CARTA 2 =====
    char estado2;
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2;
    float area_km22;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;
    float super_poder2;

    // ============================
    // ENTRADA CARTA 1
    // ============================
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A a H): \n");
    scanf(" %c", &estado1);

    // valida codigo carta 1
    do
    {
        printf("Codigo da Carta (ex: %c01 ate %c04): \n", estado1, estado1);
        scanf("%s", codigo1);

        if (strlen(codigo1) != 3 ||
            codigo1[0] != estado1 ||
            codigo1[1] != '0' ||
            codigo1[2] < '1' || codigo1[2] > '4')
        {

            printf("❌ Codigo invalido! Tente novamente.\n");
        }
        else
        {
            break;
        }

    } while (1);

    printf("Nome da Cidade (uma palavra): \n");
    scanf("%s", cidade1);

    printf("Populacao: \n");
    scanf("%lu", &populacao1);

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
    do
    {
        printf("Codigo da Carta (ex: %c01 ate %c04): \n", estado2, estado2);
        scanf("%s", codigo2);

        if (strlen(codigo2) != 3 ||
            codigo2[0] != estado2 ||
            codigo2[1] != '0' ||
            codigo2[2] < '1' || codigo2[2] > '4')
        {

            printf("❌ Codigo invalido! Tente novamente.\n");
        }
        else
        {
            break;
        }

    } while (1);

    printf("Nome da Cidade (uma palavra): \n");
    scanf("%s", cidade2);

    printf("Populacao: \n");
    scanf("%lu", &populacao2);

    printf("Area (km2): \n");
    scanf("%f", &area_km22);

    printf("Pib: \n");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    densidade1 = populacao1 / area_km21;
    densidade2 = populacao2 / area_km22;

    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

    super_poder1 = (float)populacao1 + area_km21 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1);
    super_poder2 = (float)populacao2 + area_km22 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade1);

    int pop_vencedor = populacao1 > populacao2;
    int area_vencedor = area_km21 > area_km22;
    int pib_vencedor = pib1 > pib2;
    int pontos_vencedor = pontos_turisticos1 > pontos_turisticos2;
    int pibpc_vencedor = pib_per_capita1 > pib_per_capita2;

    int densidade_vencedor = densidade1 < densidade2;
    int super_vencedor = super_poder1 > super_poder2;

    // ============================
    // EXIBIÇÃO
    // ============================
    printf("\n===== CARTAS CADASTRADAS =====\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Numero da populacao: %u\n", populacao1);
    printf("Area em km2: %.2f\n", area_km21);
    printf("Pib: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("Pib Per Capita: %.2f pib1/populacao1\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Numero da populacao: %u\n", populacao2);
    printf("Area em km2: %.2f\n", area_km22);
    printf("Pib: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("Pib Per Capita: %.2f pib2/populacao2\n", pib_per_capita2);

    printf ("\n ==== RESULTADO DAS COMPARACOES ====\n");

    printf ("Populacao: Carta %d venceu (%d)\n", pop_vencedor? 1 : 2, pop_vencedor);
    printf ("Area: Carta %d venceu (%d)\n", area_vencedor? 1 : 2, area_vencedor);
    printf ("PIB: Carta %d venceu (%d)\n", pib_vencedor? 1 : 2, pib_vencedor);
    printf ("Pontos Turisticos: Carta %d venceu (%d)\n", pontos_vencedor? 1 : 2, pontos_vencedor);
    printf ("Densidade Populacional: Carta %d venceu (%d)\n", densidade_vencedor? 1 : 2, densidade_vencedor);
    printf ("PIB per Capita: Carta %d venceu (%d)\n", pibpc_vencedor? 1 : 2, pibpc_vencedor);
    printf ("Super Poder: Carta %d venceu (%d)\n", super_vencedor? 1 : 2, super_vencedor);

    return 0;
}
