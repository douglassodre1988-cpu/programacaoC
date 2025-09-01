#include <stdio.h>
int main()
{
    char nomeDaCremosa[10];
    int humor;
    int cansaco;
    char marido[10];
    int comportamento;

    printf("Entre com o nome da cremosa:\n");
    scanf("%9s", nomeDaCremosa);

    printf("Entre com o humor da cremosa:\n");
    scanf("%d", &humor);

    printf("Entre com o nivel de cansaço da cremosa:\n");
    scanf("%d", &cansaco);

    printf("Entre Marido:\n");
    scanf("%9s", marido);

    printf("Entre Nota de comportamento do Marido:\n");
    scanf("%d", &comportamento);

    if (humor > 2)
    {
        printf("Você tem uma chance\n");
    }
    else
    {
        printf("Chance baixíssima\n");
    }

    if (cansaco > 5)
    {
        printf("Estou com sono\n");
    }
    else
    {

        printf("Você tem chance de coisar\n");
    }

    if (humor > 2 && cansaco < 2)
    {
        printf("Sua Chance é alta\n");
    }
    else
    {
        printf("Sua Chance é baixa\n");
    }

    if (humor > 2 && cansaco < 2 && comportamento > 5)
    {
        printf("Você brilhou! Com certeza hoje Tem Piriquito....Vai que é sua garoto!\n");
    }
    else
    {
        printf("Que pena! Tente outra vez!\n");
    }

    return 0;
}