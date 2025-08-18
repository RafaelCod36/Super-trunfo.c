#include <stdio.h>
#include <string.h>

// Definição da struct
typedef struct {
    char estado[50];
    char capital[50];
    char codigo_carta[10];
    int populacao;
    float area;
    float pib;  // em bilhões
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super;
} Carta;

int main() {
    // Carta 1: Rio de Janeiro
    Carta carta1;
    strcpy(carta1.estado, "Rio de Janeiro");
    strcpy(carta1.capital, "Rio de Janeiro");
    strcpy(carta1.codigo_carta, "R01");
    carta1.populacao = 4000000;
    carta1.area = 1500000.0;
    carta1.pib = 2000.50; // bilhões
    carta1.pontos_turisticos = 60;

    // Calculando valores derivados
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta1.pib_per_capita = (carta1.pib * 1000000000) / carta1.populacao;
    carta1.super = (carta1.populacao + carta1.area + carta1.pib + 
                   carta1.pontos_turisticos + carta1.densidade_populacional + 
                   carta1.pib_per_capita) / 6;

    // Carta 2: Ceará
    Carta carta2;
    strcpy(carta2.estado, "Ceará");
    strcpy(carta2.capital, "Fortaleza");
    strcpy(carta2.codigo_carta, "C01");
    carta2.populacao = 2000000;
    carta2.area = 1000000.0;
    carta2.pib = 300.0; // bilhões
    carta2.pontos_turisticos = 50;

    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = (carta2.pib * 1000000000) / carta2.populacao;
    carta2.super = (carta2.populacao + carta2.area + carta2.pib + 
                   carta2.pontos_turisticos + carta2.densidade_populacional + 
                   carta2.pib_per_capita) / 6;

    // Impressão das cartas
    printf("===== Carta 1 =====\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Capital: %s\n", carta1.capital);
    printf("Código: %s\n", carta1.codigo_carta);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade_populacional);
    printf("PIB per capita: %.2f\n", carta1.pib_per_capita);
    printf("Super Trunfo: %.2f\n\n", carta1.super);

    printf("===== Carta 2 =====\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Capital: %s\n", carta2.capital);
    printf("Código: %s\n", carta2.codigo_carta);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade_populacional);
    printf("PIB per capita: %.2f\n", carta2.pib_per_capita);
    printf("Super Trunfo: %.2f\n\n", carta2.super);

    // Comparação
    printf(">>> Comparando Super Trunfos:\n");
    if (carta1.super > carta2.super) {
        printf("O Super Trunfo do %s é maior!\n", carta1.estado);
    } else if (carta1.super < carta2.super) {
        printf("O Super Trunfo do %s é maior!\n", carta2.estado);
    } else {
        printf("Os Super Trunfos são iguais!\n");
    }

    return 0;
}
