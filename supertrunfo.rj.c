#include <stdio.h>
    
        int main() {

        char estado[20]= "Rio de Janeiro";
        printf("O estado é: %s\n", estado);

        char capital[20] = "Rio de Janeiro";
        printf("A capital é: %s\n", capital);

        char codigo_carta[10]= "R01";
        printf("O código da carta é: %s\n", codigo_carta);

        int populacao = 4000000;
        printf("A população é: %d\n", populacao);

        float area = 1500000.0;
        printf("A área é: %.2f km²\n", area);
        
        float pib = 2000000.50;
        printf("O PIB é: %.2f bilhões\n", pib);

        int popntos_turisticos = 60;
        printf("O número de pontos turísticos é: %d\n", popntos_turisticos);

        float densidade_populacional = populacao / area;
        printf("A densidade populacional é: %.2f habitantes/km²\n", densidade_populacional);

        float pib_per_capita = pib * 1000000000 / populacao;
        printf("O PIB per capita é: %.2f\n", pib_per_capita);

        float super = (populacao + area + pib + popntos_turisticos + densidade_populacional + pib_per_capita) / 6;
        printf("O valor do super trunfo é: %.2f\n", super);

        char estado2 [50] = "Ceara";

        printf("O estado é: %s\n", estado2);

        char capital2 [50] = "Fortaleza";
        printf("A capital é: %s\n", capital2);

        char codigo_carta2 [50]= "C01";
        printf("O código da carta é: %s\n", codigo_carta2);

        int populacao2 = 2000000;
        printf("A população é: %d\n", populacao2);

        float area2 = 1000000.0;
        printf("A área é: %.2f km²\n", area2);

        float pib2 = 300000.0;
        printf("O PIB é: %.2f milhões\n", pib2);

        int pontos_turisticos2 = 50;
        printf("Pontos turísticos: %d\n", pontos_turisticos2);

        float densidade_populacional2 = populacao / area;
        printf("A densidade populacional é: %.2f habitantes/km²\n", densidade_populacional2);

        float pib_per_capita2 = pib * 1000000 / populacao;
        printf("O PIB per capita é: %.2f\n", pib_per_capita2);

        float super2 = (populacao + area + pib + pontos_turisticos2 + densidade_populacional + pib_per_capita) / 6;
        printf("O valor do super trunfo é: %.2f\n", super2);

        printf("Comparando os valores de super trunfo:\n");
        if (super > super2) {
            printf("O super trunfo do Rio de Janeiro é maior.\n");
        } else if (super < super2) {
            printf("O super trunfo do Ceará é maior.\n");
        } else {
            printf("Os super trunfos são iguais.\n");
        }

        return 0;

    }
typedef struct {
    char estado[50];
    char capital[50];
    char codigo_carta[10];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super;
} Carta;
