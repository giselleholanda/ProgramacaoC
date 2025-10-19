#include <stdio.h>

#define BILHAO 1000000000

// Estrutura que representa uma carta do jogo
struct Carta {
    char estado[50];
    char codigocarta[10];
    char nome[50]; // nome da cidade
    unsigned long int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float densidade;
    float pibpercapita;
    float superpoder;
};

    // Área para entrada de dados.
     /* Dados das cartas:
    
    Carta 01
    Estado A: Ceará
    Código da carta: A01
    Cidade: Fortaleza
    População: 2.570.000(estimativa a partir do Censo 2022)
    Área em Km²: 312.35
    PIB em bilhões de reais: 73.00
    Ponto turísticos: 55
    Densidade populacional: hab/km²
    PIB per capita: PIB/pessoa

    Carta 02
    Estado B: Pernambuco
    Código da carta: B01
    Cidade: Recife
    População: 1.589.000(estimativa a partir do Censo 2022)
    Área em Km²: 218.84
    PIB em bilhões de reais: 55.00
    Ponto turísticos: 50 
    Densidade populacional: hab/km²  
    PIB per capita: PIB/pessoa 
    */


// Função para cadastrar os dados da carta
void cadastrarCarta(struct Carta *c) {
    printf("Digite a letra do Estado: \n");
    scanf("%s", c->estado);

    printf("Digite o código da carta: \n");
    scanf("%s", c->codigocarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", c->nome);

    printf("Digite a população: \n");
    scanf("%lu", &c->populacao);

    printf("Digite a área: \n");
    scanf("%f", &c->area);

    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &c->pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &c->pontosturisticos);
}

// Função para calcular os indicadores da carta
void calcularIndicadores(struct Carta *c) {
    c->densidade = c->populacao / c->area;
    c->pibpercapita = (c->pib * BILHAO) / c->populacao;
    c->superpoder = c->populacao + c->area + c->pib + c->pontosturisticos + (1 / c->densidade) + c->pibpercapita;
}

// Função para exibir os dados da carta
void exibirCarta(struct Carta c) {
    printf("Estado: %s\n", c.estado);
    printf("Código da carta: %s\n", c.codigocarta);
    printf("Cidade: %s\n", c.nome);
    printf("População: %lu habitantes\n", c.populacao);
    printf("Área: %.2f Km²\n", c.area);
    printf("PIB: R$ %.2f bilhões\n", c.pib);
    printf("Pontos turísticos: %d\n", c.pontosturisticos);
    printf("Densidade populacional: %.2f hab/Km²\n", c.densidade);
    printf("PIB per capita: R$ %.2f\n", c.pibpercapita);
    printf("Super Poder: %.2f\n", c.superpoder);
    printf("\n");
}

// Função para comparar duas cartas
// condição ? valor_se_verdadeiro : valor_se_falso;

void compararCartas(struct Carta c1, struct Carta c2) {
    printf("Comparação entre as cartas:\n\n");

    printf("População: %s venceu!\n", c1.populacao > c2.populacao ? "Carta 1" : "Carta 2");
    printf("Área: %s venceu!\n", c1.area > c2.area ? "Carta 1" : "Carta 2");
    printf("PIB: %s venceu!\n", c1.pib > c2.pib ? "Carta 1" : "Carta 2");
    printf("Pontos turísticos: %s venceu!\n", c1.pontosturisticos > c2.pontosturisticos ? "Carta 1" : "Carta 2");
    printf("Densidade Populacional: %s venceu!\n", c1.densidade < c2.densidade ? "Carta 1" : "Carta 2");
    printf("PIB per capita: %s venceu!\n", c1.pibpercapita > c2.pibpercapita ? "Carta 1" : "Carta 2");
    printf("Super Poder: %s venceu!\n", c1.superpoder > c2.superpoder ? "Carta 1" : "Carta 2");
    printf("\n");
}

int main() {
    struct Carta carta1, carta2;

    printf("Cadastro da Carta 01:\n");
    cadastrarCarta(&carta1);
    calcularIndicadores(&carta1);

    printf("\nCadastro da Carta 02:\n");
    cadastrarCarta(&carta2);
    calcularIndicadores(&carta2);

    printf("\nExibindo Carta 01:\n");
    exibirCarta(carta1);

    printf("Exibindo Carta 02:\n");
    exibirCarta(carta2);

    compararCartas(carta1, carta2);

    return 0;
}
