#include <stdio.h>

int main() {
    // Declaração e inicialização das variáveis para a primeira carta
    char estado1 = 'C';
    char codigo1[] = "C01";
    char nomeCidade1[] = "Fortaleza";
    int populacao1 = 2700000;
    float area1 = 313.8;
    float pib1 = 67.02;
    int pontosTuristicos1 = 50;

    // Declaração e inicialização das variáveis para a segunda carta
    char estado2 = 'C';
    char codigo2[] = "C02";
    char nomeCidade2[] = "Sobral";
    int populacao2 = 210000;
    float area2 = 2122.9;
    float pib2 = 6.57;
    int pontosTuristicos2 = 15;

    // Declaração e inicialização das variáveis para a terceira carta
    char estado3 = 'C';
    char codigo3[] = "C03";
    char nomeCidade3[] = "Juazeiro do Norte";
    int populacao3 = 278000;
    float area3 = 248.2;
    float pib3 = 8.94;
    int pontosTuristicos3 = 20;

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    // Exibição dos dados da terceira carta
    printf("\nCarta 3:\n");
    printf("Estado: %c\n", estado3);
    printf("Código: %s\n", codigo3);
    printf("Nome da Cidade: %s\n", nomeCidade3);
    printf("População: %d\n", populacao3);
    printf("Área: %.2f km²\n", area3);
    printf("PIB: %.2f bilhões de reais\n", pib3);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos3);

    return 0;
}
