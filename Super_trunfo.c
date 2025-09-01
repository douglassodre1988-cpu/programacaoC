#include <stdio.h> //Biblioteca para as Funções de Entrada e Saida de Dados
int main()
{

    // Atributos da carta 1
    char estado1;
    char codigodacarta1[5];
    char nomedacidade1[15];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int numerodepontoturistico1;
    float Densidadepopulacional1;
    float pibpercapita1;
    float superpoder1; // Nova variavel para super Poder - nivel Mestre

    // Atributos da carta 2
    char estado2;
    char codigodacarta2[5];
    char nomedacidade2[15];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numerodepontoturistico2;
    float Densidadepopulacional2;
    float pibpercapita2;
    float superpoder2; // Nova variavel para super Poder - nivel Mestre

    // COLETA DE DADOS DA CARTA 1
    printf("Atributos da carta 1 \n");
    printf("Digite o Estado (Uma Letra de A a H): \n");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): \n");
    scanf(" %s", codigodacarta1);

    printf("Digite o Nome da Cidade \n");
    scanf(" %s", nomedacidade1);

    printf("Qual Numero de Habitantes da Cidade? \n");
    scanf(" %lu", &populacao1);

    printf("Qual a Area em Km²? \n");
    scanf(" %f", &area1);

    printf("Qual o PIB da Cidade? \n");
    scanf(" %f", &pib1);

    printf("Qual a Quantidade de Pontos Turisticos na Cidade? \n");
    scanf(" %d", &numerodepontoturistico1);

    printf("\n");

    // COLETA DE DADOS DA CARTA 2
    printf("Atributos da carta 2 \n");
    printf("Digite o Estado (Uma Letra de A a H): \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: A01): \n");
    scanf(" %s", codigodacarta2);

    printf("Digite o Nome da Cidade \n");
    scanf(" %s", nomedacidade2);

    printf("Qual Numero de Habitantes da Cidade? \n");
    scanf(" %lu", &populacao2);

    printf("Qual a Area em Km²? \n");
    scanf(" %f", &area2);

    printf("Qual o PIB da Cidade? \n");
    scanf(" %f", &pib2);

    printf("Qual a Quantidade de Pontos Turisticos na Cidade? \n");
    scanf(" %d", &numerodepontoturistico2);

    // Calculos dos atributos Densidade populacional
    Densidadepopulacional1 = (float)populacao1 / area1;
    Densidadepopulacional2 = (float)populacao2 / area2;

    // Calculos dos atributos Pib per Capita
    pibpercapita1 = (pib1 * 1000000000) / (float)populacao1;
    pibpercapita2 = (pib2 * 1000000000) / (float)populacao2;

    // Calculo do Super Poder - Nivel Mestre

    superpoder1 = (float)populacao1 + area1 + pib1 + (float)numerodepontoturistico1 + pibpercapita1 + (1.0 / Densidadepopulacional1);
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)numerodepontoturistico2 + pibpercapita2 + (1.0 / Densidadepopulacional2);

    // EXIBIÇÃO DE DADOS CADASTRADOS DA CARTA 1

    printf("\n ***CARTA 1*** \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigodacarta1);
    printf("Nome Da Cidade: %s\n", nomedacidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numeros de Pontos Turisticos: %d\n", numerodepontoturistico1);
    printf("Densidade Populacional: %.2f\n", Densidadepopulacional1);
    printf("Pib Per Capita: R$ %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n");

    // EXIBIÇÃO DE DADOS CADASTRADOS DA CARTA 2

    printf("\n ***CARTA 2*** \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigodacarta2);
    printf("Nome Da Cidade: %s\n", nomedacidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numeros de Pontos Turisticos: %d\n", numerodepontoturistico2);
    printf("Densidade Populacional: %.2f\n", Densidadepopulacional2);
    printf("Pib Per Capita:R$ %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparação e Resultado da Batalho

    // printf("Resultado da Batalha (1 = carta 1 é a vencedora, 0 = Carta 2 é a Vencedora)\n");

    // comparação normal (maior carta vence)

    // printf("Populacao: %d\n", populacao1 > populacao2);  Código Retirado Para implementação da Nova Logica.

    printf("\n");

    printf("\n");

    printf("***Resultado da Batalha***\n");
    printf("Agora veremos quem é o verdadeiro vencedor \n");

    if (populacao1 > populacao2)
    {
        printf("A População da Carta 1, cujo número de habitantes é %lu é a vencedora!.\n", populacao1);
    }
    else if (populacao1 < populacao2)
    {
        printf("A População da carta 2, cujo número de habitantes é %lu é a vencedora!.\n", populacao2);
    }
    else
    {
        printf("Empate entre as duas Cartas no quesito População.\n");
    }

    // printf("Area: %d\n", area1 > area2); Código Retirado Para implementação da Nova Logica.

    if (area1 > area2)
    {
        printf("A Area da Carta 1, com dimensões de %.2f KM² é a vencedora!.\n", area1);
    }
    else if (area1 < area2)
    {
        printf("A Area da carta 2,  com dimensões de %.2f KM² é a vencedora!.\n", area2);
    }
    else
    {
        printf("Empate entre as duas Cartas no quesito Area.\n");
    }

    // printf("PIB: %d\n",pib1 > pib2); Código Retirado Para implementação da Nova Logica.

    if (pib1 > pib2)
    {
        printf("O PIB da Carta 1, cujo valor é R$ %.2f é o vencedor!.\n", pib1);
    }
    else if (area1 < area2)
    {
        printf("O PIB da carta 2, cujo valor é R$ %.2f é o vencedor!.\n", pib2);
    }
    else
    {
        printf("Empate entre as duas Cartas no quesito PIB.\n");
    }

    // printf("Pontos Turisticos: %d\n", numerodepontoturistico1 > numerodepontoturistico2); Código Retirado Para implementação da Nova Logica.

    if (numerodepontoturistico1 > numerodepontoturistico2)
    {
        printf("A Quantidade de Ponto turisticos da Carta 1 é %d. Logo ela é a vencedora!.\n", numerodepontoturistico1);
    }
    else if (numerodepontoturistico1 < numerodepontoturistico2)
    {
        printf("A Quantidade de Ponto turisticos da Carta 2 é %d. Logo ela é a vencedora!.\n", numerodepontoturistico2);
    }
    else
    {
        printf("Empate entre as duas Cartas na Quantidade de Pontos Turisticos.\n");
    }

    // printf("PIB Per Capita: %d\n", pibpercapita1 > pibpercapita2); Código Retirado Para implementação da Nova Logica.

    if (pibpercapita1 > pibpercapita2)
    {
        printf("O PIB PER CAPITA da Carta 1, cujo valor é R$ %.2f é o vencedor!.\n", pibpercapita1);
    }
    else if (pibpercapita1 < pibpercapita2)
    {
        printf("O PIB PER CAPITA da carta 2, cujo valor é R$ %.2f é o vencedor!.\n", pibpercapita2);
    }
    else
    {
        printf("Empate entre as duas Cartas no quesito PIB PER CAPITA.\n");
    }

    // Regra Especial Para Densidade o Menor Valor Vence

    // printf("Densidade Populacional: %d\n", Densidadepopulacional1 < Densidadepopulacional2); Código Retirado Para implementação da Nova Logica.

    if (Densidadepopulacional1 < Densidadepopulacional2)
    {
        printf("A Densidade Populacional da Carta 1, cujo valor é %.2f é a vencedora!.\n", Densidadepopulacional1);
    }
    else if (Densidadepopulacional1 > Densidadepopulacional2)
    {
        printf("A Densidade Populacional da carta 2, cujo valor é %.2f é a vencedora!.\n", Densidadepopulacional2);
    }
    else
    {
        printf("Empate entre as duas Cartas no quesito Densidade Populacional.\n");
    }

    printf("\n");

    printf("\n");

    // Resultado do super poder
    printf("***RESULTADO DO SUPER PODER***\n");

    if (superpoder1 > superpoder2)
    {
        printf("O super poder da carta 1, cujo valor é %.2f é o vencedor.\n", superpoder1);
    }
    else if (superpoder1 < superpoder2)
    {
        printf("O super poder da carta 2, cujo valor é %.2f é o vencedor.\n", superpoder2);
    }
    else
    {
        printf("Empate entre as duas Cartas no quesito Super Poder.\n");
    }

    return 0;
}