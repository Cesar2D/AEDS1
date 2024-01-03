/*
Exemplo0300 - v0.0 - __ / __ / _____
 Author: Vinicius Cesar DAscencao Dias
*/
// dependencias
#include "io.h" // para definicoes proprias
#include <stdio.h>

/**
 * Method_00 - não faz nada
 */

void method_00(void)
{
    // nao faz nada
} // end method_00

/**
 Method_01 - Repeticao com teste no inicio.
*/
void method_01(void)
{
    // definir dado
    int x = 0;

    // identificar
    IO_id("Method_01 - v0.0");

    // ler do teclado o valor inicial
    x = IO_readint("Entrar com uma quantidade: ");

    // repetir (x) vezes
    while (x > 0)
    {
        // mostrar valor atual
        IO_println(IO_toString_d(x));

        // passar ao proximo valor
        x = x - 1;
    } // end while

    // encerrar
    IO_pause("Eperte <Enter> para continuar");
} // end method_01

/**
 * Method_02 - Repeticao com teste no inicio.
 */

void method_02(void)
{
    // definir dado
    int x = 0;
    int y = 0;

    // identificar
    IO_id("Method_02 - v0.2");

    // ler do teclado
    x = IO_readint("Entrar com uma quantidade: ");

    // repetir (x) vezes
    y = x; // copiar o valor lido (e melhor)
    while (y > 0)
    {
        // mostrar valor atual
        IO_println(IO_toString_d(y));

        // passar ao proximo valor
        y = y - 1;
    } // end while

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_02

/**
 Method_03 - Repeticao com teste no inicio.
*/

void method_03(void)
{
    // definir dado
    int x = 0;
    int y = 0;

    // identificar
    IO_id("Method_03 - v0.3");

    // ler do telcado
    x = IO_readint("Entrar com uma quantidade: ");

    // repetir (x) vezes
    y = 1; // o valor lido devera ser preservado
    while (y <= x)
    {
        // mostrar valor atual
        IO_printf("%d\n", y);

        // passar ao proximo valor
        y = y + 1;
    } // end

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_03

/**
 Method_04 - Repeticao com teste no inicio e variacao.
*/

void method_04(void)
{
    // definir dado
    int x = 0;
    int y = 0;
    int z = 0;

    // identificar
    IO_id("Method_04 - v0.4");

    // ler do teclado
    x = IO_readint("Entre com uma quantidade: ");

    // repetir (x) vezes
    // inicio teste variacao
    for (y = 1; y <= x; y = y + 1)
    {
        // ler valor do teclado
        z = IO_readint("Valor = ");

        // mostrar valor atual
        IO_printf("%d. %d\n", y, z);
    } // end for

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_04

/**
 Method_05 - Repeticao com teste no inicio e variacao.
*/

void method_05(void)
{
    // definir dados
    int x = 0;
    int y = 0;
    int z = 0;

    // identificar
    IO_id("Method_05 - v0.5");

    // ler do teclado
    x = IO_readint("Entrar com uma quantidade: ");

    // repetir (x) vezes
    // inicio teste variacao
    for (y = x; y >= 1; y = y - 1)
    {
        // ler valor do teclado
        z = IO_readint("Valor = ");

        // mostrar valor atual
        IO_printf("%d. %d\n", y, z);

    } // end for

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_05

/**
 Method_06 - Repeticao sobre cadeia de caracateres.
*/

void method_06(void)
{
    // definir dado
    int x = 0;
    int y = 0;

    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;

    // identificar
    IO_id("Method_06 - v0.6");

    // ler do teclado
    palavra = IO_readstring("Entrar com uma palavra: ");

    // repetir para cada letra
    tamanho = strlen(palavra) - 1;

    // obs: A cadeia de caracteres iniciam suas posicoes em zero.

    // inicio; teste; variacao
    for (y = tamanho; y >= 0; y = y - 1)
    {
        // mostrar valor atual
        IO_printf("%d: [%c]\n", y, palavra[y]);
    } // end for

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_06

/**
 Method_07 - Repeticao sobre cadeia de caracateres.
*/

void method_07(void)
{
    // definir dado
    int x = 0;
    int y = 0;

    char palavra[STR_SIZE];
    int tamanho = 0;

    // identificar
    IO_id("Method07 - v0.7");

    // ler do teclado
    IO_printf("Entrar com uma palavra: ");
    scanf("%s", palavra);
    getchar();
    // OBS: A cadeia de caracteres dispensa a indicacao de endereco (&) na leitura.

    // repetir para cada letra
    tamanho = strlen(palavra);
    // OBS: A cadeia de caracteres iniciam suas posições em zero

    // inicio; teste; variacao
    for (y = 0; y < tamanho; y = y + 1)
    {
        // mostrar vaslor atual
        IO_printf("%d: [%c]\n", y, palavra[y]);
    } // end for

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_07

/**
 Method_08 - Repeticao com intervalos.
*/

void method_08(void)
{
    // definir dado
    int inferior = 0;
    int superior = 0;
    int x = 0;

    // identificar
    IO_id("Method08 - v0.8");

    // ler do teclado
    inferior = IO_readint("Limite inferiror do intervalo: ");
    superior = IO_readint("Limite superior do intervalo: ");

    // inicio; teste; variacao
    for (x = inferior; x <= superior; x = x + 1)
    {
        // mostrar valor atual
        IO_printf("%d\n", x);
    } // end for

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_08

/**
 Method_09 - Repeticao com intervalos.
*/

void method_09(void)
{
    // definir dado
    double inferior = 0.0;
    double superior = 0.0;
    double passo = 0.0;
    double x = 0.0;

    // identificar
    IO_id("Method_09 - v0.9");

    // ler do teclado
    inferior = IO_readdouble("Limite inferior do intervalo : ");
    superior = IO_readdouble("Limite superior do intervalo : ");
    passo = IO_readdouble("Variacao no intervalo (passo): ");

    // inicio; teste; variacao
    for (x = superior; x >= inferior; x = x - passo)
    {
        IO_printf("%lf\n", x);
    } // end for

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_09

/**
 Method_10 - Repeticao com confirmacao.
*/

void method_10(void)
{
    // definir dado
    double inferior = 0.0;
    double superior = 0.0;
    double passo = 0.0;
    double x = 0.0;

    // identificar
    IO_id("Method10 - v1.0");

    // ler do teclado
    inferior = IO_readdouble("Limite inferior do intervalo: ");

    // repetir ate haver confirmacao de validade
    do
    {
        superior = IO_readdouble("Limite superior do intertvalo: ");
    } // end do
    while (inferior >= superior);

    // repetir ate haver confirmacao de validade
    do
    {
        passo = IO_readdouble("Variacai no intervalo (passo): ");
    } // end do 2
    while (passo <= 0.0);

    // inicio; teste; variacao
    for (x = inferior; x <= superior; x = x + passo)
    {
        // mostrar valor atual
        IO_printf("%lf\n", x);
    } // end for

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_10

/**
 Method_11 - Exercicio.
*/

void method_11(void)
{
    // definir dados
    chars palavras = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int y = 0;

    IO_id("Exemplo0311 - v1.1");

    palavras = IO_readstring("Entre com uma palavra: ");

    tamanho = strlen(palavras) - 1;

    // inicio; teste; varicao
    for (y = tamanho; y >= 0; y = y - 1)
    {
        if (palavras[y] >= 'A' && palavras[y] <= 'Z')
        {
            IO_printf("%d: [%c]\n", y, palavras[y]);
        }

    } // end for

    // encerrar
    IO_pause("Aperte <Enter> para terminar");

} // endmethod_11

/**
 Method_12 - Exercicio.
*/

void method_12(void)
{
    // definir dados
    chars palavras = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int y = 0;
    int contagem = 0;

    // identificar
    IO_id("Exemplo0312 - v1.2");

    // entrada
    palavras = IO_readstring("Entre com uma palavra: ");

    // tamanho
    tamanho = strlen(palavras);

    // inicio; teste; variacao
    for (y = 0; y < tamanho; y = y + 1)
    {
        if (palavras[y] >= 'A' && palavras[y] <= 'Z')
        {
            IO_printf("%d. [%c]\n", y, palavras[y]);
            contagem = contagem + 1;
        } // end if
    }

    IO_pause("Aperte <Enter> para continuar");

} // end method_12

/**
 Method_13 - Exercicio.
*/

void method_13(void)
{
    // definir dados
    chars palavras = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int y = 0;
    int cont = 0;

    palavras = IO_readstring("Digite uma palavra: ");

    tamanho = strlen(palavras) - 1;

    for (y = tamanho; y >= 0; y = y - 1)
    {
        if (palavras[y] >= 'A' && palavras[y] <= 'Z')
        {
            IO_printf("%d. [%c]\n", y, palavras[y]);
            cont = cont + 1;
        } // end if

    } // end for

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_13

/**
 Method_14 - Exercicio.
*/

void method_14(void)
{
    // definir dados
    chars palavra = IO_new_chars(STR_SIZE);
    int y = 0;
    int tamanho = 0;
    int cont = 0;

    // entrada
    palavra = IO_readstring("Digite uma palavra: ");

    // obter o tamanho da string
    tamanho = strlen(palavra);

    // inicio; teste; variacao
    for (y = 0; y < tamanho; y = y + 1)
    {
        // condicional
        if ((palavra[y] >= 'A' && palavra[y] <= 'Z') || (palavra[y] >= 'a' && palavra[y] <= 'z'))
        {
            IO_printf("%d. [%c]\n", y, palavra[y]);
            cont = cont + 1;
        } // end if

    } // end for

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_14

/**
 Method_15 - Exercicio.
*/

void method_15()
{
    // definir dados
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int y = 0;
    int cont = 0;

    // entrada
    palavra = IO_readstring("Escreva uma palavra: ");

    // obter tamanho da string
    tamanho = strlen(palavra);

    // inicio; teste; variacao
    for (y = tamanho; y >= 0; y = y - 1)
    {
        // condicional2
        if (palavra[y] >= '0' && palavra[y] <= '9')
        {
            IO_printf("%d. [%c]\n", y, palavra[y]);
            cont = cont + 1;
        }
    } // end for

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_15

/**
 Method_16 - Exercicio.
*/

void method_16(void)
{
    // definir dados
    chars palavra = IO_new_chars(STR_SIZE);
    int y = 0;
    int cont = 0;
    int tamanho = 0;

    // entrada
    palavra = IO_readstring("Digite uma palvra: ");

    // obter tamanho da palavra
    tamanho = strlen(palavra);

    // inicio; teste; variacao
    for (y = 0; y < tamanho; y = y + 1)
    {
        if (!(((palavra[y] >= 'A' && palavra[y] <= 'Z') || (palavra[y] >= 'a' && palavra[y] <= 'z') || (palavra[y] >= '0' && palavra[y] <= '9'))))
        {
            IO_printf("%d. [%c]\n", y + 1, palavra[y]);
            cont = cont + 1;
        } // end if
    }     // end for

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_16

/*
 Funcao principal.
 @return codigo de encerramento
*/
int main(void)
{
    // definir dado
    int x = 0;

    // repetir ate desejar parar
    do
    {
        // identifcar
        IO_id("EXEMPLO0316 - Programa - v1.6");

        // ler do teclado
        IO_println("  Opcoes");
        IO_println("  0 - parar");
        IO_println("  1 - repeticao com teste no inicio");
        IO_println("  2 - repeticao com teste no inicio");
        IO_println("  3 - repeticao com teste no inicio");
        IO_println("  4 - repeticao com teste no inicio e variacao.");
        IO_println("  5 - repeticao com teste no inicio e variacao.");
        IO_println("  6 - repeticao sobre cadeia de caracateres.");
        IO_println("  7 - repeticao sobre cadeia de caracateres.");
        IO_println("  8 - repeticao com intervalos.");
        IO_println("  9 - repeticao com intervalos.");
        IO_println(" 10 - repeticao com confirmacao.");
        IO_println(" 11 - Exercicio.");
        IO_println(" 12 - Exercicio.");
        IO_println(" 13 - Exercicio.");
        IO_println(" 14 - Exercicio.");
        IO_println(" 15 - Exercicio.");
        IO_println(" 16 - Exercicio.");
        IO_println("");

        x = IO_readint("Entrar com uma opcao: ");

        // testar valor
        switch (x)
        {
        case 0:
            method_00();
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
        case 4:
            method_04();
            break;
        case 5:
            method_05();
            break;
        case 6:
            method_06();
            break;
        case 7:
            method_07();
            break;
        case 8:
            method_08();
            break;
        case 9:
            method_09();
            break;
        case 10:
            method_10();
            break;
        case 11:
            method_11();
            break;
        case 12:
            method_12();
            break;
        case 13:
            method_13();
            break;
        case 14:
            method_14();
            break;
        case 15:
            method_15();
            break;
        case 16:
            method_16();
            break;
        default:
            IO_pause(IO_concat("Valor diferente das opcoes (", IO_concat(IO_toString_d(x), ")")));
        } // end switch
    } while (x != 0);

    // encerrar
    IO_pause("Aperte <Enter> para terminar");
    return (0);
} // end main

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.)  0 e 1, passo 1
b.)  1 e 5, passo 1
c.)  1 e 5, passo 2
d.)  3 e 5, passo 1
e.)  3 e 5, passo 2
f.) -5 e 5, passo 1
g.) -5 e 5, passo 2
h.) -5 e 5, passo 5
i.) -5 e 5, passo -1
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
*/