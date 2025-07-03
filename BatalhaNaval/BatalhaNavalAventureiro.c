#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    int i, j;
    int tamanho = 3;

    // Inicializa com 0 (água)
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            tabuleiro[i][j] = 0;

    // NAVIO HORIZONTAL
    int lin_h = 1, col_h = 2;
    if (col_h + tamanho <= 10) {
        for (i = 0; i < tamanho; i++) {
            if (tabuleiro[lin_h][col_h + i] != 0) {
                printf("Erro: sobreposição no navio horizontal\n");
                return 1;
            }
            tabuleiro[lin_h][col_h + i] = 3;
        }
    }

    // NAVIO VERTICAL
    int lin_v = 4, col_v = 0;
    if (lin_v + tamanho <= 10) {
        for (i = 0; i < tamanho; i++) {
            if (tabuleiro[lin_v + i][col_v] != 0) {
                printf("Erro: sobreposição no navio vertical\n");
                return 1;
            }
            tabuleiro[lin_v + i][col_v] = 3;
        }
    }

    // NAVIO DIAGONAL PRINCIPAL (\)
    int lin_dp = 5, col_dp = 5;
    if (lin_dp + tamanho <= 10 && col_dp + tamanho <= 10) {
        for (i = 0; i < tamanho; i++) {
            if (tabuleiro[lin_dp + i][col_dp + i] != 0) {
                printf("Erro: sobreposição no navio diagonal principal\n");
                return 1;
            }
            tabuleiro[lin_dp + i][col_dp + i] = 3;
        }
    }

    // NAVIO DIAGONAL SECUNDÁRIA (/)
    int lin_ds = 0, col_ds = 9;
    if (lin_ds + tamanho <= 10 && col_ds - tamanho + 1 >= 0) {
        for (i = 0; i < tamanho; i++) {
            if (tabuleiro[lin_ds + i][col_ds - i] != 0) {
                printf("Erro: sobreposição no navio diagonal secundária\n");
                return 1;
            }
            tabuleiro[lin_ds + i][col_ds - i] = 3;
        }
    }

    // EXIBIR TABULEIRO
    printf("\nTabuleiro Batalha Naval:\n\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
