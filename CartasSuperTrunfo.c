#include <stdio.h>
#include <string.h>

// Aqui definimos como vai ser a nossa carta.
// É como se fosse uma "forma" para criar as cartas.
typedef struct {
    char estado[3];
    char nomeCidade[50];
    char codigoCarta[10];
    long populacao;
    float pib;
    char pontosTuristicos[100];
    float area;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

// A função principal do nosso programa. Tudo acontece aqui dentro.
int main() {
    // Criamos as duas cartas que vamos usar no jogo.
    Carta carta1;
    Carta carta2;
    int atributo_para_comparar;

    // --- Parte de Cadastrar a Carta 1 ---
    printf("\n--- Vamos cadastrar a primeira carta ---\n");
    
    printf("Digite a sigla do estado (ex: PE): ");
    scanf("%2s", carta1.estado); 

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", carta1.nomeCidade); 

    printf("Digite o codigo da carta: ");
    scanf(" %9s", carta1.codigoCarta); 

    printf("Digite a populacao: ");
    scanf("%ld", &carta1.populacao); 

    printf("Digite o PIB (use . para decimais): ");
    scanf("%f", &carta1.pib); 

    printf("Digite os pontos turisticos: ");
    scanf(" %99[^\n]", carta1.pontosTuristicos); 

    printf("Digite a area (em km2, use . para decimais): ");
    scanf("%f", &carta1.area); 

    // Agora calculamos os valores que faltam para a Carta 1
    if (carta1.area > 0) {
        carta1.densidade_populacional = (float)carta1.populacao / carta1.area;
    } else {
        carta1.densidade_populacional = 0.0;
    }
    
    if (carta1.populacao > 0) {
        carta1.pib_per_capita = carta1.pib / (float)carta1.populacao;
    } else {
        carta1.pib_per_capita = 0.0;
    }

    // --- Parte de Cadastrar a Carta 2 ---
    printf("\n--- Agora vamos cadastrar a segunda carta ---\n");

    printf("Digite a sigla do estado (ex: PE): ");
    scanf("%2s", carta2.estado); 

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", carta2.nomeCidade); 

    printf("Digite o codigo da carta: ");
    scanf(" %9s", carta2.codigoCarta); 

    printf("Digite a populacao: ");
    scanf("%ld", &carta2.populacao); 

    printf("Digite o PIB (use . para decimais): ");
    scanf("%f", &carta2.pib); 

    printf("Digite os pontos turisticos: ");
    scanf(" %99[^\n]", carta2.pontosTuristicos); 

    printf("Digite a area (em km2, use . para decimais): ");
    scanf("%f", &carta2.area); 

    // Calculamos os valores que faltam para a Carta 2
    if (carta2.area > 0) {
        carta2.densidade_populacional = (float)carta2.populacao / carta2.area;
    } else {
        carta2.densidade_populacional = 0.0;
    }
    
    if (carta2.populacao > 0) {
        carta2.pib_per_capita = carta2.pib / (float)carta2.populacao;
    } else {
        carta2.pib_per_capita = 0.0;
    }

    // --- Agora exibimos as cartas para ver se deu tudo certo ---
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %ld\n", carta1.populacao);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Densidade Populacional: %.2f hab/km2\n", carta1.densidade_populacional);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %ld\n", carta2.populacao);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Densidade Populacional: %.2f hab/km2\n", carta2.densidade_populacional);

    // 1: Populacao, 2: Area, 3: PIB, 4: Densidade, 5: PIB per capita
    atributo_para_comparar = 1;

    // --- Fazemos a comparação ---
    printf("\n--- Batalha (Atributo: Populacao) ---\n");
    
    if (atributo_para_comparar == 1) { // Compara a População
        printf("Carta 1 (%s): %ld\n", carta1.nomeCidade, carta1.populacao);
        printf("Carta 2 (%s): %ld\n", carta2.nomeCidade, carta2.populacao);
        if (carta1.populacao > carta2.populacao) {
            printf("Resultado: A Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        } else if (carta2.populacao > carta1.populacao) {
            printf("Resultado: A Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (atributo_para_comparar == 2) { // Compara a Área

    }
    

    return 0;
}