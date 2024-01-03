/*
 Exemplo0102 - v0.1. - 26/ 08 /2023
 Author: Vinicius Cesar DAscencao Dias
 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0100 exemplo0101.c
 Windows: gcc -o exemplo0100 exemplo0101.c

 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0102
 Windows: exemplo0102
*/
// dependencias
#include <stdio.h>  // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral

/**
 Method_01
*/

void method_01(void)
{
    // definit dado
    int x = 0; // definir variavel com valor inicial

    // identificar
    printf("%s\n", "Method_01");

    // mostrar valor inicial
    printf("\n%s%d\n", "x = ", x);
    // obs.: O formato para int - > %d (ou %i)

    printf("&%d%p\n", "x = ", &x);
    // obs.: O formato para endereco -> %p

    // ver do teclado
    printf("Entrar com um valor inteiro: ");
    scanf("%d", &x);
    // obs.: Necessario indicar o endereco - > &

    getchar(); // obs.: Limpar a entrada de dados

    // mostrar valor lido
    printf("%s%i\n", "x = ", x);

    // encerrar
    printf("\nAperte <Enter> para continuar.");
    getchar();
} // end method_01

/**
 * Method_02
 */

void method_02(void)
{
    // definir dado
    double x = 0.0; // definir variavel com valor inicial
                    // obs.: Definir a parte fracionaria e util

    // identificar
    printf("\n%s\n", "Method_02 - Programa - v0.2");

    // mostrar valor inicial
    printf("\n%s%lf\n", "x = ", x);
    // obs.: O formato para double - > %fl

    // ler do teclado
    printf("Enter com um valor real: ");
    scanf("%lf", &x);
    // obs.: Necessario indicar o endereço - > &
    getchar(); // obs.: Limpar a entrada de dados

    // mostrar o valor lido
    printf("%s%lf\n", "x = ", x);

    // encerrar
    printf("\n\nAperte <Enter> para continuar.\n");
    getchar(); // aguardar por ENTER

} // end method_02

/*
Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/

int main(void)
{
    // definir dado
    int opcao = 0;

    // identificar
    printf("%s\n", "Exemplo0102 - Programa = v0.2");
    printf("%s\n", "Autor: Vinicius Cesar DAscencao Dias");
    printf("\n");

    // acoes

    // repetir
    do
    {
        // para mostrar opcoes
        printf("\n%s\n", "Opcoes: ");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - Method_01");
        printf("\n%s", "2 - Method_02");
        printf("\n");

        // ler a opcao do teclado
        printf("\n%s", "Opcao = ");
        scanf("%d", &opcao);
        getchar(); // para limpar a entrada de dados

        // para mostrar a opcao lida
        printf("\n%s%d", "Opcao = ", opcao);

        // escolher acao dependente da opcao
        switch (opcao)
        {
        case 0: // nao fazer nada
            break;
        case 1: // executar method_01
            method_01();
            break;
        case 2: 
            method_02();
            break;
        default: // comportamento padrao (O que fazer caso não for as opçoes anteriores )
            printf("\nErro: Opcao invalida.\n");
            break;
        } // end switch
    } while (opcao != 0);

    // encerrar
    printf("\n\nAperte <Enter> para terminar.");
    getchar(); // aguardar por Enter
    return 0;  // voltar ao so (sem erros)
} // end main

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
// prestar mais atençao," case X: " seguir essa ideia
                            break;
---------------------------------------------- previsao de testes
a.) 5
b.) -5
c.) 123456789
---------------------------------------------- historico
Versao Data Modificacao
0.1 26/08 esboco
---------------------------------------------- testes
Versao     Teste
0.1     01. ( OK )     identificacao de programa 
0.2     01. ( OK )     identificacao de programa
*/