/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
*/

#ifndef FUNCOES_H
#define FUNCOES_H

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

typedef struct
{
    int codigo_conta;
    char banco[50];
    char agencia[10];
    char numero_conta[20];
    char tipo_conta[20];
    double vl_saldo;
    double vl_limite;
    char status[10];
} regConta;

typedef struct TipoItemConta *ApontConta;

typedef struct TipoItemConta
{
    regConta conteudo;

    ApontConta ant;
    ApontConta prox;
} TipoItemConta;

typedef struct 
{
    int sequencial;
    int codigo_conta;
    char dt_movimento[11];
    char tp_movimento[15];
    char ds_favorecido[50];
    double vl_movimento;
    double vl_saldo;
} regMovimentacao;

typedef struct TipoItemMov *ApontMov;

typedef struct TipoItemMov
{
    regMovimentacao conteudo;

    ApontMov prox;
} TipoItemMov;

void gotoxy(int x, int Y);

void tela();

void telaPrincipal();

#endif