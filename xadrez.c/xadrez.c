#include <stdio.h>

/*
 * Simulação dos movimentos de peças de xadrez:
 * Torre, Bispo e Rainha.
 * Cada peça usa uma estrutura de repetição diferente.
 */

int main() {
    // ------------------------------
    // Movimento da TORRE (5 casas para a direita) usando FOR
    // ------------------------------
    int i;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ------------------------------
    // Movimento do BISPO (5 casas na diagonal para cima e à direita) usando WHILE
    // ------------------------------
    int j = 0;
    printf("Movimento do Bispo (5 casas na Diagonal para Cima e Direita):\n");
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");

    // ------------------------------
    // Movimento da RAINHA (8 casas para a esquerda) usando DO-WHILE
    // ------------------------------
    int k = 0;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}
