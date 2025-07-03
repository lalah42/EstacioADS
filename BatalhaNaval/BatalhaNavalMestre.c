#include <stdio.h>

void inicializarTabuleiro(int tabuleiro[10][10]) {
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            tabuleiro[i][j] = 0;
}

void posicionarNavios(int tabuleiro[10][10]) {
    // Navio horizontal
    for (int j = 2; j < 5; j++)
        tabuleiro[1][j] = 3;

    // Navio vertical
    for (int i = 5; i < 8; i++)
        tabuleiro[i][6] = 3;

    // Navio diagonal descendente
    for (int i = 0; i < 3; i++)
        tabuleiro[7 + i][i] = 3;

    // Navio diagonal ascendente
    for (int i = 0; i < 3; i++)
        tabuleiro[4 - i][4 + i] = 3;
}

void aplicarHabilidade(int tabuleiro[10][10], int habilidade[5][5], int centroX, int centroY) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int x = centroX - 2 + i;
            int y = centroY - 2 + j;
            if (x >= 0 && x < 10 && y >= 0 && y < 10 && habilidade[i][j] == 1) {
                if (tabuleiro[x][y] == 0)
                    tabuleiro[x][y] = 5;
            }
        }
    }
}

void criarCone(int habilidade[5][5]) {
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            habilidade[i][j] = (j >= 2 - i && j <= 2 + i) ? 1 : 0;
}

void criarCruz(int habilidade[5][5]) {
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            habilidade[i][j] = (i == 2 || j == 2) ? 1 : 0;
}

int valorAbsoluto(int n) {
    return (n < 0) ? -n : n;
}

void criarOctaedro(int habilidade[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int distI = i - 2;
            if (distI < 0) distI = -distI;
            int distJ = j - 2;
            if (distJ < 0) distJ = -distJ;

            habilidade[i][j] = (distI + distJ <= 2) ? 1 : 0;
        }
    }
}

void mostrarTabuleiro(int tabuleiro[10][10]) {
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[10][10];
    int habilidade[5][5];

    inicializarTabuleiro(tabuleiro);
    posicionarNavios(tabuleiro);

    criarCone(habilidade);
    aplicarHabilidade(tabuleiro, habilidade, 2, 2);

    criarCruz(habilidade);
    aplicarHabilidade(tabuleiro, habilidade, 5, 5);

    criarOctaedro(habilidade);
    aplicarHabilidade(tabuleiro, habilidade, 7, 7);

    mostrarTabuleiro(tabuleiro);

    return 0;
}
