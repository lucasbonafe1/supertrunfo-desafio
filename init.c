#include <stdio.h>

typedef struct {
    char state[3];         
    char letterCode[10];   
    char city[50];         
    int population;    
    float area;            
    float pib;             
    int turisticPoints;    
} Carta;

int main(){
    Carta carta1;
    Carta carta1;

    printf("Escreva o estado da carta: ");
    scanf("%s", carta1.state)

    printf("Escreva o código da carta: ");
    scanf("%s", carta1.letterCode);

    printf("Escreva a cidade da carta: ");
    scanf("%s", carta1.city);

    printf("Digite a população: ");
    scanf("%d", &carta1.population);

    printf("Digite a área: ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.turisticPoints);

    printf("Agora vamos para a segunda carta: \n");

    printf("Escreva o estado da carta: ");
    scanf("%s", carta2.state)

    printf("Escreva o código da carta: ");
    scanf("%s", carta2.letterCode);

    printf("Escreva a cidade da carta: ");
    scanf("%s", carta2.city);

    printf("Digite a população: ");
    scanf("%d", &carta2.population);

    printf("Digite a área: ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.turisticPoints);

   if(carta1.area > carta2.area){
    printf("Valor da área da carta 1 é maior, portanto CARTA 1 venceu!");
   } else {
    printf("Valor da área da carta 2 é maior, portanto CARTA 2 venceu!");
   }
    
    return 0;
}