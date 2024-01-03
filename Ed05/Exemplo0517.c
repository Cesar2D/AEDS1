/*
Exemplo0501 - v0.1 - __ / __ / _____
 Author: Vinicius Cesar DAscencao Dias
*/
// dependencias
#include "io.h" // para definicoes proprias
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/**
 Method_01a - Mostrar certa quantidade de valores.
 @param x - quantidade de valores a serem mostrados
*/
void method_01a(int x)
{
    // definir dado local
    int y = 1; // controle

    // repetir enquanto controle menor que a quantidade desejada
    while (y <= x)
    {
        // mostrar valor
        IO_printf("%s%d\n", "Valor = ", y);

        // passar pro proximo
        y = y + 1;
    } // end while
} // end method_01a

/**
 Method_02a - Mostrar certa quantidade de valores pares.
 @param x - quantidade de valores a serem mostrados
*/
void method_02a(int x)
{
    // definir dado local
    int y = 1; // controle
    int z = 2;

    // repetir enquanto controle menor que a quantidade desejada
    while (y <= x)
    {
        // mostrar valor
        IO_printf("%d: %d\n", y, z);

        // passar ao proximo par
        z = z + 2;

        // passar ao proximo valor controlado
        y = y + 1;
    } // end while
} // end method_02a

/**
 Method_03a - Mostrar certa quantidade de valores pares.
 @param x - quantidade de valores a serem mostrados
*/
void method_03a(int x)
{
    // definir dado local
    int y = 1; // controle
    int z = 0;

    // repetir enquanto controle menor que a quantidade desejada
    while (y <= x)
    {
        // vincular o valor a ser mostrado ao controle
        z = 2 * y;

        // mostrar valor
        IO_printf("%d: %d\n", y, z);

        // passar ao proximo valor controlado
        y = y + 1;
    } // end while
} // end method_03a

/**
 Method_04a - Mostrar certa quantidade de valores pares.
 @param x - quantidade de valores a serem mostrados
*/
void method_04a(int x)
{
    // definir dado local
    int y = x; // controle
    int z = 0;

    // repetir enquanto controle menor que a quantidade desejada
    while (y > 0)
    {
        // vincular o valor a ser mostrado ao controle
        z = 2 * y;

        // mostrar valor
        IO_printf("%d: %d\n", y, z);

        // passar ao proximo valor controlado

        y = y - 1;
    } // end while
} // end method_04a

/**
 Method_05a - Mostrar certa quantidade de valores pares.
 @param x - quantidade de valores a serem mostrados
*/
void method_05a(int x)
{
    // definir dado local
    int y = 0; // controle

    // repetir enquanto controle menor que a quantidade desejada
    for (y = x; y > 0; y = y - 1)
    {
        // mostrar valor
        IO_printf("%d: %d\n", y, (2 * y));
    } // end for
} // end method_05a

/**
 somarValores - funcao para somar certa quantidade de pares.
 @return soma dos valores
 @param x - quantidade de valores a serem mostrados
*/
int somarValores(int x)
{
    // definir dados locais
    int soma = 1;
    int y = 0; // controle

    // repetir enquanto controle menor que a quantidade desejada
    for (y = 1; y <= (x - 1); y = y + 1)
    {
        // mostrar valor
        IO_printf("%d: %d\n", y, (2 * y));

        // somar valor
        soma = soma + (2 * y);
    } // end for

    // retornar resultado
    return (soma);
} // end somarValores

/**
 somarFracao1 - funcao para somar certa quantidade de fracoes.
 @return soma dos valores
 @param x - quantidade de valores a serem mostrados
*/
double somarFracao1(int x)
{
    // definir dados locais
    double soma = 1.0;
    double numerador = 0.0;
    double denominador = 0.0;
    int y = 0; // controle

    // repetir enquanto controle menor que a quantidade desejada
    for (y = 1; y <= (x - 1); y = y + 1) // erro no exemplo, esta y - 1 mas o correto e y + 1
    {
        // calcular numerador
        numerador = 1.0;

        // calcular denominador
        denominador = 2.0 * y;

        // mostrar valor
        IO_printf("%d: %7.4lf%7.4lf = %lf\n", y, numerador, denominador, (numerador / denominador));

        // somar valor
        soma = soma + (1.0) / (2.0 * y);
    } // end for

    // retornar resultado
    return (soma);
} // end somarFracao1

