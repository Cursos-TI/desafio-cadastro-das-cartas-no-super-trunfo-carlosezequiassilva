#include <stdio.h>
#include <string.h>

int main() {
    //VARIAVEIS

    char estado1[10], estado2[10], nome_cidade1[50],nome_cidade2[50], codigo_cidade1[20], codigo_cidade2[20];
    unsigned long int populacao1, populacao2;
    int numeros_pontos_turisticos1, numeros_pontos_turisticos2;
    float area1, area2, pib1, pib2, densidade_populacional1, densidade_populacional2, pib_per_capita1, pib_per_capita2;

    //FUNÇÕES PARA CADASTRAS AS INFORMAÇÕES DAS CIDADES

    printf("CADASTRO DAS CARTAS\n");

    //===================PRIMEIRA CARTA===================

    printf("\n***** ENTRE COM OS DADOS DA PRIMEIRA CIDADE ***** \n");

    //ESTADO DA CIDADE
    printf("Digite o estado da primeria cidade: \n");
    scanf("%s", &estado1);

    //CÓDIGO DA CIDADE
    printf("Digite o código da primeira cidade: \n");
    scanf("%s", &codigo_cidade1);

    // Limpa o buffer para evitar problemas com fgets()
    getchar();

    //NOME DA CIDADE
    printf("Digite o nome da primeira cidade: \n");
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);
    nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0';
    //scanf("%s", &nome_cidade);

    //POPULAÇAO DA CIDADE
    printf("Digite a população da primeira cidade: \n");
    scanf("%lu", &populacao1);

    //NÚMERO DE PONTOS TURÍSTICOS DA CIDADE
    printf("Número de pontos turísticos da primeira cidade: \n");
    scanf("%d", &numeros_pontos_turisticos1);

    //PIB DA CIDADE
    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f", &pib1);

    //ÁREA TOTAL DA CIDADE
    printf("Digite a área total da primeira cidade: \n");
    scanf("%f", &area1);

    //===================SEGUNDA CARTA===================

    printf("\n***** ENTRE COM OS DADOS DA SEGUNDA CIDADE ***** \n");

    //ESTADO DA CIDADE
    printf("Digite o estado da segunda cidade: \n");
    scanf(" %s", &estado2);

    //CÓDIGO DA CIDADE
    printf("Digite o código da segunda cidade: \n");
    scanf("%s", &codigo_cidade2);

    // Limpa o buffer para evitar problemas com fgets()
    getchar();

    //NOME DA CIDADE
    printf("Digite o nome da segunda cidade: \n");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';
    //scanf("%s", &nome_cidade);

    //POPULAÇAO DA CIDADE
    printf("Digite a população da segunda cidade: \n");
    scanf("%lu", &populacao2);

    //NÚMERO DE PONTOS TURÍSTICOS DA CIDADE
    printf("Número de pontos turísticos da segunda cidade: \n");
    scanf("%d", &numeros_pontos_turisticos2);

    //PIB DA CIDADE
    printf("Digite o PIB da segunda cidade: \n");
    scanf("%f", &pib2);

    //ÁREA TOTAL DA CIDADE
    printf("Digite a área total da segunda cidade: \n");
    scanf("%f", &area2);
    

    //CALCULOS DAS DENSIDADES E PIB PER CAPITA

    //=====CIDADE 1=====
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    //=====CIDADE 2=====

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // ========== COMPARAÇÃO DA CARTAS DA PRIMEIRA CIDADE ==========

    int comparar_populacao1 = (int) populacao1 > populacao2;
    int comparar_pib1 = (int)pib1 > pib2;
    int comparar_area1 = (int)area1 > area2;
    int comparar_densidade1 = (int)densidade_populacional1 < densidade_populacional2;
    int comparar_pip_per_capita1 = (int)pib_per_capita1 > pib_per_capita2;

    // ========== COMPARAÇÃO DA CARTAS DA SEGUNDA CIDADE ==========

    int comparar_populacao2 = (int)populacao2 > populacao1;
    int comparar_pib2 = (int)pib2 > pib1;
    int comparar_area2 = (int)area2 > area1;
    int comparar_densidade2 = (int)densidade_populacional2 < densidade_populacional1;
    int comparar_pip_per_capita2 = (int)pib_per_capita2 > pib_per_capita1;


    //SOMA DOS PONTOS

    int soma1 = comparar_area1 + comparar_pib1 + comparar_densidade1 + comparar_pip_per_capita1 + comparar_populacao1;
    int soma2 = comparar_area2 + comparar_pib2 + comparar_densidade2 + comparar_pip_per_capita2 + comparar_populacao2;

    //FUNÇÕES PARA EXIBIR OS DADOS DAS CIDADES CADASTRADAS

    printf("\n***** DADOS DAS CARTAS CADASTRADAS ***** \n");

    printf("\n=============================================================================================================\n");
    printf("\nEstado 1: %s e Estado 2: %s\n", estado1, estado2);
    printf("\nCódigo da cidade 1: %s e Código da cidade 2: %s\n", codigo_cidade1, codigo_cidade2);
    printf("\nNome da cidade 1: %s e Nome da cidade 2: %s\n", nome_cidade1, nome_cidade2);
    printf("\nPopulação da cidade 1: %lu e População da cidade 2: %lu\n", populacao1, populacao2);
    printf("\nPontos turísticos da cidade 1: %d e Pontos turísticos da cidade 2: %d\n", numeros_pontos_turisticos1, numeros_pontos_turisticos2);
    printf("\nPIB da cidade 1: %.2f e PIB da cidade 2: %.2f\n", pib1, pib2);
    printf("\nÁrea totam em km² da cidade 1: %.2f e Área totam em km² da cidade  2: %.2f\n", area1, area2);
    printf("\nDensidade populacional da cidade 1: %.2f e Densidade populacional da cidade 2: %.2f\n", densidade_populacional1, densidade_populacional2);
    printf("\nPIB per capita da cidade 1: %.2f e PIB per capita da cidade 2: %.2f\n", pib_per_capita1, pib_per_capita2);
    printf("\n=============================================================================================================\n");


    //FUNÇÕES PARA EXIBIR A COMPARAÇÃO DAS CARTAS

    //COMPARAÇÃO DA PRIMEIRA CARTA

    printf("\n***** PONTOS DA PRIMEIRA CIDADE ***** \n");

    printf("\n=============================================================================================================\n");
    printf("População da cidade: %d\n", comparar_populacao1);
    printf("PIB da cidade: %d\n", comparar_pib1);
    printf("Área totam em km² da cidade: %d\n", comparar_area1);
    printf("Densidade populacional da cidade: %d\n", comparar_densidade1);
    printf("PIB per capita da cidade: %d\n", comparar_pip_per_capita1);
    printf("\n=============================================================================================================\n");

    //COMPARAÇÃO DA SEGUNDA CARTA

    printf("\n***** PONTOS DA SEGUNDA CIDADE ***** \n");

    printf("\n=============================================================================================================\n");
    printf("População da cidade: %d\n", comparar_populacao2);
    printf("PIB da cidade: %d\n", comparar_pib2);
    printf("Área totam em km² da cidade: %d\n", comparar_area2);
    printf("Densidade populacional da cidade: %d\n", comparar_densidade2);
    printf("PIB per capita da cidade: %d\n", comparar_pip_per_capita2);
    printf("\n=============================================================================================================\n");

    printf("\n***** Pontos das cartas *****\n");
    printf("Carta 1: %d\n", soma1);
    printf("Carta 2: %d\n", soma2);

    return 0;
}
