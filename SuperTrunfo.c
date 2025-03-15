#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int populacao;
    double area;
    double pib;
    int pontosTuristicos;
    double densidade;
} Carta;

void showMenu() {
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
}

void compareCards(Carta card1, Carta card2, int attribute) {
    printf("\nComparação entre %s e %s\n", card1.nome, card2.nome);
    
    if (attribute == 1) {
        printf("População de %s: %d\n", card1.nome, card1.populacao);
        printf("População de %s: %d\n", card2.nome, card2.populacao);
        printf("Vencedor: %s\n", (card1.populacao > card2.populacao) ? card1.nome : card2.nome);
    } else if (attribute == 2) {
        printf("Área de %s: %.2lf\n", card1.nome, card1.area);
        printf("Área de %s: %.2lf\n", card2.nome, card2.area);
        printf("Vencedor: %s\n", (card1.area > card2.area) ? card1.nome : card2.nome);
    } else if (attribute == 3) {
        printf("PIB de %s: %.2lf\n", card1.nome, card1.pib);
        printf("PIB de %s: %.2lf\n", card2.nome, card2.pib);
        printf("Vencedor: %s\n", (card1.pib > card2.pib) ? card1.nome : card2.nome);
    } else if (attribute == 4) {
        printf("Pontos turísticos de %s: %d\n", card1.nome, card1.pontosTuristicos);
        printf("Pontos turísticos de %s: %d\n", card2.nome, card2.pontosTuristicos);
        printf("Vencedor: %s\n", (card1.pontosTuristicos > card2.pontosTuristicos) ? card1.nome : card2.nome);
    } else if (attribute == 5) {
        printf("Densidade demográfica de %s: %.2lf\n", card1.nome, card1.densidade);
        printf("Densidade demográfica de %s: %.2lf\n", card2.nome, card2.densidade);
        printf("Vencedor: %s\n", (card1.densidade < card2.densidade) ? card1.nome : card2.nome);
    } else {
        printf("Opção inválida!\n");
    }
}

int main() {
    Carta card1 = {"Brasil", 212000000, 8515767.0, 2200000000000.0, 50, 25.0};
    Carta card2 = {"Canadá", 38000000, 9984670.0, 1800000000000.0, 40, 4.0};
    
    while (1) {
        showMenu();
        int option;
        printf("Digite o número do atributo: ");
        scanf("%d", &option);
        compareCards(card1, card2, option);
        
        char repeat;
        printf("\nDeseja jogar novamente? (s/n): ");
        scanf(" %c", &repeat);
        if (repeat != 's' && repeat != 'S') {
            break;
        }
    }
    
    return 0;
}
