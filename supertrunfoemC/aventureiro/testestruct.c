#include <stdio.h>
#include <string.h>

#define BILHAO 1000000000

struct Carta {
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
};

// Função para entrada de dados
void preencherCarta(struct Carta *c) {
    printf("Digite o estado: ");
    scanf("%s", c->estado);

    printf("Digite o código da carta: ");
    scanf("%s", c->codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", c->cidade);

    printf("Digite a população: ");
    scanf("%d", &c->populacao);

    printf("Digite a área em Km²: ");
    scanf("%f", &c->area);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &c->pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &c->pontosTuristicos);

    // Cálculos
    c->densidade = c->populacao / c->area;
    c->pibPerCapita = (c->pib * BILHAO) / c->populacao;
}

// Função para exibir os dados
void exibirCarta(struct Carta c) {
    printf("\n--- Carta %s ---\n", c.codigo);
    printf("Estado: %s\n", c.estado);
    printf("Cidade: %s\n", c.cidade);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f Km²\n", c.area);
    printf("PIB: R$ %.2f bilhões\n", c.pib);
    printf("Pontos turísticos: %d\n", c.pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", c.densidade);
    printf("PIB per capita: R$ %.2f\n", c.pibPerCapita);
}

int main() {
    struct Carta carta1, carta2;

    printf("Preenchendo Carta 01:\n");
    preencherCarta(&carta1);

    printf("\nPreenchendo Carta 02:\n");
    preencherCarta(&carta2);

    printf("\nExibindo Cartas:\n");
    exibirCarta(carta1);
    exibirCarta(carta2);

    return 0;
}
