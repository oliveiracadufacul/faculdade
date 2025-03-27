#include <stdio.h>

#define TAM_TABULEIRO 10
#define TAM_NAVIO 3

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
    printf("Tabuleiro do Batalha Naval:\n");
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void main() {
    // Inicializa o tabuleiro com água (0)
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0};

    // Coordenadas iniciais dos navios
    int navioHorizontalLinha = 2, navioHorizontalColuna = 1,
        navioVerticalLinha = 5, navioVerticalColuna = 4;

    // Posiciona o navio horizontal (tamanho 3)
    for (int i = 0; i < TAM_NAVIO; i++) {
        if (navioHorizontalColuna + i < TAM_TABULEIRO) {
            tabuleiro[navioHorizontalLinha][navioHorizontalColuna + i] = 3; // Navio horizontal
        }
    }

    // Posiciona o navio vertical (tamanho 3)
    for (int i = 0; i < TAM_NAVIO; i++) {
        if (navioVerticalLinha + i < TAM_TABULEIRO) {
            tabuleiro[navioVerticalLinha + i][navioVerticalColuna] = 3; // Navio vertical
        }
    }

    // Exibe o tabuleiro com os navios posicionados
    exibirTabuleiro(tabuleiro);
}