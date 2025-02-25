#include <stdio.h>

typedef struct carta = {
    char state;
    string letterCode;
    string city;
    int population
    float area;
    float pib;
    int turisticPoints
}

int main(){
    printf("Escreva o estado da carta: ");
    scanf("%s", carta.state)

    printf("Escreva o código da carta: ");
    scanf("%s", carta.letterCode);

    printf("Escreva a cidade da carta: ");
    scanf("%s", carta.city);

    printf("Digite a população: ");
    scanf("%d", &carta.population);

    printf("Digite a área: ");
    scanf("%f", &carta.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta.turisticPoints);

    printf("\nDados da carta:\n");
    printf("Estado: %s\n", carta.state);
    printf("Código: %s\n", carta.letterCode);
    printf("Cidade: %s\n", carta.city);
    printf("População: %d\n", carta.population);
    printf("Área: %.2f\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Pontos turísticos: %d\n", carta.turisticPoints);
    
    return 0;
}