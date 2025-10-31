#include <stdio.h>

int main() {
    // ===============================================
    // DECLARAÇÃO DAS VARIÁVEIS
    // ===============================================
    // Cada carta representa uma cidade e contém as seguintes informações:
    // Estado, código, nome da cidade, população, área, PIB e pontos turísticos.

    char estado1[20], estado2[20];       // Estado (ex: SP, RJ)
    char codigo1[10], codigo2[10];       // Código da carta (ex: A01, B02)
    char cidade1[50], cidade2[50];       // Nome da cidade
    int populacao1, populacao2;          // População total
    float area1, area2;                  // Área em km²
    float pib1, pib2;                    // PIB em bilhões
    int pontos1, pontos2;                // Número de pontos turísticos

    // ===============================================
    // ENTRADA DE DADOS - CARTA 1
    // ===============================================
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado: ");
    scanf("%s", estado1);
    printf("Digite o Codigo da Carta: ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade1);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // ===============================================
    // ENTRADA DE DADOS - CARTA 2
    // ===============================================
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado: ");
    scanf("%s", estado2);
    printf("Digite o Codigo da Carta: ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade2);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // ===============================================
    // CÁLCULOS AUTOMÁTICOS
    // ===============================================
    // Densidade populacional = População / Área
    // PIB per capita = (PIB * 1 bilhão) / População
    // Multiplica o PIB por 1 bilhão para converter de bilhões para unidades.
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibpercapita1 = (pib1 * 1000000000) / populacao1;
    float pibpercapita2 = (pib2 * 1000000000) / populacao2;

    // ===============================================
    // MENU INTERATIVO
    // ===============================================
    // O usuário escolherá qual atributo deseja comparar entre as cartas.
    int opcao;

    printf("\n=== Menu de Comparacao ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha um atributo para comparar: ");
    scanf("%d", &opcao);

    // ===============================================
    // COMPARAÇÃO USANDO SWITCH
    // ===============================================
    // Cada caso representa uma comparação diferente.
    // Dentro de cada caso, usamos if-else para determinar a carta vencedora.
    printf("\n=== Resultado da Comparacao ===\n");

    switch (opcao) {
        // -------------------------------------------
        case 1: // População
            printf("Atributo: Populacao\n");
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedora: %s\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        // -------------------------------------------
        case 2: // Área
            printf("Atributo: Area\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2)
                printf("Vencedora: %s\n", cidade1);
            else if (area2 > area1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        // -------------------------------------------
        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhoes\n", cidade1, pib1);
            printf("%s: %.2f bilhoes\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("Vencedora: %s\n", cidade1);
            else if (pib2 > pib1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        // -------------------------------------------
        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d pontos\n", cidade1, pontos1);
            printf("%s: %d pontos\n", cidade2, pontos2);
            if (pontos1 > pontos2)
                printf("Vencedora: %s\n", cidade1);
            else if (pontos2 > pontos1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        // -------------------------------------------
        case 5: // Densidade Populacional (menor vence)
            printf("Atributo: Densidade Populacional (menor vence)\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            if (densidade1 < densidade2)
                printf("Vencedora: %s\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        // -------------------------------------------
        case 6: // PIB per Capita
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.2f\n", cidade1, pibpercapita1);
            printf("%s: %.2f\n", cidade2, pibpercapita2);
            if (pibpercapita1 > pibpercapita2)
                printf("Vencedora: %s\n", cidade1);
            else if (pibpercapita2 > pibpercapita1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        // -------------------------------------------
        default:
            // Caso o usuário digite uma opção inválida
            printf("Opcao invalida! Escolha um numero de 1 a 6.\n");
            break;
    }

    printf("\n=== Fim da Comparacao ===\n");

    return 0;
}