/**
 somarFracao2 - funcao para somar certa quantidade de fracoes.
 @return soma dos valores
 @param x - quantidade de valores a serem mostrados
*/
double somarFracao2(int x)
{
    // definir dados locais
    double soma = 1.0;
    double numerador = 0.0;
    double denominador = 0.0;
    int y = 0; // controle

    // mostrar primeiro valor
    IO_printf("%d: %7.4lf/%7.4lf\n", 1, 1.0, soma);

    // repetir enquanto controle menor que a quantidade desejada
    for (y = 1; y <= (x - 1); y = y + 1)
    {
        // calcular numerador
        numerador = 2.0 * y - 1;

        // calcular denominado
        denominador = 2.0 * y;

        // mostrar valor
        IO_printf("%d: %7.4lf/%7.4lf = %lf\n", y + 1, numerador, denominador, (numerador / denominador));

        // somar valor
        soma = soma + numerador / denominador;
    } // end for

    // retornar resultado
    return (soma);
} // end somarFracao2

/**
 somarFracao3 - funcao para somar certa quantidade de fracoes.
 @return soma dos valores
 @param x - quantidade de valores a serem mostrados
*/
double somarFracao3(int x)
{
    // definir dados locais
    double soma = 1.0;
    int y = 0; // controle

    // mostrar primeiro valor
    IO_printf("%d: %7.4lf/%7.4lf\n", 1, 1.0, soma);

    // repetir enquanto controle menor que a quantidade desejada
    for (y = 1; y < x; y = y + 1)
    {
        // mostrar valor
        IO_printf("%d: %7.4lf/%7.4lf = %7.4lf\n", y + 1, (2.0 * y), (2.0 * y + 1), ((2.0 * y) / (2.0 * y + 1)));

        // somar valor
        soma = soma + (2.0 * y) / (2.0 * y + 1);
    } // end for

    // retornar resultado
    return (soma);
} // end somarFracao3

/**
 multiplicarValores - funcao para multiplicar certa quantidade de valores impares.
 @return produto de valores
 @param x - quantidade de valores
*/
int multipicarValores(int x)
{
    // definir dados locais
    int produto = 1;
    int y = 0; // controle

    // repetir enquanto controle menor que a quantidade desejada
    for (y = 1; y <= x; y = y + 1)
    {
        // motrar valor
        IO_printf("%d: %d\n", y, (2 * y - 1));

        // somar valor
        produto = produto * (2 * y - 1);
    } // end for

    // retornar resultado
    return (produto);
} // end multipicarValores

void mult7(int x)
{
    // definir variaveis local
    int y = 0;

    for (y = 0; y < x; y = y + 1)
    {
        IO_printf("%d: [%d]\n", y, y * 7);
    }

} // end mult7()

void mult4e3(int x)
{
    // definir dado local
    int y = 0, z = 0;

    for (y = 1; y <= x; y = y + 1)
    {
        z = y * 12;
        IO_printf("%d: [%d]\n", y, z);
    }

} // end mult4e3

void pot5(int x)
{
    // definir dados internos
    int n = 0;
    double z = 0.0;
    n = x;

    while (n >= 1)
    {
        // z = pow(5, n);

        IO_printf("%d: [%.0lf]\n", n, z);
        n = n - 1;
    } // end for

} // end pot5()

void mais7(int x)
{
    // definir dado local
    double n = 1, z = 0;
    double t = 0;

    while (n <= x)
    {
        z = n * 7;

        t = 1.0 / (double)z;

        printf("%.0lf: 1 / %.0lf [%.2lf]\n", n, z, t);

        n = n + 1;
    } // end for
} // end mais7()

void divPot(int x, double y)
{
    double cont = 1.0, pote = 0.0;
    double divi = 0.0, total = 0.0;

    while (cont <= x)
    {
        pote = cont;
        divi = pow(y, pote);
        total = 1 / divi;

        cont = cont + 1;
        pote = (pote * 2) - 1;

        printf("%.0lf: 1 / %.0lf^%.0lf = [%.2lf]\n", cont, y, pote, total);
        printf("%.0lf %.0lf\n\n", cont, pote);
    } // end while

} // end divPot()

int naoMult4(int x)
{
    // definir dado local
    double cont = 0.0;
    int vari = 0, somat = 0;

    while (cont <= x)
    {
        vari = cont * 3;

        if ((vari % 4 != 0))
        {
            printf("%.0lf: %d\n", cont, vari);

            somat = (vari) + (cont * 3) + 3;
        }
        cont = cont + 1;

    } // end while

    return (somat);
} // end naoMult4

bool par(int x)
{
    return (x % 2 == 0);
} // par

double somInv(int x)
{
    // definir variavel local
    double result = 6.0;
    double divid = 1.0; // dividendo
    double divis = 0.0; // divisor
    int cont = 1;       // contador

    while (cont <= x)
    {
        // somatoria de 7
        divis = divis + 7.0;

        result = result + (divid / divis);

        if ((par(result)) && (int)result % 5 != 0 )
        {
            printf("1 / %.0lf\n", divis);
        }

        cont = cont + 1;
    } // end while

    return (result);
} // end somInv()

/* < -- funcoes principais -- > */

/**
 * Method_00 - não faz nada
 */

void method_00(void)
{
    // nao faz nada
} // end method_00

