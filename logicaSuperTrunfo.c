#include <stdio.h>
#include <string.h>


struct Carta {
    char estado[20];
    char codigo[5];
    char nomeCidade[30];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    
    struct Carta carta1, carta2;

    strcpy(carta1.estado, "Rio Grande do Sul");
    strcpy(carta1.codigo, "A1");
    strcpy(carta1.nomeCidade, "Pelotas");
    carta1.populacao = 343132;
    carta1.area = 1609.7;
    carta1.pib = 11500000000;
    carta1.numPontosTuristicos = 12;

    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    strcpy(carta2.estado, "Rio Grande do Sul");
    strcpy(carta2.codigo, "A2");
    strcpy(carta2.nomeCidade, "Porto Alegre");
    carta2.populacao = 1484941;
    carta2.area = 496.8;
    carta2.pib = 85000000000;
    carta2.numPontosTuristicos = 25;

    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;


    int compararPopulacao = 0;
    int compararArea = 0;
    int compararPib = 0;
    int compararDensidade = 0;
    int compararPibPerCapita = 1; 

    printf("=== Comparacao de Cartas Super Trunfo ===\n\n");

    if (compararPopulacao) {
        printf("Comparacao de cartas (Atributo: Populacao)\n");
        printf("%s: %d habitantes\n", carta1.nomeCidade, carta1.populacao);
        printf("%s: %d habitantes\n", carta2.nomeCidade, carta2.populacao);
        if (carta1.populacao > carta2.populacao)
            printf("\nResultado: %s venceu!\n", carta1.nomeCidade);
        else if (carta2.populacao > carta1.populacao)
            printf("\nResultado: %s venceu!\n", carta2.nomeCidade);
        else
            printf("\nResultado: Empate!\n");
    }

    else if (compararArea) {
        printf("Comparacao de cartas (Atributo: Area)\n");
        printf("%s: %.2f km²\n", carta1.nomeCidade, carta1.area);
        printf("%s: %.2f km²\n", carta2.nomeCidade, carta2.area);
        if (carta1.area > carta2.area)
            printf("\nResultado: %s venceu!\n", carta1.nomeCidade);
        else if (carta2.area > carta1.area)
            printf("\nResultado: %s venceu!\n", carta2.nomeCidade);
        else
            printf("\nResultado: Empate!\n");
    }

    else if (compararPib) {
        printf("Comparacao de cartas (Atributo: PIB)\n");
        printf("%s: %.2f bilhões\n", carta1.nomeCidade, carta1.pib / 1000000000);
        printf("%s: %.2f bilhões\n", carta2.nomeCidade, carta2.pib / 1000000000);
        if (carta1.pib > carta2.pib)
            printf("\nResultado: %s venceu!\n", carta1.nomeCidade);
        else if (carta2.pib > carta1.pib)
            printf("\nResultado: %s venceu!\n", carta2.nomeCidade);
        else
            printf("\nResultado: Empate!\n");
    }

    else if (compararDensidade) {
        printf("Comparacao de cartas (Atributo: Densidade Populacional)\n");
        printf("%s: %.2f hab/km²\n", carta1.nomeCidade, carta1.densidadePopulacional);
        printf("%s: %.2f hab/km²\n", carta2.nomeCidade, carta2.densidadePopulacional);
        if (carta1.densidadePopulacional < carta2.densidadePopulacional)
            printf("\nResultado: %s venceu!\n", carta1.nomeCidade);
        else if (carta2.densidadePopulacional < carta1.densidadePopulacional)
            printf("\nResultado: %s venceu!\n", carta2.nomeCidade);
        else
            printf("\nResultado: Empate!\n");
    }

    else if (compararPibPerCapita) {
        printf("Comparacao de cartas (Atributo: PIB per Capita)\n");
        printf("%s: R$ %.2f\n", carta1.nomeCidade, carta1.pibPerCapita);
        printf("%s: R$ %.2f\n", carta2.nomeCidade, carta2.pibPerCapita);
        if (carta1.pibPerCapita > carta2.pibPerCapita)
            printf("\nResultado: %s venceu!\n", carta1.nomeCidade);
        else if (carta2.pibPerCapita > carta1.pibPerCapita)
            printf("\nResultado: %s venceu!\n", carta2.nomeCidade);
        else
            printf("\nResultado: Empate!\n");
    }

    return 0;
}
