#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para representar uma carta
typedef struct {
    char estado[3];
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

// Função para capturar os dados de uma carta
void cadastrarCarta(Carta *c) {
    printf("Digite o estado (A-H): ");
    scanf("%2s", c->estado);
    while (getchar() != '\n');

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%3s", c->codigo);
    while (getchar() != '\n');

    printf("Digite o nome da cidade: ");
    fgets(c->nomeCidade, sizeof(c->nomeCidade), stdin);
    c->nomeCidade[strcspn(c->nomeCidade, "\n")] = 0;

    printf("Digite a populacao: ");
    scanf("%d", &c->populacao);
    while (getchar() != '\n');

    printf("Digite a area em km²: ");
    scanf("%f", &c->area);
    while (getchar() != '\n');

    printf("Digite o PIB: ");
    scanf("%f", &c->pib);
    while (getchar() != '\n');

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &c->pontosTuristicos);
    while (getchar() != '\n');
}

// Função para exibir os atributos disponíveis
void exibirMenu(int excluido) {
    printf("\nEscolha um atributo para comparar:\n");
    switch (excluido) {
        case 1:
            printf("2 - Area\n3 - PIB\n4 - Pontos Turisticos\n");
            break;
        case 2:
            printf("1 - Populacao\n3 - PIB\n4 - Pontos Turisticos\n");
            break;
        case 3:
            printf("1 - Populacao\n2 - Area\n4 - Pontos Turisticos\n");
            break;
        case 4:
            printf("1 - Populacao\n2 - Area\n3 - PIB\n");
            break;
        default:
            printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n");
    }
}

// Função para obter o valor do atributo selecionado
float obterValorAtributo(Carta c, int opcao) {
    switch (opcao) {
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.pontosTuristicos;
        default: return 0;
    }
}

// Função principal
int main() {
    Carta carta1, carta2;
    int opcao1, opcao2;
    float valor1_1, valor1_2, valor2_1, valor2_2, soma1, soma2;

    printf("Cadastro da Carta 1\n");
    cadastrarCarta(&carta1);

    printf("\nCadastro da Carta 2\n");
    cadastrarCarta(&carta2);

    // Escolha dos atributos
    exibirMenu(0);
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &opcao1);
    while (opcao1 < 1 || opcao1 > 4) {
        printf("Opcao invalida! Escolha novamente: ");
        scanf("%d", &opcao1);
    }
    
    exibirMenu(opcao1);
    printf("Escolha o segundo atributo (diferente do primeiro): ");
    scanf("%d", &opcao2);
    while (opcao2 < 1 || opcao2 > 4 || opcao2 == opcao1) {
        printf("Opcao invalida! Escolha novamente: ");
        scanf("%d", &opcao2);
    }

    // Comparacao
    valor1_1 = obterValorAtributo(carta1, opcao1);
    valor1_2 = obterValorAtributo(carta2, opcao1);
    valor2_1 = obterValorAtributo(carta1, opcao2);
    valor2_2 = obterValorAtributo(carta2, opcao2);

    printf("\nComparacao:\n");
    printf("%s: %s = %.2f, %s = %.2f\n", carta1.nomeCidade, carta2.nomeCidade, valor1_1, carta2.nomeCidade, valor1_2);
    printf("%s: %s = %.2f, %s = %.2f\n", carta1.nomeCidade, carta2.nomeCidade, valor2_1, carta2.nomeCidade, valor2_2);

    soma1 = valor1_1 + valor2_1;
    soma2 = valor1_2 + valor2_2;

    printf("\nResultado Final:\n");
    printf("Soma dos atributos de %s: %.2f\n", carta1.nomeCidade, soma1);
    printf("Soma dos atributos de %s: %.2f\n", carta2.nomeCidade, soma2);

    (soma1 > soma2) ? printf("%s venceu!\n", carta1.nomeCidade) : 
    (soma1 < soma2) ? printf("%s venceu!\n", carta2.nomeCidade) : printf("Empate!\n");
    
    return 0;
}