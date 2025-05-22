#include <stdio.h>

int main() {
printf("Desafio Super trunfo\n");
    printf("novo commit\n");

    char codigo_da_cidade;
    char nome_da_cidade[20];
    int  populacao;
    float area;
    float PIB;
    int quantidade_pontos_turisticos;

    printf("Digite o codigo da cidade 1: \n");
    scanf(" %c", &codigo_da_cidade);

    printf("Digite o nome da cidade 1: \n");
    getchar();
    scanf(" %[^\n]", nome_da_cidade);

    printf("populacao da cidade 1: \n");
    scanf(" %d", &populacao);

    printf("Digite a area da cidade 1: \n");
    scanf(" %f", &area);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB);

    printf("Digite a quantidade de pontos turisticos da cidade 1: \n");
    scanf(" %d", &quantidade_pontos_turisticos);

    printf("\n--- Dados da Cidade Cadastrada 1---\n");
    printf("Codigo da Cidade: %c\n" , codigo_da_cidade);
    printf("Nome da Cidade: %s\n" , nome_da_cidade);
    printf("Populacao: %d\n" , populacao);
    printf("Area da Cidade: %.2f km\n" , area);
    printf("PIB da Cidade: %.2f milhoes\n" , PIB);
    printf("Quandidade de Pontos Turisticos: %d\n" , quantidade_pontos_turisticos);


    printf("Digite o codigo da cidade 2: \n");
    scanf(" %c", &codigo_da_cidade);

    printf("Digite o nome da cidade 2: \n");
    getchar();
    scanf(" %[^\n]", nome_da_cidade);

    printf("populacao da cidade 2: \n");
    scanf(" %d", &populacao);

    printf("Digite a area da cidade 2: \n");
    scanf(" %f", &area);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB);

    printf("Digite a quantidade de pontos turisticos da cidade 2: \n");
    scanf(" %d", &quantidade_pontos_turisticos);

    printf("\n--- Dados da Cidade Cadastrada 2---\n");
    printf("Codigo da Cidade: %c\n" , codigo_da_cidade);
    printf("Nome da Cidade: %s\n" , nome_da_cidade);
    printf("Populacao: %d\n" , populacao);
    printf("Area da Cidade: %.2f km\n" , area);
    printf("PIB da Cidade: %.2f milhoes\n" , PIB);
    printf("Quandidade de Pontos Turisticos: %d\n" , quantidade_pontos_turisticos);

    return 0;
}
