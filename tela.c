/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
*/

#include "funcoes.h"

void tela()
{
    int i;

    printf("+");
    for (i = 0; i < 78; i++)
    {
        printf("-");
    }
    printf("+");

    printf("\n| UNICIVE         SISTEMA DE GESTAO DE FUNCIONARIO          ESTRUTURA DE DADOS |\n");
    printf("|                                                                              |\n");
    printf("+");
    for (i = 0; i < 78; i++)
    {
        printf("-");
    }
    printf("+");

    for (i = 0; i < 17; i++)
    {
        printf("\n|                                                                              |");
    }

    printf("\n+");
    for (i = 0; i < 78; i++)
    {
        printf("-");
    }
    printf("+");

    printf("\n|                                                                              |");

    printf("\n+");
    for (i = 0; i < 78; i++)
    {
        printf("-");
    }
    printf("+");
}