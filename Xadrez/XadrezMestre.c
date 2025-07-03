#include <stdio.h>

//Função para executar movimento da torre
void mov_torre(int casas){
    if (casas == 0){
        printf("\nTorre moveu 5 casas\n\n");
        return;
    } 
    printf("Direita\t");
    mov_torre(casas - 1);
}

void mov_bispo(int linhas, int colunas,int casas){
    if (casas == 0){
        printf("\nBispo moveu 5 casas em diagonal\n\n");
        return;
    }
    for (int l = 0; l < linhas; l++){//Movimento entre linhas
        for(int c = 0; c < colunas; c++){ //Movimento entre colunas
            if(l == c){ //Quando os valores sao iguais ela fez um movimento em diagonal
                printf("Cima,Direita\t");
            }
        }
    }
    mov_bispo(0,0,casas - 1);
}

//Função Movimento da Rainha
void mov_rainha(int casas){
    if (casas == 0){
        printf("\nRainha movimentou 8 casas para esquerda\n\n");
        return;
    }
    printf("Esquerda\t");
    mov_rainha(casas - 1);
}

//Funcao do Movimento do Cavalo
void mov_cavalo(int movimentos) {//Movimento recebe 3 => Cima (1), Cima (2), Direita (3)
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < movimentos; j++) {
            if (i == j) continue;
            if (i == 2 && j == 1) {
                printf("Cima\tCima\tDireita");
                break;
            }
        }
    }
    printf("\nCavalo moveu 2 casas pra cima e 1 pra direita");
}


int main(){
    mov_torre(5); //Chama Movimento Torre
    mov_bispo(5,5,1); // (Linhas, Colunas, Repetições)
    mov_rainha(8);
    mov_cavalo(3);
    return 0;
}
