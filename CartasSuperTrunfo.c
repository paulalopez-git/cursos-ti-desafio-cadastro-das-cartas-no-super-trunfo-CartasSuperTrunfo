#include <stdio.h>

int main() {
    #include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];   
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

     // Declaração das variáveis para a segunda carta
     char estado2;
     char codigo2[4];
     char nomeCidade2[50];
     int populacao2;
     float area2;
     float pib2;
     int pontosTuristicos2;
     
     
    // Entrada dos dados da primeira carta
    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); 
    getchar(); // limpar buffer
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    getchar(); // limpar buffer

    return 0;
}
