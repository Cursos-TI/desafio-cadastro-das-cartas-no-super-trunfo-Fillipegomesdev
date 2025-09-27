#include <stdio.h>

int main() {
    // ===== Declaração das variáveis =====
    char estado1, estado2;
    char codigo_da_carta1[4], codigo_da_carta2[4];
    char nome_Da_cidade1[30], nome_Da_cidade2[30];

    int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;

    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    // ===== Entrada de dados da carta 1 =====
    printf("Insira os dados da Carta 1\n\n");

    printf("Digite o estado da carta (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (Ex:A01-A04): ");
    scanf(" %s", codigo_da_carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_Da_cidade1);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &Populacao1);

    printf("Digite a area da cidade (em km²): ");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos1);

    // ==== Cálculos da carta 1 ====
    densidade_populacional1 = Populacao1 / Area1;
    pib_per_capita1 = (PIB1 * 1000000000) / Populacao1;
    super_poder1 = Populacao1 + Area1 + PIB1 + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade_populacional1);

    // ===== Entrada de dados da carta 2 =====
    printf("\nInsira os dados da Carta 2\n\n");

    printf("Digite o estado da carta (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (Ex:A01-A04): ");
    scanf(" %s", codigo_da_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_Da_cidade2);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &Populacao2);

    printf("Digite a area da cidade (em km²): ");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos2);

    // ==== Cálculos da carta 2 ====
    densidade_populacional2 = Populacao2 / Area2;
    pib_per_capita2 = (PIB2 * 1000000000) / Populacao2;
    super_poder2 = Populacao2 + Area2 + PIB2 + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_populacional2);

    // ===== Saída de dados (exibição das cartas) =====
    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", nome_Da_cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_Da_cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    // ===== Comparação de cartas =====
    printf("\nComparacao de Cartas:\n\n");
    printf("Populacao: Carta %d venceu (%d)\n", (Populacao1 > Populacao2) ? 1 : 2, (Populacao1 > Populacao2));
    printf("Area: Carta %d venceu (%d)\n", (Area1 > Area2) ? 1 : 2, (Area1 > Area2));
    printf("PIB: Carta %d venceu (%d)\n", (PIB1 > PIB2) ? 1 : 2, (PIB1 > PIB2));
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2, (pontos_turisticos1 > pontos_turisticos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade_populacional1 < densidade_populacional2) ? 1 : 2, (densidade_populacional1 < densidade_populacional2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2, (pib_per_capita1 > pib_per_capita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, (super_poder1 > super_poder2));

    return 0;
}
