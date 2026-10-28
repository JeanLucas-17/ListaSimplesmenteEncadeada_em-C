/*
    AUTOR......: JEAN LUCAS THOMAZELLI SILVA
    DATA.......: 28/10/2026

    GRUPO......: JEAN LUCAS RA: 438971-2026
                 FELIPE GABRIEL RA: 434906-2026

    OBJETIVO...: ALTERAR OS CADASTROS DAS CONTAS
*/

#include "funcoes.h"

void alterarConta(ListaDupla *D)
{   
    ApontConta result;
    regConta conta;

    int codigo;
    int resp;

    do
    {
        system("cls");
        tela();
        telaCadastrar();

        limpaMensagem();

        gotoxy(1, 22);
        printf("Codigo da Conta / OBS (0 para sair): ");

        gotoxy(41, 4);
        scanf("%d", &codigo);

        if (codigo != 0 && codigo > 0)
        {
            limpaMensagem();

            result = pesquisaCodigoConta(D, codigo);

            if (result != NULL)
            {
                conta = result->conteudo;

                gotoxy(41, 4);
                printf("%d", conta.codigo_conta);
                            
                gotoxy(41, 6);
                printf(conta.banco);
                            
                gotoxy(41, 8);
                printf(conta.agencia);
                            
                gotoxy(41, 10);
                printf(conta.numero_conta);
                            
                gotoxy(41, 12);
                printf(conta.tipo_conta);
                            
                gotoxy(41, 14);
                printf("%.2f", conta.vl_saldo);
                            
                gotoxy(41, 16);
                printf("%.2f", conta.vl_limite);
                            
                gotoxy(41, 18);
                printf("%d", conta.status);

                limpaMensagem();
                gotoxy(1, 22);
                printf("Deseja alterar algum dado? (1 - SIM / 2 - NAO): ");
                scanf("%d", &resp);

                if (resp == 1)
                {
                    do
                    {
                        limpaMensagem();
                        gotoxy(1, 22);
                        printf("Qual Dado?: ");
                        scanf("%d", &resp);

                        switch (resp)
                        {
                            case 1:
                                gotoxy(41, 6);
                                printf("                                     ");

                                gotoxy(41, 6);
                                fflush(stdin);
                                fgets(conta.banco, 50, stdin);

                                break;

                            case 2:
                                gotoxy(41, 8);
                                printf("                                     ");

                                gotoxy(41, 8);
                                fflush(stdin);
                                fgets(conta.agencia, 10, stdin);

                                break;

                            case 3:
                                gotoxy(41, 10);
                                printf("                                     ");

                                gotoxy(41, 10);
                                fflush(stdin);
                                fgets(conta.numero_conta, 20, stdin);

                                break;

                            case 4:
                                gotoxy(41, 12);
                                printf("                                     ");

                                gotoxy(41, 12);
                                fflush(stdin);
                                fgets(conta.tipo_conta, 20, stdin);

                                break;

                            case 5:
                                gotoxy(41, 14);
                                printf("                                     ");

                                gotoxy(41, 14);
                                scanf("%lf", &conta.vl_saldo);

                                break;

                            case 6:
                                gotoxy(41, 16);
                                printf("                                     ");

                                gotoxy(41, 16);
                                scanf("%lf", &conta.vl_limite);

                                break;

                            case 7:
                                gotoxy(41, 18);
                                printf("                                     ");

                                gotoxy(41, 18);
                                scanf("%d", &conta.status);

                                break;

                            default:
                                erro();

                                break;
                        }

                        limpaMensagem();
                        gotoxy(1, 22);
                        printf("Deseja alterar mais algum dado? (1 - SIM / 2 - NAO): ");
                        scanf("%d", &resp);

                    } while (resp == 1);

                    limpaMensagem();
                    gotoxy(1, 22);
                    printf("Deseja salvar as alteracoes? (1 - SIM / 2 - NAO): ");
                    scanf("%d", &resp);

                    if (resp == 1)
                    {
                        result->conteudo = conta;

                        limpaMensagem();
                        gotoxy(1, 22);
                        printf("Altercaoes salvas! Aperte ENTER: ");
                        getch();
                    }
                }
            }
            else
            {
                limpaMensagem();
                gotoxy(1, 22);
                printf("Codigo nao cadastrado! Aperte ENTER: ");
                getch();
            }
        }
        else if (codigo < 0)
        {
            limpaMensagem();
            gotoxy(1, 22);
            printf("Codigo Invalido! Aperte ENTER: ");
            getch();
        }
    } while(codigo != 0);
}
