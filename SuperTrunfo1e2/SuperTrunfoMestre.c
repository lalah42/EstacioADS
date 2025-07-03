#include <stdio.h>

void mostrarcartas() {
    char codigo1[] = "A01", codigo2[] = "B01";
    char nome1[] = "Salvador", nome2[] = "Recife";
    unsigned long int pop1 = 15000, pop2 = 14000;
    float area1 = 45, area2 = 50;
    float pib1 = 280, pib2 = 265;
    int num_pt1 = 5, num_pt2 = 6;

    float densidade1 = pop1 / area1;
    float pibpc1 = pib1 / pop1;
    float superpoder1 = (1 / densidade1) + pop1 + area1 + pib1 + num_pt1 + pibpc1;

    float densidade2 = pop2 / area2;
    float pibpc2 = pib2 / pop2;
    float superpoder2 = (1 / densidade2) + pop2 + area2 + pib2 + num_pt2 + pibpc2;

    printf("\n----- CARTA 1 ------");
    printf("\nCodigo: %s", codigo1);
    printf("\nNome da Cidade: %s", nome1);
    printf("\nPopulacao: %lu", pop1);
    printf("\nArea: %.2f", area1);
    printf("\nPIB: %.2f", pib1);
    printf("\nPontos Turisticos: %d", num_pt1);
    printf("\nDensidade Populacional: %.2f", densidade1);
    printf("\nPIB per Capita: %.6f", pibpc1);
    printf("\nSuperpoder: %.2f", superpoder1);

    printf("\n\n----- CARTA 2 ------");
    printf("\nCodigo: %s", codigo2);
    printf("\nNome da Cidade: %s", nome2);
    printf("\nPopulacao: %lu", pop2);
    printf("\nArea: %.2f", area2);
    printf("\nPIB: %.2f", pib2);
    printf("\nPontos Turisticos: %d", num_pt2);
    printf("\nDensidade Populacional: %.2f", densidade2);
    printf("\nPIB per Capita: %.6f", pibpc2);
    printf("\nSuperpoder: %.2f", superpoder2);
    printf("\n");
}

void regras() {
    printf("\n--- REGRAS ---");
    printf("\nApós o sorteio do jogador que vai escolher o atributo, vence a carta com o maior valor no atributo escolhido.");
    printf("\nPorém, para a Densidade Populacional, a regra inverte: vence a carta com o menor valor.\n\n");
}

void escolhaatributo() {
    char *escolhas[] = {
        "POPULACAO",
        "AREA",
        "PIB",
        "NUMERO DE PONTOS TURISTICOS",
        "DENSIDADE POPULACIONAL",
        "PIB PER CAPITA",
        "SUPERPODER"
    };
    int total = 7, opcao1 = -1, opcao2 = -1;

    char nome1[] = "Salvador", nome2[] = "Recife";
    unsigned long int pop1 = 15000, pop2 = 14000;
    float area1 = 45, area2 = 50;
    float pib1 = 280, pib2 = 265;
    int num_pt1 = 5, num_pt2 = 6;
    float densidade1 = pop1 / area1;
    float densidade2 = pop2 / area2;
    float pibpc1 = pib1 / pop1;
    float pibpc2 = pib2 / pop2;
    float superpoder1 = (1 / densidade1) + pop1 + area1 + pib1 + num_pt1 + pibpc1;
    float superpoder2 = (1 / densidade2) + pop2 + area2 + pib2 + num_pt2 + pibpc2;

    // PRIMEIRA ESCOLHA
    while (1) {
        printf("\nEscolha o primeiro atributo para comparar:\n");
        for (int i = 0; i < total; i++) {
            printf("%d - %s\n", i + 1, escolhas[i]);
        }
        printf("Digite o número da primeira opção: ");
        scanf("%d", &opcao1);

        if (opcao1 >= 1 && opcao1 <= total) break;
        else printf("Opção inválida! Tente novamente.\n");
    }

    // SEGUNDA ESCOLHA
    while (1) {
        printf("\nEscolha o segundo atributo para comparar:\n");
        for (int i = 0; i < total; i++) {
            if (i != (opcao1 - 1)) {
                printf("%d - %s\n", i + 1, escolhas[i]);
            }
        }
        printf("Digite o número da segunda opção: ");
        scanf("%d", &opcao2);

        if (opcao2 >= 1 && opcao2 <= total && opcao2 != opcao1) break;
        else printf("Opção inválida ou repetida! Tente novamente.\n");
    }

    // Obter valores selecionados
    float valor1_c1, valor2_c1, valor1_c2, valor2_c2, soma1, soma2;

    switch (opcao1) {
        case 1: valor1_c1 = pop1; valor1_c2 = pop2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = num_pt1; valor1_c2 = num_pt2; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
        case 6: valor1_c1 = pibpc1; valor1_c2 = pibpc2; break;
        case 7: valor1_c1 = superpoder1; valor1_c2 = superpoder2; break;
    }

    switch (opcao2) {
        case 1: valor2_c1 = pop1; valor2_c2 = pop2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = num_pt1; valor2_c2 = num_pt2; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
        case 6: valor2_c1 = pibpc1; valor2_c2 = pibpc2; break;
        case 7: valor2_c1 = superpoder1; valor2_c2 = superpoder2; break;
    }

    // Cálculo da soma (invertendo valor da densidade para que menor = melhor)
    soma1 = (opcao1 == 5 ? -valor1_c1 : valor1_c1) + (opcao2 == 5 ? -valor2_c1 : valor2_c1);
    soma2 = (opcao1 == 5 ? -valor1_c2 : valor1_c2) + (opcao2 == 5 ? -valor2_c2 : valor2_c2);

    // Saída formatada
    printf("\n\nValores dos atributos:\n");

    printf("%s\n", nome1);
    printf("%s = %.2f\n", escolhas[opcao1 - 1], valor1_c1);
    printf("%s = %.2f\n", escolhas[opcao2 - 1], valor2_c1);

    printf("\n%s\n", nome2);
    printf("%s = %.2f\n", escolhas[opcao1 - 1], valor1_c2);
    printf("%s = %.2f\n", escolhas[opcao2 - 1], valor2_c2);

    printf("\nResultado:\n");

    if (soma1 > soma2) {
        printf("%s venceu!\n", nome1);
    } else if (soma2 > soma1) {
        printf("%s venceu!\n", nome2);
    } else {
        printf("Empate!\n");
    }
}

void menu() {
    int escolha;
    printf("--------- SUPERTRUNFO PAÍSES -----------");
    printf("\n1. INICIAR JOGO");
    printf("\n2. REGRAS");
    printf("\n3. SAIR");
    printf("\n\nEscolha uma opcao: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            mostrarcartas();
            escolhaatributo();
            break;
        case 2:
            regras();
            menu();
            break;
        case 3:
            printf("\nOBRIGADO POR JOGAR!!!!\n");
            break;
        default:
            printf("\nOPCAO INVALIDA, ESCOLHA ENTRE 1 E 3\n");
            menu();
            break;
    }
}

int main() {
    menu();
    return 0;
}
