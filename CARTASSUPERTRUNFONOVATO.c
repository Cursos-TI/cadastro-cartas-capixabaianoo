#include <stdio.h>

#define TOTAL_CARTAS 32 // Total de cartas a serem cadastradas

int main() {
    // ================= VARIÁVEIS =================
    char estado[TOTAL_CARTAS][3];          // Letra do estado (A a H)
    char codigo[TOTAL_CARTAS][4];          // Código da carta (ex: A01, B03)
    char cidade[TOTAL_CARTAS][50];         // Nome da cidade
    int populacao[TOTAL_CARTAS];           // População da cidade
    float area[TOTAL_CARTAS];              // Área da cidade em km²
    float pib[TOTAL_CARTAS];               // PIB da cidade em bilhões
    int pontos_turisticos[TOTAL_CARTAS];   // Número de pontos turísticos

    int loop; // variável de controle do laço for

    // =============== ENTRADA DE DADOS ===============
    printf("============================================\n");
    printf("       SUPER TRUNFO - CADASTRO DE CARTAS    \n");
    printf("============================================\n");
    printf("Você irá cadastrar %d cartas representando cidades.\n", TOTAL_CARTAS);
    printf("Cada carta contém informações sobre população, área, PIB e pontos turísticos.\n");
    printf("============================================\n");

    for (loop = 0; loop < TOTAL_CARTAS; loop++) {
        printf("\n--- CADASTRO DA CARTA %d ---\n", loop + 1);

        printf("Informe a letra do Estado (A até H): ");
        scanf("%s", estado[loop]);

        printf("Informe o código da carta (ex: A01, B02...): ");
        scanf("%s", codigo[loop]);

        printf("Informe o nome da cidade: ");
        scanf(" %[^\n]", cidade[loop]); // permite ler nomes com espaço

        printf("Informe a população da cidade: ");
        scanf("%d", &populacao[loop]);

        printf("Informe a área da cidade (em km²): ");
        scanf("%f", &area[loop]);

        printf("Informe o PIB da cidade (em bilhões de reais): ");
        scanf("%f", &pib[loop]);

        printf("Informe o número de pontos turísticos da cidade: ");
        scanf("%d", &pontos_turisticos[loop]);

        printf("--------------------------------------------\n");
    }

    // =============== SAÍDA DE DADOS ===============
    printf("\n============================================\n");
    printf("      EXIBIÇÃO DAS CARTAS CADASTRADAS       \n");
    printf("============================================\n");

    for (loop = 0; loop < TOTAL_CARTAS; loop++) {
        printf("\n===== CARTA %d =====\n", loop + 1);
        printf("Estado: %s\n", estado[loop]);
        printf("Código: %s\n", codigo[loop]);
        printf("Cidade: %s\n", cidade[loop]);
        printf("População: %d habitantes\n", populacao[loop]);
        printf("Área: %.2f km²\n", area[loop]);
        printf("PIB: %.2f bilhões de reais\n", pib[loop]);
        printf("Pontos turísticos: %d\n", pontos_turisticos[loop]);
    }

    printf("\n============================================\n");
    printf("            FIM DO CADASTRO DE CARTAS       \n");
    printf("============================================\n");

    return 0;
}
