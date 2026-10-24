/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
*/

#include "funcoes.h"

int main()
{
    int opcao;

    do
    {
        system("cls");
        tela();
        telaPrincipal();

        gotoxy(1, 22);
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                
                break;
            case 2:

                break;
            case 3:

                break;
            default:

                break;
        }
    } while (opcao != 3);

    printf("\n");
    printf("\n");
    printf("\n");

    return 0;
}