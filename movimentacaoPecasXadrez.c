#include <stdio.h>

void main() {

    // Torre
    printf("Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Bispo
    printf("\nBispo:\n");
    for (int j = 1; j <= 5; j++) {
        printf("Cima\n");
        for (int l = 1; l <= 1; l++) {
            printf("Direita\n");
        }
    }

    // Rainha
    printf("\nRainha:\n");
    int k = 1;
    for (int k = 1; k <= 8; k++) {
        printf("Esquerda\n"); 
    }

    // Cavalo
    printf("\nCavalo:\n");
    for (int h = 1; h <= 2; h++) {
        printf("Baixo\n");
        if (h == 2) {
            for (int m = 1; m <= 1; m++) {
                printf("Esquerda\n");
            }
        }
    }
}