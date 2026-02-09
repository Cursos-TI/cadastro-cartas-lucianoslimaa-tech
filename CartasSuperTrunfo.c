#include <stdio.h>

int main()
{
    char Estado;
    char Codigo[10];
    char Cidade[50];
    int Populacao;
    float Area_km²;
    float Pib;
    int Pontos_Turisticos;

    printf("Estado de (A a H): \n");
    scanf(" %c", &Estado);

    printf("Codigo da Carta: \n");
    scanf("%s", Codigo);

    printf("Nome da Cidade: \n");
    scanf("%s", Cidade);

    printf("Populacao: \n");
    scanf("%d", &Populacao);

    printf("Area (km²): \n");
    scanf("%f", &Area_km²);

    printf("Pib: \n");
    scanf("%f", &Pib);

    printf("Pontos Turisticos: \n");
    scanf("%d", &Pontos_Turisticos);

    printf("Estado: %c\n", Estado);
    printf("Codigo da Carta: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("Numero da populacao: %d\n", Populacao);
    printf("Area em km²: %.2f\n", Area_km²);
    printf("Pib: %.2f\n", Pib);
    printf("Pontos Turisticos> %d\n", Pontos_Turisticos);
  
return 0;
} 
