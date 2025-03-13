#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidadePopulacional1, pibPerCapita1;

    // Declaração de variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidadePopulacional2, pibPerCapita2;

    // Entrada de dados para a primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    getchar();  // Consumir a quebra de linha
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    getchar();
    printf("Nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;
    printf("População: ");
    scanf(" %lu", &populacao1);
    printf("Área (km²): ");
    scanf(" %f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);
    
    // Cálculo da Densidade Populacional e PIB per Capita para a primeira carta
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    
    // Entrada de dados para a segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    getchar();
    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo2);
    getchar();
    printf("Nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;
    printf("População: ");
    scanf(" %lu", &populacao2);
    printf("Área (km²): ");
    scanf(" %f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);
    
    // Cálculo da Densidade Populacional e PIB per Capita para a segunda carta
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    
    // Menu interativo para escolha dos dois atributos
    int opcao1, opcao2;
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;
    
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Capita\nDigite a opção: ");
    scanf("%d", &opcao1);
    
    do {
        printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Capita\nDigite a opção: ");
        scanf("%d", &opcao2);
    } while (opcao1 == opcao2);
    
    // Definição dos valores de comparação
    float atributos1[] = {populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1, pibPerCapita1};
    float atributos2[] = {populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2};
    
    valor1_carta1 = atributos1[opcao1 - 1];
    valor1_carta2 = atributos2[opcao1 - 1];
    valor2_carta1 = atributos1[opcao2 - 1];
    valor2_carta2 = atributos2[opcao2 - 1];
    
    // Soma dos atributos
    float soma_carta1 = valor1_carta1 + valor2_carta1;
    float soma_carta2 = valor1_carta2 + valor2_carta2;
    
    // Exibição do resultado
    printf("\nComparação de cartas:\n");
    printf("Carta 1 - %s: Atributo 1: %.2f, Atributo 2: %.2f, Soma: %.2f\n", nomeCidade1, valor1_carta1, valor2_carta1, soma_carta1);
    printf("Carta 2 - %s: Atributo 1: %.2f, Atributo 2: %.2f, Soma: %.2f\n", nomeCidade2, valor1_carta2, valor2_carta2, soma_carta2);
    
    printf("Resultado: %s venceu!\n", (soma_carta1 > soma_carta2) ? nomeCidade1 : (soma_carta1 < soma_carta2) ? nomeCidade2 : "Empate!");
    
    return 0;
}
