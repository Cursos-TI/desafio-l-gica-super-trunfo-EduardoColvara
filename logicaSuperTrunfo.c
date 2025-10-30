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
    int opcao;


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


    printf("=== SUPER TRUNFO: COMPARACAO ENTRE PAISES ===\n");
    printf("Carta 1: %s\n", carta1.pais);
    printf("Carta 2: %s\n\n", carta2.pais);

    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n--- Resultado da Comparacao ---\n");

    switch (opcao) {
        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %d habitantes\n", carta1.pais, carta1.populacao);
            printf("%s: %d habitantes\n", carta2.pais, carta2.populacao);

            if (carta1.populacao > carta2.populacao)
                printf("\nResultado: %s venceu!\n", carta1.pais);
            else if (carta2.populacao > carta1.populacao)
                printf("\nResultado: %s venceu!\n", carta2.pais);
            else
                printf("\nResultado: Empate!\n");
            break;

        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f km²\n", carta1.pais, carta1.area);
            printf("%s: %.2f km²\n", carta2.pais, carta2.area);

            if (carta1.area > carta2.area)
                printf("\nResultado: %s venceu!\n", carta1.pais);
            else if (carta2.area > carta1.area)
                printf("\nResultado: %s venceu!\n", carta2.pais);
            else
                printf("\nResultado: Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f trilhoes de dolares\n", carta1.pais, carta1.pib / 1000000000000);
            printf("%s: %.2f trilhoes de dolares\n", carta2.pais, carta2.pib / 1000000000000);

            if (carta1.pib > carta2.pib)
                printf("\nResultado: %s venceu!\n", carta1.pais);
            else if (carta2.pib > carta1.pib)
                printf("\nResultado: %s venceu!\n", carta2.pais);
            else
                printf("\nResultado: Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d pontos\n", carta1.pais, carta1.pontosTuristicos);
            printf("%s: %d pontos\n", carta2.pais, carta2.pontosTuristicos);


            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                printf("\nResultado: %s venceu!\n", carta1.pais);
            } else {
                if (carta2.pontosTuristicos > carta1.pontosTuristicos)
                    printf("\nResultado: %s venceu!\n", carta2.pais);
                else
                    printf("\nResultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f hab/km²\n", carta1.pais, carta1.densidadeDemografica);
            printf("%s: %.2f hab/km²\n", carta2.pais, carta2.densidadeDemografica);

            if (carta1.densidadeDemografica < carta2.densidadeDemografica)
                printf("\nResultado: %s venceu!\n", carta1.pais);
            else if (carta2.densidadeDemografica < carta1.densidadeDemografica)
                printf("\nResultado: %s venceu!\n", carta2.pais);
            else
                printf("\nResultado: Empate!\n");
            break;

        default:
            printf("Opcao invalida! Escolha um numero entre 1 e 5.\n");
            break;
    }

    printf("\n=== Fim da comparacao ===\n");
    return 0;
}
