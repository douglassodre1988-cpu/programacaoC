#include <stdio.h> // Biblioteca para as Funções de Entrada e Saida de Dados

int main() {

    // --- Atributos da carta 1 ---
    char estado1;
    char codigodacarta1[5];
    char nomedacidade1[15];
    int populacao1;
    float area1;
    float pib1;
    int numerodepontoturistico1;
    // DECLARE as variáveis de cálculo aqui, mas NÃO as calcule ainda.
    float Densidadepopulacional1;
    float pibpercapita1;

    // --- Atributos da carta 2 ---
    char estado2;
    char codigodacarta2[5];
    char nomedacidade2[15];
    int populacao2;
    float area2;
    float pib2;
    int numerodepontoturistico2;
    // Use nomes diferentes para as variáveis da carta 2.
    float Densidadepopulacional2;
    float pibpercapita2;

    // --- COLETA DE DADOS DA CARTA 1 ---
    printf("--- Atributos da carta 1 ---\n");
    printf("Digite o Estado (Uma Letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigodacarta1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomedacidade1);

    printf("Qual o Numero de Habitantes da Cidade? ");
    scanf("%d", &populacao1); // Usando %d por convenção

    printf("Qual a Area em Km2? ");
    scanf("%f", &area1);

    printf("Qual o PIB da Cidade (em bilhoes)? ");
    scanf("%f", &pib1);

    printf("Qual a Quantidade de Pontos Turisticos na Cidade? ");
    scanf("%d", &numerodepontoturistico1);
    
    // --- COLETA DE DADOS DA CARTA 2 ---
    printf("\n--- Atributos da carta 2 ---\n");
    printf("Digite o Estado (Uma Letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigodacarta2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomedacidade2);

    printf("Qual o Numero de Habitantes da Cidade? ");
    scanf("%d", &populacao2);

    printf("Qual a Area em Km2? ");
    scanf("%f", &area2);

    printf("Qual o PIB da Cidade (em bilhoes)? ");
    scanf("%f", &pib2);

    printf("Qual a Quantidade de Pontos Turisticos na Cidade? ");
    scanf("%d", &numerodepontoturistico2);

    // --- CALCULO DOS ATRIBUTOS - FAÇA ISSO DEPOIS DE TER OS DADOS! ---
    // Agora que 'populacao1' e 'area1' têm valores, o cálculo funcionará.
    Densidadepopulacional1 = (float) populacao1 / area1;
    // Para o PIB per capita ser mais realista, vamos converter o PIB de bilhões
    pibpercapita1 = (pib1 * 1000000000) / populacao1;

    Densidadepopulacional2 = (float) populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;


    // --- EXIBIÇÃO DE DADOS CADASTRADOS DA CARTA 1 ---
    printf("\n\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigodacarta1);
    printf("Nome Da Cidade: %s\n", nomedacidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1); // CORRIGIDO: Exibindo a variável 'area1' e formatando
    printf("PIB: %.2f bilhoes\n", pib1); // Formatando para melhor leitura
    printf("Numero de Pontos Turisticos: %d\n", numerodepontoturistico1);
    printf("Densidade Populacional: %.2f hab/km2\n", Densidadepopulacional1);
    printf("PIB Per Capita: R$ %.2f\n", pibpercapita1);

    // --- EXIBIÇÃO DE DADOS CADASTRADOS DA CARTA 2 ---
    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigodacarta2);
    printf("Nome Da Cidade: %s\n", nomedacidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2); // CORRIGIDO: Exibindo a variável 'area2' e formatando
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", numerodepontoturistico2);
    printf("Densidade Populacional: %.2f hab/km2\n", Densidadepopulacional2);
    printf("PIB Per Capita: R$ %.2f\n", pibpercapita2);

    return 0;
}