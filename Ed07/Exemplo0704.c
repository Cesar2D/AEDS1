/*
Exemplo0401 - v0.1 - __ / __ / _____
 Author: Vinicius Cesar DAscencao Dias
*/
// dependencias
#include "io.h" // para definicoes proprias
#include <stdio.h>
#include <stdbool.h>

/**
 * Method_00 - não faz nada
 */

void method_00(void)
{
    // nao faz nada
} // end method_00

/**
 writeInts - Gravar em arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/
void writeInts(chars fileName, int x)
{
    FILE *arquivo = fopen(fileName, "wt");
    int y = 0;

    // repetir para a quantidade de dados
    for (y = 1; y <= x; y = y + 1)
    {
        // gravar valor
        fprintf(arquivo, "%d\n", y);
    } // end for

    // fechar arquivo ( INDISPENSAVEL para a gravacao)
    fclose(arquivo);
} // end writeInts()

/**
 Method_01.
*/
void method_01(void)
{
    // identificar
    IO_id("Method_01 - v0.1");

    // executar o metodo auxiliar
    writeInts("DADOS1.txt", 10);

    // encerrar
    IO_pause("Eperte <Enter> para continuar");
} // end method_01

/**
 readInts - Ler de arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/
void readInts(chars fileName)
{
    // definir dados
    FILE *arquivo = fopen(fileName, "rt");
    int x = 0;

    // tentar ler o primeiro
    fscanf(arquivo, "%d", &x);

    // repetir enquanto houver dados
    while (!feof(arquivo))
    {
        // mostrar valor
        printf("%d\n", x);

        // tentar ler o proximo
        fscanf(arquivo, "%d", &x);
    } // end while

    // fechar arquivo
    fclose(arquivo);
} // end readInts()

/**
 * Method_02.
 */

void method_02(void)
{
    // identificar
    IO_id("Method_02 - v0.2");

    // executar metodo auxiliar
    readInts("DADOS1.TXT");

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_02

/**
 writeDoubles - Gravar em arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/
void writeDoubles(chars fileName, int x)
{
    // definir dados
    FILE *arquivo = fopen(fileName, "wt");
    int y = 0;

    // gravar quantidade de valores
    IO_fprintf(arquivo, "%d\n", x);

    // repetir para a quantidade de dados
    for (y = 1; y <= x; y = y + 1)
    {
        // gravar valor
        IO_fprintf(arquivo, "%lf\n", (0.1 * y));
    } // end for

    // fechar arquivo
    fclose(arquivo);
} // end writeDoubles()

/**
 Method_03
*/

void method_03(void)
{
    // identificar
    IO_id("Method_03 - v0.3");

    // executar metodo auxiliar
    writeDoubles("DADOS2.TXT", 10);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_03

/**
 readDoubles - Ler de arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/
void readDoubles(chars fileName)
{
    // definir dados
    FILE *arquivo = fopen(fileName, "rt");
    int x = 0;
    int y = 1;
    double z = 0.0;

    // tentar ler a quantidade de dados
    fscanf(arquivo, "%d", &x);

    // repetir enquanto houver dados e quantidade nao tiver sido alcancada
    while (!feof(arquivo) && y <= x)
    {
        // tentar ler
        fscanf(arquivo, "%lf\n", &z);

        // mostrar valor
        printf("%2d: %lf\n", y, z);

        // passar ao proximo
        y = y + 1;
    } // end while

    // fechar arquivo
    fclose(arquivo);
} // end readDoubles()

/**
 Method_04.
*/

void method_04(void)
{
    // identificar
    IO_id("Method_04 - v0.4");

    // executar o metodo
    readDoubles("DADOS2.TXT");
    
    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_04

/**
 Method_05.
*/

void method_05(void)
{
    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_05

/**
 Method_06.
*/

void method_06(void)
{
    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_06

/**
 Method_07.
*/

void method_07(void)
{
    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_07

/**
 Method_08.
*/

void method_08(void)
{
    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_08

/**
 Method_09.
*/

void method_09(void)
{
    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_09

/**
 Method_10.
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
    // encerrar
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

/**
 Method_14 - Exercicio.
*/
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
        IO_id("EXEMPLO0504 - Programa - v0.4");

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
        IO_println(" 14 - Exercicio.");
        IO_println(" 15 - Exercicio.");
        IO_println(" 16 - Exercicio.");
        IO_println(" 17 - Exercicio.");
        IO_println(" 18 - Exercicio.");
        IO_println(" 19 - Exercicio.");
        IO_println(" 20 - Exercicio.");
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
        case 17:
            method_17();
            break;
        case 18:
            method_18();
            break;
        case 19:
            method_19();
            break;
        case 20:
            method_20();
            break;
        default:
            IO_pause(IO_concat("Valor diferente das opcoes (", IO_concat(IO_toString_d(x), ")")));
        } // end switch
    } while (x != 0);

    // encerrar
    IO_pause("Aperte <Enter> para terminar");
    return (0);
} // end main
