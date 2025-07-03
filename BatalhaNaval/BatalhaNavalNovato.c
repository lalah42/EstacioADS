#include <stdio.h>

int main() {
    int tabuleiro[10][10];  // Tabuleiro 10x10
    int i, j;

    // Inicializar o tabuleiro com 0 (água)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Tamanho dos navios fixo
    int tamanho_navio = 3;

    // Navios com valor 3
    int navio_horizontal[3] = {3, 3, 3};
    int navio_vertical[3] = {3, 3, 3};

    // Coordenadas iniciais dos navios
    int linha_horizontal = 2;
    int coluna_horizontal = 4;
    int linha_vertical = 5;
    int coluna_vertical = 7;

    // Verificar se os navios cabem no tabuleiro
    if (coluna_horizontal + tamanho_navio <= 10 && linha_vertical + tamanho_navio <= 10) {

        // Posicionar navio horizontal
        for (i = 0; i < tamanho_navio; i++) {
            tabuleiro[linha_horizontal][coluna_horizontal + i] = navio_horizontal[i];
        }

        // Posicionar navio vertical (verificando sobreposição)
        for (i = 0; i < tamanho_navio; i++) {
            if (tabuleiro[linha_vertical + i][coluna_vertical] != 0) {
                printf("Erro: sobreposição de navios!\n");
                return 1;
            }
            tabuleiro[linha_vertical + i][coluna_vertical] = navio_vertical[i];
        }

    } else {
        printf("Erro: coordenadas inválidas para posicionar navios!\n");
        return 1;
    }

    // Exibir o tabuleiro no console
    printf("Tabuleiro Batalha Naval:\n\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