/**
 Method_01 - Mostrar certa quantidade de valores.
 OBS.: Preparacao e disparo de outro metodo.
*/
void method_01(void)
{
    // identificar
    IO_id("Method_01 - v0.1");

    // executar o metodo auxiliar
    method_01a(5);

    // encerrar
    IO_pause("Eperte <Enter> para continuar");
} // end method_01

/**
 * Method_02.
 */

void method_02(void)
{
    // identificar
    IO_id("Method_02 - v0.2");

    // executar o metodo auxiliar
    method_02a(5);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_02

/**
 Method_03 - Repeticao com teste no inicio.
*/

void method_03(void)
{
    // identificar
    IO_id(" Method_03 - v0.3");

    // executar o methodo auxiliar
    method_03a(5);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_03

/**
 Method_04.
*/

void method_04(void)
{
    // identificar
    IO_id("Method_04 - v0.4");

    // executar o metodo auxiliar
    method_04a(5);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_04

/**
 Method_05.
*/

void method_05(void)
{
    // identificar
    IO_id("Method_05 - v0.5");

    // executar o methodo auxiliar
    method_05a(5);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_05

/**
 Method_06.
*/

void method_06(void)
{
    // definir dado
    int soma = 0;

    // identificar
    IO_id("Method_06 - v0.6");

    // chamar e receber resultado da funcao
    soma = somarValores(5);

    // mostrar resultado
    IO_printf("Soma de pares = %d\n", soma);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_06

/**
 Method_07.
*/

void method_07(void)
{
    // definir dado
    double soma = 0.0;

    // identificar
    IO_id("Method_07 - v0.7");

    // chamar e receber resultado da funcao
    soma = somarFracao1(5);

    // mostrar resultado
    IO_printf("soma de fracoes = %lf\n", soma);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_07

/**
 Method_08 - Repeticao com intervalos.
*/

void method_08(void)
{
    // definir dado
    double soma = 0.0;

    // identificar
    IO_id("Method_08 - v0.8");

    // chamar e receber resultado da funcao
    soma = somarFracao2(5);

    // mostrar resultado
    IO_printf("soma de fracoes = %lf\n", soma);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_08

/**
 Method_09 - Repeticao com intervalos.
*/

void method_09(void)
{
    // definir dado
    double soma = 0.0;

    // identificar
    IO_id("Method_09 - v0.9");

    // chamar e receber resultado da funcao
    soma = somarFracao3(5);

    // mostrar resultado
    IO_printf("soma de fracoes = %lf\n", soma);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_09

/**
 Method_10 - Repeticao com confirmacao.
*/
void method_10(void)
{
    // identificar
    IO_id("Method_10 - v1.0");

    // mostrar produto de valores
    IO_printf("%s%d\n", "produto = ", multipicarValores(5));

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_10

/**
 Method_11 - Exercicio.
*/
void method_11(void)
{
    // definir dados
    int n = 0;

    // identificar
    IO_id("Method_11 - v1.1");

    // entrada
    n = IO_readint("Digite o numero de vezes: ");

    // chamada do metodo
    mult7(n);

    // encerrar
    IO_pause("Aperte <Enter> para terminar");

} // endmethod_11

/**
 Method_12 - Exercicio.
*/
void method_12(void)
{
    // definir dado
    int n = 0;

    // identificar
    IO_id("Method_12 - v1.2");

    // entrada
    n = IO_readint("Digite o numero de vezes: ");

    // chamada da funcao
    mult4e3(n);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_12

/**
 Method_13 - Exercicio.
*/
void method_13(void)
{
    // definir dados
    int n = 0;

    // entradas
    n = IO_readint("Digite o numero de vezes: ");

    // chamada da funcao
    pot5(n);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_13

/**
 Method_14 - Exercicio.
*/
void method_14(void)
{
    // definir dados
    int n = 0;

    // entradas
    n = IO_readint("Digite o numero de vezes: ");

    // chamada da funcao
    mais7(n);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_14

void method_15(void)
{
    // definir dados
    int n = 0;
    double m = 0;

    n = IO_readint("Digite o numero de vezes: ");
    m = IO_readint("Digite o numero da base: ");

    divPot(n, m);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_15

void method_16(void)
{
    // definir dados
    int n = 0, m = 0;

    // entrada
    n = IO_readint("Digite o numero de vezes: ");

    // chamada da funcao
    m = naoMult4(n);

    IO_printf("o valor da soma e: %d", m);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_16

void method_17(void)
{
    int n = 0;
    double m = 0.0;

    // Solicita o número de vezes
    n = IO_readint("Digite o numero de vezes: ");

    // Chamada da função
    m = somInv(n);

    // saida
    IO_printf("A soma dos valores e: %.4lf", m);

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
        IO_id("EXEMPLO0517 - Programa - v1.7");

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
