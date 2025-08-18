#include <stdio.h>
      int main() {
        char estado[20]= "Ceara";
        printf("O estado é: %s\n", estado);

        char capital[20] = "Fortaleza";
        printf("A capital é: %s\n", capital);

        char codigo_carta[10]= "C01";
        printf("O código da carta é: %s\n", codigo_carta);

        int populacao = 2000000;
        printf("A população é: %d\n", populacao);

        float area = 1000000.0;
        printf("A área é: %.2f km²\n", area);

        float pib = 300000.0;
        printf("O PIB é: %.2f milhões\n", pib);

        int pontos_turisticos = 50;
        printf("Pontos turísticos: %d\n", pontos_turisticos);

        float densidade_populacional = populacao / area;
        printf("A densidade populacional é: %.2f habitantes/km²\n", densidade_populacional);

        float pib_per_capita = pib * 1000000 / populacao;
        printf("O PIB per capita é: %.2f\n", pib_per_capita);

        float super = (populacao + area + pib + pontos_turisticos + densidade_populacional + pib_per_capita) / 6;
        printf("O valor do super trunfo é: %.2f\n", super);

        return 0;

      }