/*
Exemplo0401 - v0.1 - __ / __ / _____
 Author: Vinicius Cesar DAscencao Dias
*/
// dependencias
#include "io.h" // para definicoes proprias
#include <stdio.h>

/**
 Funcao para determinar se valor inteiro pertence a intervalo aberto.
 @return true, se pertencer; false, caso contrario
 @param x - valor a ser testado
 @param inferior - limite inferior do intervalo
 @param superior - limite superior do intervalo
*/
bool belongsTo(int x, int inferior, int superior)
{
    // definir dado local
    bool result = false;

    // testar a condicao
    if (inferior < x && x < superior)
    {
        result = true;
    } // end if
    return (result);
} // end belongsTo()

/**
 Funcao para determinar se valor inteiro e' positivo.
 @return true, se positivo; false, caso contrario
 @param x - valor a ser testado
*/
bool positive(int x)
{
    // definir dado local
    bool result = false;
    // testar a condicao
    if (x > 0)
    {
        result = true;
    } // end if
    return (result);
} // end positive()

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

    // Definir dado
    int quantidade = 0;
    int valor = 0;
    int controle = 0;

    // identificar
    IO_id("Method01 - v0.1");

    // entrada
    quantidade = IO_readint("Entrar com uma quantidade: ");

    // repetir para a quantidade de vezes informada
    controle = 1;
    while (controle <= quantidade)
    {
        // ler valor do teclado
        valor = IO_readint(IO_concat(IO_concat("", IO_toString_d(controle)), ":"));

        // passar ao proximo valor
        controle = controle + 1;
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
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;

    // identificar
    IO_id("Method02 - v0.1");

    // ler do teclado
    quantidade = IO_readint("Entrar com uma quantidade: ");

    // repetir para a quantidade de vezes informada
    controle = 1;
    while (controle <= quantidade)
    {
        // ler valor do teclado
        valor = IO_readint(IO_concat(IO_concat("", IO_toString_d(controle)), ": "));
        // testar e contar se valor for positivo
        if (positive(valor))
        {
            contador = contador + 1;
        } // end if
        // passar ao proximo valor
        controle = controle + 1;
    } // end while

    // mostrar a quantidade de valores positivos
    IO_printf("%s%d\n", "Positivos = ", contador);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_02

/**
 Method_03 - Repeticao com teste no inicio.
*/

void method_03(void)
{
    // definir dado
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;

    // identificar
    IO_id("Method_03 - v0.3");

    // ler do teclado
    quantidade = IO_readint("Entrar com uma quantidade: ");

    // repetir para a quantidade de vezes informada
    controle = 1;
    while (controle <= quantidade)
    {
        // ler valor do teclado
        valor = IO_readint(IO_concat(IO_concat("", IO_toString_d(controle)), ": "));

        // testar e contar se valor for positivo
        if (belongsTo(valor, 0, 100))
        {
            contador = contador + 1;
        } // end if
        // passar ao proximo valor
        controle = controle + 1;
    } // end while

    // mostrar quantidade de valores positivos
    IO_printf("%s%d\n", "Positivos menores que 100 = ", contador);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_03

/**
 Method_04 - Repeticao com teste no inicio e variacao.
*/

void method_04(void)
{
    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_04

/**
 Method_05 - Repeticao com teste no inicio e variacao.
*/

void method_05(void)
{
    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_05

/**
 Method_06 - Repeticao sobre cadeia de caracateres.
*/

void method_06(void)
{
    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_06

/**
 Method_07 - Repeticao sobre cadeia de caracateres.
*/

void method_07(void)
{
    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_07

/**
 Method_08 - Repeticao com intervalos.
*/

void method_08(void)
{
    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_08

/**
 Method_09 - Repeticao com intervalos.
*/

void method_09(void)
{
    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_09

/**
 Method_10 - Repeticao com confirmacao.
*/

void method_10(void)
{
    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_10

/**
 Method_11 - Exercicio.
*/

void method_11(void)
{
    // encerrar
    IO_pause("Aperte <Enter> para terminar");

} // endmethod_11

/**
 Method_12 - Exercicio.
*/

void method_12(void)
{
    IO_pause("Aperte <Enter> para continuar");

} // end method_12

/**
 Method_13 - Exercicio.
*/

void method_13(void)
{
    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_13

void method_14(void)
{
    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_14

void method_15(void)
{
    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_15

void method_16(void)
{
    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_16

void method_17(void)
{
    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_17

void method_18(void)
{
    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_18

void method_19(void)
{
    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_19

void method_20(void)
{
    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_20

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
        IO_id("EXEMPLO0403 - Programa - v0.3");

        // ler do teclado
        IO_println("  Opcoes");
        IO_println("  0 - parar");
        IO_println("  1 - method01");
        IO_println("  2 - method02");
        IO_println("  3 - method03");
        IO_println("  4 - method04");
        IO_println("  5 - method05");
        IO_println("  6 - method06");
        IO_println("  7 - method07");
        IO_println("  8 - method08");
        IO_println("  9 - method09");
        IO_println(" 10 - method10");
        IO_println(" 11 - Exercicio.");
        IO_println(" 12 - Exercicio.");
        IO_println(" 13 - Exercicio.");
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
        default:
            IO_pause(IO_concat("Valor diferente das opcoes (", IO_concat(IO_toString_d(x), ")")));
        } // end switch
    } while (x != 0);

    // encerrar
    IO_pause("Aperte <Enter> para terminar");
    return (0);
} // end main
