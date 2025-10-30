#include <stdio.h>
#include <string.h>

struct Carta {
    char pais[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
};

int main() {
    struct Carta carta1, carta2;
    int opcao1, opcao2;

    strcpy(carta1.pais, "Brasil");
    carta1.populacao = 214000000;
    carta1.area = 8516000;
    carta1.pib = 2490000000000;
    carta1.pontosTuristicos = 15;
    carta1.densidadeDemografica = carta1.populacao / carta1.area;

    strcpy(carta2.pais, "Argentina");
    carta2.populacao = 46000000;
    carta2.area = 2780000;
    carta2.pib = 640000000000;
    carta2.pontosTuristicos = 10;
    carta2.densidadeDemografica = carta2.populacao / carta2.area;

    printf("=== SUPER TRUNFO: DESAFIO FINAL ===\n");
    printf("Carta 1: %s\n", carta1.pais);
    printf("Carta 2: %s\n\n", carta2.pais);

    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    if (opcao1 < 1 || opcao1 > 5) {
        printf("\nOpção inválida! Encerrando programa.\n");
        return 0;
    }

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != opcao1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }
    printf("Opção: ");
    scanf("%d", &opcao2);

    if (opcao2 == opcao1 || opcao2 < 1 || opcao2 > 5) {
        printf("\nOpção inválida ou repetida! Encerrando programa.\n");
        return 0;
    }

    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");

    float valor1A = 0, valor2A = 0;
    float valor1B = 0, valor2B = 0;
    float soma1 = 0, soma2 = 0;

    switch (opcao1) {
        case 1:
            printf("Atributo 1: População\n");
            valor1A = carta1.populacao;
            valor2A = carta2.populacao;
            printf("%s: %d habitantes\n", carta1.pais, carta1.populacao);
            printf("%s: %d habitantes\n\n", carta2.pais, carta2.populacao);
            break;
        case 2:
            printf("Atributo 1: Área\n");
            valor1A = carta1.area;
            valor2A = carta2.area;
            printf("%s: %.2f km²\n", carta1.pais, carta1.area);
            printf("%s: %.2f km²\n\n", carta2.pais, carta2.area);
            break;
        case 3:
            printf("Atributo 1: PIB\n");
            valor1A = carta1.pib;
            valor2A = carta2.pib;
            printf("%s: %.2f trilhões de dólares\n", carta1.pais, carta1.pib / 1000000000000);
            printf("%s: %.2f trilhões de dólares\n\n", carta2.pais, carta2.pib / 1000000000000);
            break;
        case 4:
            printf("Atributo 1: Pontos Turísticos\n");
            valor1A = carta1.pontosTuristicos;
            valor2A = carta2.pontosTuristicos;
            printf("%s: %d pontos\n", carta1.pais, carta1.pontosTuristicos);
            printf("%s: %d pontos\n\n", carta2.pais, carta2.pontosTuristicos);
            break;
        case 5:
            printf("Atributo 1: Densidade Demográfica\n");
            valor1A = carta1.densidadeDemografica;
            valor2A = carta2.densidadeDemografica;
            printf("%s: %.2f hab/km²\n", carta1.pais, carta1.densidadeDemografica);
            printf("%s: %.2f hab/km²\n\n", carta2.pais, carta2.densidadeDemografica);
            break;
        default:
            printf("Erro!\n");
            return 0;
    }

    switch (opcao2) {
        case 1:
            printf("Atributo 2: População\n");
            valor1B = carta1.populacao;
            valor2B = carta2.populacao;
            printf("%s: %d habitantes\n", carta1.pais, carta1.populacao);
            printf("%s: %d habitantes\n\n", carta2.pais, carta2.populacao);
            break;
        case 2:
            printf("Atributo 2: Área\n");
            valor1B = carta1.area;
            valor2B = carta2.area;
            printf("%s: %.2f km²\n", carta1.pais, carta1.area);
            printf("%s: %.2f km²\n\n", carta2.pais, carta2.area);
            break;
        case 3:
            printf("Atributo 2: PIB\n");
            valor1B = carta1.pib;
            valor2B = carta2.pib;
            printf("%s: %.2f trilhões de dólares\n", carta1.pais, carta1.pib / 1000000000000);
            printf("%s: %.2f trilhões de dólares\n\n", carta2.pais, carta2.pib / 1000000000000);
            break;
        case 4:
            printf("Atributo 2: Pontos Turísticos\n");
            valor1B = carta1.pontosTuristicos;
            valor2B = carta2.pontosTuristicos;
            printf("%s: %d pontos\n", carta1.pais, carta1.pontosTuristicos);
            printf("%s: %d pontos\n\n", carta2.pais, carta2.pontosTuristicos);
            break;
        case 5:
            printf("Atributo 2: Densidade Demográfica\n");
            valor1B = carta1.densidadeDemografica;
            valor2B = carta2.densidadeDemografica;
            printf("%s: %.2f hab/km²\n", carta1.pais, carta1.densidadeDemografica);
            printf("%s: %.2f hab/km²\n\n", carta2.pais, carta2.densidadeDemografica);
            break;
        default:
            printf("Erro!\n");
            return 0;
    }

    valor1A = (opcao1 == 5) ? 1 / valor1A : valor1A;
    valor2A = (opcao1 == 5) ? 1 / valor2A : valor2A;
    valor1B = (opcao2 == 5) ? 1 / valor1B : valor1B;
    valor2B = (opcao2 == 5) ? 1 / valor2B : valor2B;

    soma1 = valor1A + valor1B;
    soma2 = valor2A + valor2B;

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", carta1.pais, soma1);
    printf("%s: %.2f\n\n", carta2.pais, soma2);

    (soma1 > soma2) ? printf("Resultado: %s venceu!\n", carta1.pais) :
    (soma2 > soma1) ? printf("Resultado: %s venceu!\n", carta2.pais) :
    printf("Resultado: Empate!\n");

    printf("\n=== Fim da Comparação ===\n");

    return 0;
}
