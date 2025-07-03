#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Desafio Super Trunfo - Países
// Tema 2 - Novato

    // Declaração de Variaveis
    char codigo_cidade1[4], codigo_cidade2[4];
    char nome_cidade1[20], nome_cidade2[20];
    unsigned long int populacao_cidade1, populacao_cidade2;
    float area_cidade1, area_cidade2;
    float pib_cidade1, pib_cidade2;
    float densidade_populacionalc1, densidade_populacionalc2;
    float pib_percapitac1, pib_percapitac2;
    int num_pontos_turisticosc1,num_pontos_turisticosc2;
    float superpoder_c1, superpoder_c2;
    int escolha;
    
//Cadastro da Cartas para jogar
void cadastrocartas() {
    // CADASTRO DE CARTA 1
    printf("CADASTRO CARTA 1\n");
    
    printf("Código da Cidade 1: ");
    scanf("%s", codigo_cidade1);

    printf("Nome de Cidade 1: ");	
    scanf("%s", nome_cidade1);

    printf("População Cidade 1: ");
    scanf("%lu", &populacao_cidade1);

    printf("Área da Cidade 1: ");
    scanf("%f", &area_cidade1);

    printf("PIB Cidade 1: ");
    scanf("%f", &pib_cidade1);

    printf("Numero de Pontos Turisticos Cidade 1: ");
    scanf("%d", &num_pontos_turisticosc1);

    //CALCULOS DE ATRIBUTOS
    densidade_populacionalc1 = populacao_cidade1 / area_cidade1;
    pib_percapitac1 = pib_cidade1 / populacao_cidade1;

    superpoder_c1 = (1/densidade_populacionalc1) + populacao_cidade1 + area_cidade1 + pib_cidade1 + num_pontos_turisticosc1 + pib_percapitac1;

    //CADASTRO DE CARTA 2
    printf("\n\nCADASTRO CARTA 2\n");
    
    printf("Código da Cidade 2: ");
    scanf("%s", codigo_cidade2);

    printf("Nome de Cidade 2: ");	
    scanf("%s", nome_cidade2);

    printf("População Cidade 2: ");
    scanf("%lu", &populacao_cidade2);

    printf("Área da Cidade 2: ");
    scanf("%f", &area_cidade2);

    printf("PIB Cidade 2: ");
    scanf("%f", &pib_cidade2);

    printf("Numero de Pontos Turisticos Cidade 2: ");
    scanf("%d", &num_pontos_turisticosc2);

    //CALCULO DE ATRIBUTOS
    densidade_populacionalc2 = populacao_cidade2 / area_cidade2;
    pib_percapitac2 = pib_cidade2 / populacao_cidade2;

    superpoder_c2 = (1/densidade_populacionalc2) + populacao_cidade2 + area_cidade2 + pib_cidade2 + num_pontos_turisticosc2 + pib_percapitac2;
}

//Mostra quais os valores das cartas cadastradas
void cartascadastradas(){
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // Exibição dos Dados das Cartas:
    printf("\n\nCARTA CADASTRADA 1");
    printf("\nCódigo da Cidade 1: %s", codigo_cidade1);
    printf("\nNome da Cidade: %s", nome_cidade1);
    printf("\nPopulacao: %lu", populacao_cidade1);
    printf("\nArea: %.2f", area_cidade1);
    printf("\nPIB: %.2f", pib_cidade1);
    printf("\nPontos Turisticos: %d", num_pontos_turisticosc1);
    printf("\nDensidade Populacional: %.2f", densidade_populacionalc1);
    printf("\nPIB per Capita: %.2f", pib_percapitac1);
    printf("\nSUPERPODER: %.2f", superpoder_c1);

    printf("\n\nCARTA CADASTRADA 2");
    printf("\nCódigo da Cidade 2: %s", codigo_cidade2);
    printf("\nNome da Cidade: %s", nome_cidade2);
    printf("\nPopulacao: %lu", populacao_cidade2);
    printf("\nArea: %.2f", area_cidade2);
    printf("\nPIB: %.2f", pib_cidade2);
    printf("\nPontos Turisticos: %d", num_pontos_turisticosc2);
    printf("\nDensidade Populacional: %.2f", densidade_populacionalc2);
    printf("\nPIB per Capita: %.2f", pib_percapitac2);
    printf("\nSUPERPODER: %.2f", superpoder_c2);
}

//Mostra as opções de atributos disponíveis
void atributos(){
    printf("\n1. População");
    printf("\n2. Area");
    printf("\n3. PIB");
    printf("\n4. Numero de Pontos Turisticos");
    printf("\n5. Densidade Populacional");
    printf("\n6. Pib per Capita");
    printf("\n7. SUPERPODER");
    printf("\n\nESCOLHA O ATRIBUTO 1:  ");
    scanf("%d", &escolha);
} 

