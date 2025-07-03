#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 2 - Novato


int main() {
    // Declaração de Variaveis
    char codigo_cidade1[4], codigo_cidade2[4];
    char nome_cidade1[20], nome_cidade2[20];
    unsigned long int populacao_cidade1, populacao_cidade2;
    float area_cidade1, area_cidade2;
    float pib_cidade1, pib_cidade2;
    float densidade_populacionalc1, densidade_populacionalc2;
    float pib_percapitac1, pib_percapitac2;
    int num_pontos_turisticosc1,num_pontos_turisticosc2;
    
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

    float superpoder_c1 = (1/densidade_populacionalc1) + populacao_cidade1 + area_cidade1 + pib_cidade1 + num_pontos_turisticosc1 + pib_percapitac1;

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

    float superpoder_c2 = (1/densidade_populacionalc2) + populacao_cidade2 + area_cidade2 + pib_cidade2 + num_pontos_turisticosc2 + pib_percapitac2;


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

    //Exibição do comparativo de 1 atributo
    printf("\n\nCOMPARATIVO");
    printf("\nCarta 1 - %s: %lu", nome_cidade1, populacao_cidade1);
    printf("\nCarta 2 - %s: %lu", nome_cidade2, populacao_cidade2);
    if (populacao_cidade1 > populacao_cidade2){
        printf("\n\nResultado: Carta 1 (%s) venceu", nome_cidade1);
    } else {
        printf("\n\nResultado: Carta 2 (%s) venceu", nome_cidade2);
    }
    return 0;
}
