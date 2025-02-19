#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Declaração de variáveis para a primeira carta
    char estado1[3];  
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    
    // Entrada de dados da primeira carta
    printf("Cadastro da Carta 1\n");
    
    printf("Digite o estado (A-H): ");
    scanf("%2s", estado1); // Coloquei "%2s" para garantir que só lê 2 caracteres
    getchar(); // Coloquei "getchar" Limpa o Enter

    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", codigo1);
    getchar(); // Coloquei "getchar" Limpa o Enter
    
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0; // Remove o '\n' final para entrar com o dado seguinte

    printf("Digite a população: ");
    scanf("%d", &populacao1);
    getchar(); // Coloquei "getchar" Limpa o Enter

    printf("Digite a área em km²: ");
    scanf("%f", &area1);
    getchar(); // Coloquei "getchar" Limpa o Enter

    printf("Digite o PIB  : ");
    scanf("%f", &pib1);
    getchar(); // Coloquei "getchar" Limpa o Enter

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    getchar(); // Coloquei "getchar" Limpa o Enter

    // Declaração de variáveis para a segunda carta
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // Entrada de dados da segunda carta
    printf("\nCadastro da Carta 2\n");
    
    printf("Digite o estado (A-H): ");
    scanf("%2s", estado2);
    getchar(); // Coloquei "getchar" Limpa o Enter

    printf("Digite o código da carta (ex: B02): ");
    scanf("%3s", codigo2);
    getchar(); // Coloquei "getchar" Limpa o Enter
    
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0; // Remove o '\n' final

    printf("Digite a população: ");
    scanf("%d", &populacao2);
    getchar(); // Coloquei "getchar" Limpa o Enter

    printf("Digite a área em km²: ");
    scanf("%f", &area2);
    getchar(); // Coloquei "getchar" Limpa o Enter

    printf("Digite o PIB : ");
    scanf("%f", &pib2);
    getchar(); // Coloquei "getchar" Limpa o Enter

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    getchar(); // Coloquei "getchar" Limpa o Enter

    // Exibição dos dados cadastrados
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);  
    printf("Código: %s\n", codigo1); 
    printf("Nome da Cidade: %s\n", nomeCidade1); 
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    
    return 0;
}