//Compara as cartas com o atributo escolhido
void comparativo(){
    switch(escolha){
        case 1:
        printf("\n\nATRIBUTO: População");
        printf("\nCarta 1 - %s: %lu", nome_cidade1, populacao_cidade1);
        printf("\nCarta 2 - %s: %lu", nome_cidade2, populacao_cidade2);
        if (populacao_cidade1 > populacao_cidade2){
            printf("\n\nResultado: Carta 1 (%s) venceu", nome_cidade1);
        } else if (populacao_cidade1 < populacao_cidade2){
            printf("\n\nResultado: Carta 2 (%s) venceu", nome_cidade2);
        } else {
            printf("\n\nEMPATE");
        } break;
        case 2:
        printf("\n\nATRIBUTO: Area");
        printf("\nCarta 1 - %s: %f", nome_cidade1, area_cidade1);
        printf("\nCarta 2 - %s: %f", nome_cidade2, area_cidade2);
        if (area_cidade1 > area_cidade2){
            printf("\n\nResultado: Carta 1 (%s) venceu", nome_cidade1);
        } else if (area_cidade1 < area_cidade2){
            printf("\n\nResultado: Carta 2 (%s) venceu", nome_cidade2);
        } else {
            printf("\n\nEMPATE");
        } break;
        case 3:
        printf("\n\nATRIBUTO: PIB");
        printf("\nCarta 1 - %s: %f", nome_cidade1, pib_cidade1);
        printf("\nCarta 2 - %s: %f", nome_cidade2, pib_cidade2);
        if (pib_cidade1 > pib_cidade2){
            printf("\n\nResultado: Carta 1 (%s) venceu", nome_cidade1);
        } else if (pib_cidade1 < pib_cidade2){
            printf("\n\nResultado: Carta 2 (%s) venceu", nome_cidade2);
        } else {
            printf("\n\nEMPATE");
        } break;
        case 4:
        printf("\n\nATRIBUTO: Numero de Pontos Turisticos");
        printf("\nCarta 1 - %s: %d", nome_cidade1, num_pontos_turisticosc1);
        printf("\nCarta 2 - %s: %d", nome_cidade2, num_pontos_turisticosc2);
        if (num_pontos_turisticosc1 > num_pontos_turisticosc2){
            printf("\n\nResultado: Carta 1 (%s) venceu", nome_cidade1);
        } else if (num_pontos_turisticosc1 < num_pontos_turisticosc2){
            printf("\n\nResultado: Carta 2 (%s) venceu", nome_cidade2);
        } else {
            printf("\n\nEMPATE");
        } break;
        case 5:
        printf("\n\nATRIBUTO: Densidade Populacional");
        printf("\nCarta 1 - %s: %f", nome_cidade1, densidade_populacionalc1);
        printf("\nCarta 2 - %s: %f", nome_cidade2, densidade_populacionalc2);
        if (densidade_populacionalc1 < densidade_populacionalc2){
            printf("\n\nResultado: Carta 1 (%s) venceu", nome_cidade1);
        } else if (densidade_populacionalc1 > densidade_populacionalc2){
            printf("\n\nResultado: Carta 2 (%s) venceu", nome_cidade2);
        } else {
            printf("\n\nEMPATE");
        } break;
        case 6:
        printf("\n\nATRIBUTO: PIB per CAPITA");
        printf("\nCarta 1 - %s: %f", nome_cidade1, pib_percapitac1);
        printf("\nCarta 2 - %s: %f", nome_cidade2, pib_percapitac2);
        if (pib_percapitac1 > pib_percapitac2){
            printf("\n\nResultado: Carta 1 (%s) venceu", nome_cidade1);
        } else if (pib_percapitac1 < pib_percapitac2){
            printf("\n\nResultado: Carta 2 (%s) venceu", nome_cidade2);
        } else {
            printf("\n\nEMPATE");
        } break;
        case 7:
        printf("\n\nATRIBUTO: SUPERPODER");
        printf("\nCarta 1 - %s: %f", nome_cidade1, superpoder_c1);
        printf("\nCarta 2 - %s: %f", nome_cidade2, superpoder_c2);
        if (superpoder_c1 > superpoder_c2){
            printf("\n\nResultado: Carta 1 (%s) venceu", nome_cidade1);
        } else if (superpoder_c1 < superpoder_c2){
            printf("\n\nResultado: Carta 2 (%s) venceu", nome_cidade2);
        } else {
            printf("\n\nEMPATE");
        } break;
        default:
            printf("\n\nAtributo Inválido! Escolha entre 1 e 7");
            atributos();
            break;
    }
}

//Define qual jogador vai escolher o atributo
void definicaojogador(){
    int player = rand() % 2;
    if (player == 1){
        printf("\n\nPlayer 1 Escolha um dos atributos");
    } else {
        printf("\n\nPlayer 2 Escolha um dos atributos");
    }
    atributos();
    comparativo();
}

//Chama o menu inical com as opções
void menuinicial(){
    printf("MENU INICIAL!!");
    printf("\n\n1. Iniciar Jogo");
    printf("\n2. Regras");
    printf("\n3. Sair");
    printf("\n\nEscolha uma opção:  ");
    scanf("%d", &escolha);
}    

//Informa quais são as regras do jogo
void regras(){
    printf("\n---REGRAS---");
    printf("\nApós o sorteio do jogador que vai escolher o atributo, vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.");
}

//Função principal que inicia a biblioteca random e define as escolhas dos players
int main(){
    srand(time(NULL));
    menuinicial();
    switch (escolha)
    {
        case 1:
            cadastrocartas();
            cartascadastradas();
            definicaojogador();
            break;
        case 2:
            regras();
            menuinicial();
            break;
        default:
            printf("Opção Invalida! Escolha um número entre 1 e 3");
            menuinicial();
            break;
    }
}
