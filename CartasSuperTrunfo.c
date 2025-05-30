#include <stdio.h>

int main(){
    char estado1;
    char codigo1[4];
    char nome_cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    //divisão entre a primeira e a segunda carta.

    char estado2;
    char codigo2[4];
    char nome_cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //leitura da primeira carta:

    printf("Cadastro da primeira carta: \n");
    printf("Estado 1 A-H: ", estado1);
    scanf(" %c", &estado1);
    printf("Codigo da carta (ex: A01, B03): ");
    scanf(" %s", codigo1);
    printf("Nome da cidade:", nome_cidade1);
    scanf(" %s", nome_cidade1);
    printf("População total: ");
    scanf(" %d", &populacao1);
    printf("Área em Km²: ");
    scanf(" %f", &area1);
    printf("PIB (Produto Interno Bruto) da cidade: ");
    scanf(" %f", &pib1);
    printf("Numeros de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos1);
    printf("\n");

    //leitura da segunda carta:

    printf("Cadastro da segunda carta: \n");
    printf("Estado 2 A-H: ", estado2);
    scanf(" %c", &estado2);
    printf("Codigo da carta (ex: A01, B03): ");
    scanf(" %s", codigo2);
    printf("Nome da cidade:", nome_cidade2);
    scanf(" %s", nome_cidade2);
    printf("População total: ");
    scanf(" %d", &populacao2);
    printf("Área em Km²: ");
    scanf(" %f", &area2);
    printf("PIB (Produto Interno Bruto) da cidade: ");
    scanf(" %f", &pib2);
    printf("Numeros de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos2);
    printf("\n");

    //Resultado primeira carta:

    printf("Carta 1: \n");
    printf("Estado 1: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População total: %d\n", populacao1);
    printf("Área em Km²: %.2f\n", area1);
    printf("PIB (Produto Interno Bruto) da cidade: %.2f reais \n", pib1);
    printf("Numeros de pontos turisticos: %d\n", pontos_turisticos1);

    //Resultado da segunda carta:

    printf("Carta 2: \n");
    printf("Estado 2: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População total: %d\n", populacao2);
    printf("Área em Km²: %.2f\n", area2);
    printf("PIB (Produto Interno Bruto) da cidade: %.2f reais \n", pib2);
    printf("Numeros de pontos turisticos: %d\n", pontos_turisticos2);

    return 0;

}
