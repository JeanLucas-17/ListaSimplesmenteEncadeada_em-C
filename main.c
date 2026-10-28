/*
    AUTOR......: JEAN LUCAS THOMAZELLI SILVA
    DATA.......: 24/10/2026

    GRUPO......: JEAN LUCAS RA: 438971-2026
                 FELIPE GABRIEL RA: 434906-2026

    OBJETIVO...: CRIAR UM SISTEMA DE GERENCIAMENTO BANCARIO
*/

#include "funcoes.h"

int main()
{
    int opcao;

    ListaDupla D;
    ListaSimples S;

    D.pri = NULL;
    D.ult = NULL;

    S.pri = NULL;
    S.pri = NULL;

    system("color 0a");
    
    lerDiscoConta(&D);
    
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
                menuConta(&D);

                break;
            case 2:
                
                break;
            case 3:
                salvarDiscoConta(&D);

                break;
            default:
                erro();

                break;
        }
    } while (opcao != 3);

    printf("\n");
    printf("\n");
    printf("\n");

    return 0;
}