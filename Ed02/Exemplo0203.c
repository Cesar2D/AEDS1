/*
 Exemplo0200 - v0.0. - __ / __ / _____
 Author: ________________________

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0200 exemplo0200.c
 Windows: gcc -o exemplo0200 exemplo0200.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0200
 Windows: exemplo0200
*/
// dependencias
#include <stdio.h>  // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral
#include "io.h"     // para definicoes proprias

/**
 * Method_01.
 */

void method_01(void)
{
    // definir dado
    int x = 0; // definir variavel com valor inicial

    // identificar
    IO_id("Method_01 - Programa v0.1");

    // ler do teclado
    x = IO_readint("Entrar com um valor inteiro: ");

    // testar valor
    if (x == 0)
    {
        IO_printf("%s(%d)\n", "Valor igual a zero ", x);
    } // end if_1
    if (x != 0)
    {
        IO_printf("%s(%d)\n", "valor diferente de zero", x);
    } // end if_2

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_01

/**
 * Method_02.
 */

void method_02()
{
    // definir dado
    int x = 0; // definir variavel com valor inicial

    // identificar
    IO_id("\nMethod_02 - v0.2");

    // ler do teclado
    x = IO_readint("Entre com um valor inteiro: ");

    // testar valor
    if (x == 0)
    {
        IO_printf("%s(%d)\n", "Valor igual a zero: ", x);
    }    // end if
    else // equivalente a "caso diferente do ja testado"
    {
        IO_printf("%s(%d)\n", "Valor diferente de zero: ", x);
    } // end else

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_02

/**
 * Method_03.
 */

void method_03()
{
    // definir dado
    int x = 0; // definir variacel com valor inicial

    // identificar
    IO_id("Method_03 - Programa - v0.0");

    // ler do teclado
    x = IO_readint("Enter com um valor inteiro: ");

    // testar valor
    if (x == 0)
    {
        IO_printf("%s(%d)\n", "Valor igual a zero ", x);
    } // end if
    else
    {
        IO_printf("%s(%d)\n", "Valor diferente de zero ", x);
        if (x > 0)
        {
            IO_printf("%s(%d)\n", "Valor maior que zero ", x);
        } // end if 2
        else
        {
            IO_printf("%s(%d)\n", "Valor menor que zero ", x);
        } // end else 2
    }     // end

    // encerrar
    IO_pause("Apertar <Enter> para continuar");
} // end method_03

/*
 Funcao principal.
 @return codigo de encerramento
*/

int main(void)
{
    // definir dado
    int opcao = 0;

    // identificar
    printf("%s\n", "Exemplo0203 - Programa = v0.3");
    printf("%s\n", "Autor: Vinicius Cesar DAscencao Dias");
    printf("\n"); // mudar de linha

    // acoes

    // repetir
    do
    {
        // para mostrar opcoes
        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - Method_01");
        printf("\n%s", "2 - Method_02");
        printf("\n%s", "3 - Method_03");
        printf("\n");

        // ler a opcao do teclado
        printf("\n%s", "Opcao = ");
        scanf("%d", &opcao);
        getchar(); // para limpar a entrada de dados

        // para mostra a opcao lida
        printf("\n%s%d", "Opcao = ", opcao);

        // escolher acao dependente da opcao
        switch (opcao)
        {
        case 0: /* nao fazer nada */
            break;
        case 1:
            method_01();
            break;
        case 2:
            method_02();
            break;
        case 3:
            method_03();
            break;
        default: // comportamento padrao
            printf("\nERRO: Opcao invalida.\n");
            break;
        } // end switch

    } while (opcao != 0);

    // encerrar
    printf("\n\nAperte <Enter> para terminar.");
    getchar(); // aguardar por ENTER
    return 0;  // voltar ao SO (sem erros)

} // end main

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) 0
b.) 5
c.) -5
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
*/