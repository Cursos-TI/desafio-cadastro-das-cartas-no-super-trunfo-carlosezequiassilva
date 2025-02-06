#include <stdio.h>

int main() {
    //VARIAVEIS

    int numeros_pontos_turisticos, populacao_cidade;
    char nome_cidade[50], codigo_cidade[30];  // O CÓDIGO DA CIDADE TERÁ LETRAS TAMBÉM.
    double area_cidade, pib;


    //FUNÇÕES PARA CADASTRAS AS INFORMAÇÕES DAS CIDADES

    printf("CADASTRO DAS CARTAS\n");

    //CÓDIGO DA CIDADE
    printf("Digite o código da cidade: \n");
    scanf("%s", &codigo_cidade);

    //NOME DA CIDADE
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade);

    //POPULAÇAO DA CIDADE
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao_cidade);

    //NÚMERO DE PONTOS TURÍSTICOS DA CIDADE
    printf("Número de pontos turísticos da cidade: \n");
    scanf("%d", &numeros_pontos_turisticos);

    //PIB DA CIDADE
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    //ÁREA TOTAL DA CIDADE
    printf("Digite a área total da cidade: \n");
    scanf("%f", &area_cidade);
    

    //FUNÇÕES PARA EXIBIR OS DADOS DAS CIDADES CADASTRADAS

    printf("\nDADOS DA CIDADE CADASTRADA\n");

    //NOME DA CIDADE
    printf("CIDADE: %s\n", nome_cidade);

    //CÓDIGO DA CIDADE
    printf("CÓDIGO DA CIDADE: %s\n", codigo_cidade);

    //POPULAÇAO
    printf("POPULAÇAO: %d\n", populacao_cidade);

    //PONTOS TURÍSTICOS
    printf("PONTOS TURÍSTICOS: %d\n", numeros_pontos_turisticos);

    //PIB
    printf("PIB: %.2f\n", pib);

    //ÁREA 
    printf("ÁREA: %.2f ", area_cidade);

    return 0;
}
