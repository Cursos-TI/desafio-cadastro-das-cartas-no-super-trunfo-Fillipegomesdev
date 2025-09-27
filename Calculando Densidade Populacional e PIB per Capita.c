#include <stdio.h>  
// Inclui a biblioteca padrão de entrada/saída do C. 
// Necessária para usar funções como printf (imprimir na tela) e scanf (ler do teclado).

int main() {
    // ===== Declaração das variáveis =====
    char estado1, estado2;                         // Armazena a letra do estado da carta (A até H).
    char codigo_da_carta1[4], codigo_da_carta2[4]; // Código da carta, ex: "A01". String de até 3 chars + '\0'.
    char nome_Da_cidade1[30], nome_Da_cidade2[30]; // Nome da cidade (até 29 caracteres + '\0').

    int Populacao1, Populacao2;                    // População total da cidade.
    float Area1, Area2;                            // Área da cidade em km².
    float PIB1, PIB2;                              // PIB da cidade (em bilhões de reais).
    int pontos_turisticos1, pontos_turisticos2;    // Número de pontos turísticos.

    float densidade_populacional1, densidade_populacional2; // Habitantes por km².
    float pib_per_capita1, pib_per_capita2;                 // PIB per capita (reais por pessoa).

    // ===== Entrada de dados da carta 1 =====
    printf("Insira os dados da Carta 1\n\n");

    printf("Digite o estado da carta (A-H): ");
    scanf(" %c", &estado1);  // Lê um único caractere. O espaço antes de %c evita pegar um enter perdido.

    printf("Digite o codigo da carta (Ex:A01-A04): ");
    scanf(" %s", codigo_da_carta1);  // Lê uma string (até encontrar espaço ou enter).

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_Da_cidade1); // Lê uma linha inteira até o ENTER (inclui espaços no nome).

    printf("Digite a populacao da cidade: ");
    scanf("%d", &Populacao1); // Lê um número inteiro.

    printf("Digite a area da cidade (em km²): ");
    scanf("%f", &Area1); // Lê um número decimal (float).

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &PIB1); // PIB informado em bilhões de reais.

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos1);

    // ==== Cálculos da carta 1 ====
    densidade_populacional1 = Populacao1 / Area1;              // Fórmula: população ÷ área.
    pib_per_capita1 = (PIB1 * 1000000000) / Populacao1;        // Converte bilhões para reais e divide pela população.

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
    densidade_populacional2 = Populacao2 / Area2;              // População ÷ área.
    pib_per_capita2 = (PIB2 * 1000000000) / Populacao2;        // PIB em reais ÷ população.

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

    return 0; // Retorna 0 → indica que o programa terminou com sucesso.
}
