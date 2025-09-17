#include <stdio.h> 
// Inclui a biblioteca padrão de entrada e saída do C.
// É necessária para usar funções como printf (imprimir na tela) e scanf (ler do teclado).

int main(){ 
    // Função principal do programa. Todo programa em C começa a execução pelo main().

    // Declaração das variáveis das duas cartas
    char estado1, estado2; 
    // Variáveis do tipo caractere, usadas para guardar a letra do estado da carta (A até H).

    char codigo_da_carta1[4], codigo_da_carta2[4]; 
    // Vetores de char (strings) para armazenar o código da carta, ex: "A01".
    // Tamanho 4 porque precisamos de 3 caracteres + 1 posição para o '\0' (fim de string).

    char nome_Da_cidade1[30], nome_Da_cidade2[30]; 
    // Strings para armazenar o nome da cidade.
    // Tamanho 30 → até 29 caracteres + '\0'.

    int Populacao1, Populacao2; 
    // Variáveis inteiras para armazenar a população de cada cidade.

    float Área1, Área2; 
    // Variáveis de ponto flutuante (float) para guardar a área da cidade.

    float PIB1, PIB2; 
    // Variáveis de ponto flutuante para guardar o PIB (Produto Interno Bruto).

    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2; 
    // Variáveis inteiras para guardar a quantidade de pontos turísticos.

    // ===== Entrada de dados da carta 1 =====
    printf("Digite o estado da carta (A-H): ");
    // Exibe uma mensagem pedindo o estado da primeira carta.
    scanf(" %c", &estado1);
    // Lê do teclado 1 caractere (com espaço antes para ignorar enter/espacos anteriores).

    printf("Digite o codigo da carta (Ex:A01-A04): ");
    // Pede o código da carta.
    scanf(" %s", codigo_da_carta1);
    // Lê uma string (até espaço ou enter) e guarda em codigo_da_carta1.

    printf("Digite o nome da cidade: ");
    // Pede o nome da cidade.
    scanf(" %[^\n]", nome_Da_cidade1);
    // Lê uma string com espaços até o usuário apertar ENTER.
    // %[^\n] significa "ler tudo até encontrar \n".

    printf("Digite a populacao da cidade: ");
    // Pede a população da cidade.
    scanf("%d", &Populacao1);
    // Lê um número inteiro e guarda em Populacao1.

    printf("Digite a área da cidade: ");
    // Pede a área da cidade.
    scanf("%f", &Área1);
    // Lê um número decimal (float) e guarda em Área1.

    printf("Digite o PIB da cidade: ");
    // Pede o PIB da cidade.
    scanf("%f", &PIB1);
    // Lê um número decimal e guarda em PIB1.

    printf("Digite o numero de pontos turisticos da cidade: ");
    // Pede a quantidade de pontos turísticos.
    scanf("%d", &numero_de_pontos_turisticos1);
    // Lê um número inteiro e guarda em numero_de_pontos_turisticos1.

    // ===== Entrada de dados da carta 2 =====
    printf("Digite o estado da carta (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (Ex:A01-A04): ");
    scanf(" %s", codigo_da_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_Da_cidade2);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &Populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &Área2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    // ===== Saída de dados (exibição das cartas) =====

    /* Exibindo a carta 1 */
    printf("\nCARTA 1:\n"); 
    // \n cria uma linha em branco antes do texto, pra ficar organizado.
    printf("Estado: %c\n", estado1); 
    // %c → mostra um caractere (no caso, o estado).
    printf("Código: %s\n", codigo_da_carta1); 
    // %s → mostra uma string.
    printf("Nome da Cidade: %s\n", nome_Da_cidade1); 
    printf("População: %d\n", Populacao1); 
    // %d → mostra um número inteiro.
    printf("Área: %.2f km²\n", Área1); 
    // %.2f → mostra um float com 2 casas decimais.
    printf("PIB: %.2f bilhões\n", PIB1); 
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos1);

    /* Exibindo a carta 2 */
    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_Da_cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Área2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);

    return 0; 
    // Retorna 0 → indica que o programa terminou sem erros.
}
