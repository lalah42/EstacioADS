#include <stdio.h>

//Variavel com a quantidade de casas a serem andadas
int torre = 5;
int bispo = 5;
int rainha = 8;

int main(){
    //Movimento Torre - FOR
    printf("Movimento Torre");
    for (int i = 0; i < torre; i++){
        printf("\nDireita");
    }
    printf("\nTorre andou 5 casas para direita");

    //Movimento bispo - WHILE
    printf("\n\nMovimento Bispo");
    while (bispo > 0)
    {
        printf("\nCima, Direita");
        bispo--;
    }
    printf("\nBispo andou 5 casas em diagonal");

    //Movimento Rainha - DO/WHILE
    printf("\n\nMovimento Rainha");
    do
    {
        printf("\nEsquerda");
        rainha--;
    } while (rainha > 0);
    printf("\nRainha andou 8 casas para esquerda");

    //Movimento Cavalo - FOR Aninhado
    printf("\n\nMovimento Cavalo\n");
    for (int c = 0; c < 1; c++){ //Movimento de Coluna (Esqueda ou Direita)
        for (int l = 0 ; l < 2; l++){ //Movimento de Linha (Cima ou Baixo)
            printf("Baixo\t");
        }
        printf("Esquerda\n");
    }
    printf("Cavalo moveu em L");

    return 0;
}
