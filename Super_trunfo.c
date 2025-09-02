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

    printf("\n");
    printf("\n");

    //Criação de uma nova variável para implementação do menu com o switch
    int escolha;

    // Exibir o menu de opções
    printf("\n\n*** HORA DA BATALHA! ***\n");
    printf("Agora veremos quem é o verdadeiro vencedor \n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área (km²)\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - PIB per Capita\n");
    printf("6 - Densidade Populacional (menor valor vence)\n");
    printf("7 - Super Poder\n");
    printf("Digite sua escolha (1-7): ");

    // Lendo a escolha do jogador
    scanf("%d", &escolha);

    printf("\n*** Resultado da Batalha ***\n");

    // Usando o switch para executar a comparação correta na nova implementação
    switch (escolha)
    {
        case 1: // Se o jogador digitou 1
            printf("Atributo escolhido: População\n");
            // Agora, colocamos o seu if-else if-else de população aqui dentro
            if (populacao1 > populacao2) {
                printf("Vencedor: Carta 1 - %s (%lu habitantes)\n", nomedacidade1, populacao1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: Carta 2 - %s (%lu habitantes)\n", nomedacidade2, populacao2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break; // Sai do switch

        case 2: // Se o jogador digitou 2
            printf("Atributo escolhido: Área\n");
            // Coloque seu if-else if-else de ÁREA aqui
            if (area1 > area2) {
                 printf("Vencedor: Carta 1 - %s (%.2f km²)\n", nomedacidade1, area1);
            } else if (area2 > area1) {
                 printf("Vencedor: Carta 2 - %s (%.2f km²)\n", nomedacidade2, area2);
            } else {
                 printf("Resultado: Empate!\n");
            }
            break; // Sai do switch

            case 3: // Se o jogador digitou 3
            printf("Atributo escolhido: PIB\n");
            if (pib1 > pib2)
            {
            printf("O PIB da Carta 1, cujo valor é R$ %.2f é o vencedor!.\n", pib1);
            }
            else if (pib1 < area2)
            {
            printf("O PIB da carta 2, cujo valor é R$ %.2f é o vencedor!.\n", pib2);
            }
            else
            {
            printf("Empate entre as duas Cartas no quesito PIB.\n");
            }
            break; // Sai do switch

            case 4: // Se o jogador digitou 4
            printf("Atributo escolhido: Pontos Turisticos\n");
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
            break; // Sai do switch
            
            case 5: // Se o jogador digitou 5
            printf("Atributo escolhido: PIB Per Capita\n");
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
            break; // Sai do switch
            
            case 6: // Se o jogador digitou 6
            printf("Atributo escolhido: Densidade Populacional\n");
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
            break; // Sai do switch
            
            case 7: // Se o jogador digitou 7
            printf("Atributo escolhido: Super Poder\n");
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
            break; // Sai do switch

            default: // Se o jogador digitou qualquer outra coisa
            printf("Opção inválida! Por favor, escolha um número entre 1 e 7.\n");
            break;
            }

            printf("\nFim de jogo!\n");

            return 0;
}