#include <stdio.h>
#include <string.h>

int main() {
    //VARIAVEIS

    char estado;
    char nome_cidade[50], codigo_cidade[20];  // O CÓDIGO DA CIDADE TERÁ LETRAS TAMBÉM.
    unsigned long int populacao;
    int numeros_pontos_turisticos;
    float area, pib, densidade_populacional, pib_per_capita, super_poder;

    //FUNÇÕES PARA CADASTRAS AS INFORMAÇÕES DAS CIDADES

    printf("CADASTRO DAS CARTAS\n");

    //CÓDIGO DA CIDADE
    printf("Digite o estado da cidade: \n");
    scanf("%c", &estado);

    //CÓDIGO DA CIDADE
    printf("Digite o código da cidade: \n");
    scanf("%s", &codigo_cidade);

    // Limpa o buffer para evitar problemas com fgets()
    getchar();

    //NOME DA CIDADE
    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade, sizeof(nome_cidade), stdin);
    nome_cidade[strcspn(nome_cidade, "\n")] = '\0';
//     scanf("%s", &nome_cidade);

    //POPULAÇAO DA CIDADE
    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao);

    //NÚMERO DE PONTOS TURÍSTICOS DA CIDADE
    printf("Número de pontos turísticos da cidade: \n");
    scanf("%d", &numeros_pontos_turisticos);

    //PIB DA CIDADE
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    //ÁREA TOTAL DA CIDADE
    printf("Digite a área total da cidade: \n");
    scanf("%f", &area);
    

    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    super_poder = (float)(area + pib + densidade_populacional + populacao + numeros_pontos_turisticos + pib_per_capita);

    //FUNÇÕES PARA EXIBIR OS DADOS DAS CIDADES CADASTRADAS

    printf("\n=============================================================================================================\n");
    printf("Estado da cidade: %c\n", estado);
    printf("Código da cidade: %s\n", codigo_cidade);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População da cidade: %lu\n", populacao);
    printf("Pontos turísticos da cidade: %d\n", numeros_pontos_turisticos);
    printf("PIB da cidade: %.2f\n", pib);
    printf("Área totam em km² da cidade: %.2f\n", area);
    printf("Densidade populacional da cidade: %.2f\n", densidade_populacional);
    printf("PIB per capita da cidade: %.2f\n", pib_per_capita);
    printf("Super poder da cidade: %.2f\n", super_poder);
    printf("=============================================================================================================\n");

    return 0;
}
