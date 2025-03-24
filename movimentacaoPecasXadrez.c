#include <stdio.h>

void main() {

    // Torre
    printf("Torre:\n");
    int i;
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");  // A torre move 5 casas para a direita
    }

    // Bispo
    printf("\nBispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima e Direita\n");  // O bispo move 5 casas para cima e à direita
        j++;
    }

    // Rainha
    printf("\nRainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");  // A rainha move 8 casas para a esquerda
        k++;
    } while (k <= 8);
}