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

void compareCards(Carta card1, Carta card2, int attr1, int attr2) {
    double val1_card1, val1_card2, val2_card1, val2_card2, sum1, sum2;
    
    printf("\nComparação entre %s e %s\n", card1.nome, card2.nome);
    
    switch (attr1) {
        case 1:
            val1_card1 = card1.populacao;
            val1_card2 = card2.populacao;
            printf("População - %s: %.0lf, %s: %.0lf\n", card1.nome, val1_card1, card2.nome, val1_card2);
            break;
        case 2:
            val1_card1 = card1.area;
            val1_card2 = card2.area;
            printf("Área - %s: %.2lf, %s: %.2lf\n", card1.nome, val1_card1, card2.nome, val1_card2);
            break;
        case 3:
            val1_card1 = card1.pib;
            val1_card2 = card2.pib;
            printf("PIB - %s: %.2lf, %s: %.2lf\n", card1.nome, val1_card1, card2.nome, val1_card2);
            break;
        case 4:
            val1_card1 = card1.pontosTuristicos;
            val1_card2 = card2.pontosTuristicos;
            printf("Pontos turísticos - %s: %.0lf, %s: %.0lf\n", card1.nome, val1_card1, card2.nome, val1_card2);
            break;
        case 5:
            val1_card1 = card1.densidade;
            val1_card2 = card2.densidade;
            printf("Densidade - %s: %.2lf, %s: %.2lf\n", card1.nome, val1_card1, card2.nome, val1_card2);
            break;
        default:
            printf("Opção inválida!\n");
            return;
    }
    
    do {
        showMenu();
        printf("Escolha o segundo atributo: ");
        scanf("%d", &attr2);
    } while (attr2 == attr1);
    
    switch (attr2) {
        case 1:
            val2_card1 = card1.populacao;
            val2_card2 = card2.populacao;
            printf("População - %s: %.0lf, %s: %.0lf\n", card1.nome, val2_card1, card2.nome, val2_card2);
            break;
        case 2:
            val2_card1 = card1.area;
            val2_card2 = card2.area;
            printf("Área - %s: %.2lf, %s: %.2lf\n", card1.nome, val2_card1, card2.nome, val2_card2);
            break;
        case 3:
            val2_card1 = card1.pib;
            val2_card2 = card2.pib;
            printf("PIB - %s: %.2lf, %s: %.2lf\n", card1.nome, val2_card1, card2.nome, val2_card2);
            break;
        case 4:
            val2_card1 = card1.pontosTuristicos;
            val2_card2 = card2.pontosTuristicos;
            printf("Pontos turísticos - %s: %.0lf, %s: %.0lf\n", card1.nome, val2_card1, card2.nome, val2_card2);
            break;
        case 5:
            val2_card1 = card1.densidade;
            val2_card2 = card2.densidade;
            printf("Densidade - %s: %.2lf, %s: %.2lf\n", card1.nome, val2_card1, card2.nome, val2_card2);
            break;
        default:
            printf("Opção inválida!\n");
            return;
    }
    
    sum1 = val1_card1 + val2_card1;
    sum2 = val1_card2 + val2_card2;
    printf("Soma dos atributos - %s: %.2lf, %s: %.2lf\n", card1.nome, sum1, card2.nome, sum2);
    
    if (sum1 > sum2)
        printf("Vencedor: %s\n", card1.nome);
    else if (sum1 < sum2)
        printf("Vencedor: %s\n", card2.nome);
    else
        printf("Empate!\n");
}

int main() {
    Carta card1 = {"Brasil", 212000000, 8515767.0, 2200000000000.0, 50, 25.0};
    Carta card2 = {"Canadá", 38000000, 9984670.0, 1800000000000.0, 40, 4.0};
    
    while (1) {
        showMenu();
        int attr1, attr2;
        printf("Digite o primeiro atributo: ");
        scanf("%d", &attr1);
        compareCards(card1, card2, attr1, attr2);
        
        char repeat;
        printf("\nDeseja jogar novamente? (s/n): ");
        scanf(" %c", &repeat);
        if (repeat != 's' && repeat != 'S') {
            break;
        }
    }
    
    return 0;
}
