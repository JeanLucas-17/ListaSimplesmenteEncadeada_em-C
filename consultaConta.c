/*
    AUTOR......: JEAN LUCAS THOMAZELLI SILVA
    DATA.......: 25/10/2026

    GRUPO......: JEAN LUCAS RA: 438971-2026
                 FELIPE GABRIEL RA: 434906-2026

    OBJETIVO...: FUNCAO QUE CONSULTA AS CONTAS CADASTRADAS
*/

#include "funcoes.h"

void consultaConta(ListaDupla *D, int opcao)
{
    regConta conta;

    ApontConta result;
    ApontConta i;

    double saldoTot;
    double limiteTot;

    int codigo;

    int y;

    i = D->pri;

    if (i == NULL)
    {
        system("cls");

        tela();
        telaCadastrar();
        
        limpaMensagem();
        gotoxy(1, 22);
        printf("Nenhuma conta Cadastrada! Aperte ENTER: ");
        getch();
    }
    else
    {
        if (opcao == 1)
        {
            do
            {
                system("cls");

                tela();
                telaCadastrar();

                conta = i->conteudo;

                mostraConta(conta, opcao, 0);

                limpaMensagem();
                gotoxy(1, 22);
                printf("Aperte ENTER: ");
                getch();

                i = i->prox;

            } while (i != NULL);

            limpaMensagem();
            gotoxy(1, 22);
            printf("Fim das contas! Aperte ENTER: ");
            getch();
        }
        else if (opcao == 2)
        {
            do
            {
                system("cls");

                tela();
                telaCadastrar();

                limpaMensagem();
                gotoxy(1, 22);
                printf("Codigo da conta / OBS (0 para sair): ");
                scanf("%d", &codigo);

                if (codigo != 0)
                {
                    result = pesquisaCodigoConta(D, codigo);

                    if (result != NULL)
                    {
                        conta = result->conteudo;
                        
                        mostraConta(conta, opcao, 0);

                        limpaMensagem();
                        gotoxy(1, 22);
                        printf("Aperte ENTER: ");
                        getch();
                    }   
                    else
                    {
                        limpaMensagem();
                        gotoxy(1, 22);
                        printf("Codigo nao cadastrado! Aperte ENTER: ");
                        getch();
                    }
                }
            } while(codigo != 0);
        }
        else
        {
            if (opcao == 3)
            {
                ordemCodigo(D);
            }
            else
            {
                ordemAlfabetica(D);
            }

            saldoTot = 0;
            limiteTot = 0;

            system("cls");
            tela();
            cabecalhoContas();

            i = D->pri;

            for (y = 6; i != NULL; y++)
            {
                conta = i->conteudo;

                saldoTot += conta.vl_saldo;
                limiteTot += conta.vl_limite;

                if (y == 19)
                {
                    limpaMensagem();
                    gotoxy(1, 22);
                    printf("Aperte ENTER para proxima tela: ");
                    getch();

                    system("cls");
                    tela();

                    y = 6;

                    mostraConta(conta, opcao, y);

                    cabecalhoContas();
                }
                else
                {
                    mostraConta(conta, opcao, y);
                }

                i = i->prox;
            }

            gotoxy(41, y);
            printf("------------ ----------- -----------");
            gotoxy(41, y + 1);
            printf("Saldo Total: R$ %.2f", saldoTot);
            gotoxy(66, y + 1);
            printf("R$  %.2f", limiteTot);

            limpaMensagem();
            gotoxy(1, 22);
            printf("Aperte ENTER: ");
            getch();
        }
    }
}
