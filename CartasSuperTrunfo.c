#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[3];
    char nomeCidade[50];
    char codigoCarta[10];
    long populacao;
    float pib;
    char pontosTuristicos[100];
    float area;
} Carta;


void cadastrar_carta(Carta *carta, int numero_carta) {
    printf("\n--- Cadastro da Carta %d ---\n", numero_carta);
    
    printf("Digite a sigla do estado (ex: PE): ");
    scanf("%2s", carta->estado); 

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", carta->nomeCidade); 

    printf("Digite o codigo da carta: ");
    scanf(" %9s", carta->codigoCarta); 

    printf("Digite a populacao: ");
    scanf("%ld", &carta->populacao); 

    printf("Digite o PIB: ");
    scanf("%f", &carta->pib); 

    printf("Digite os pontos turisticos: ");
    scanf(" %99[^\n]", carta->pontosTuristicos); 

    printf("Digite a area (em km2): ");
    scanf("%f", &carta->area); 
}

void exibir_carta(Carta carta, int numero_carta) {
    printf("\n--- Dados da Carta %d ---\n", numero_carta);
    printf("Estado: %s\n", carta.estado);
    printf("Cidade: %s\n", carta.nomeCidade);
    printf("Codigo: %s\n", carta.codigoCarta);
    printf("Populacao: %ld\n", carta.populacao);
    printf("PIB: %.2f\n", carta.pib);
    printf("Pontos Turisticos: %s\n", carta.pontosTuristicos);
    printf("Area: %.2f\n", carta.area);
}

int main() {
    Carta carta1;
    Carta carta2;

    // Chama a função para cadastrar a primeira carta
    cadastrar_carta(&carta1, 1);

    // Chama a função para cadastrar a segunda carta
    cadastrar_carta(&carta2, 2);

    // Exibe os dados das duas cartas
    exibir_carta(carta1, 1);
    exibir_carta(carta2, 2);

    return 0;
}