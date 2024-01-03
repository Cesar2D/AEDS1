/*
Exemplo0401 - v0.1 - __ / __ / _____
 Author: Vinicius Cesar DAscencao Dias
*/
// dependencias
#include "io.h" // para definicoes proprias
#include <stdio.h>
#include <stdbool.h>

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
 Funcao para determinar se valor inteiro e' par.
 @return true, se par; false, caso contrario
 @param x - valor a ser testado
*/
bool even(int x)
{
    // definir dado local
    bool result = false;
    // testar a condicao (resto inteiro (%) da divisao por 2 igual a zero)
    if (x % 2 == 0)
    {
        result = true;
    } // end if
    return (result);
} // end even()

/**
 Funcao para determinar se caractere e' letra minuscula.
 @return true, se par; false, caso contrario
 @param x - valor a ser testado
*/
bool isLowerCase(char x)
{
    // definir dado local
    bool result = false;

    // testar a condicao
    if ('a' <= x && x <= 'z')
    {
        result = true;
    }
    return (result);
} // end islowerCase()

/**
 Funcao para determinar se caractere e' digito.
 @return true, se par; false, caso contrario
 @param x - valor a ser testado
*/
bool isDigit(char x)
{
    // definir dado local
    bool result = false;

    // testar a condicao
    if ('0' <= x && x <= '9')
    {
        result = true;
    } // end if
} // end isDigit

/**
 Funcao para determinar se caractere e' digito.
 @return true, se par; false, caso contrario
 @param x - valor a ser testado
*/
bool isADigit(char x)
{
    return ('0' <= x && x <= '9');
} // end isADigit()

/**
 Funcao para determinar se caractere e' digito.
 @return true, se par; false, caso contrario
 @param x - valor a ser testado
*/
chars concatADigt(chars string, char digit)
{
    return (IO_concat(string, IO_toString_c(digit)));
} // end concatADigit()

/**
 Funcao para determinar se caractere e' maiuscula.
 @return true, se maiuscula; false, caso contrario
 @param x - valor a ser testado
*/
bool maiuscula(char x)
{   
    // variavel local
    bool result = false;
    
    // teste
    if( x >= 'A' && x <= 'Z')
    {
        result = true;
    }

    return result;
}   // end maiuscula()

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
    IO_id("Method02 - v0.2");

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
    // definir dados
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;

    // identificar
    IO_id("Method_04 - v0.4");

    // ler do teclado
    quantidade = IO_readint("Entre com uma quantidade: ");

    // repetir para a quantidade de vezes informada
    controle = 1;
    while (controle <= quantidade)
    {
        // ler valor do teclado
        valor = IO_readint(IO_concat(IO_concat("", IO_toString_d(controle)), ": "));

        // testar e contar se valor for positivo menor que 100 e par
        if (belongsTo(valor, 0, 100) && even(valor))
        {
            contador = contador + 1;
        } // end if

        // passar ao proximo valor
        controle = controle + 1;
    } // end while

    // mostrar a quantidade de valores positivo
    IO_printf("%s%d\n", "Positivos menores que 100 e pares = ", contador);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_04

/**
 Method_05 - Repeticao com teste no inicio e variacao.
*/

void method_05(void)
{
    // definir dado
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;
    bool ok = false;

    // identificar
    IO_id("EXEMPLO0405 - Method05 - v0.5");

    // ler do teclado
    quantidade = IO_readint("Entrar com uma quantidade: ");

    // repetir para a quntidade de vezes informada
    controle = 1;
    while (controle <= quantidade)
    {
        // ler valor do teclado
        valor = IO_readint(IO_concat(IO_concat("", IO_toString_d(controle)), ": "));

        // testar e contar e valor for positivo menor que 100 e par
        ok = belongsTo(valor, 0, 100);
        ok = ok && even(valor);
        if (ok)
        {
            contador = contador + 1;
        } // end if
    }

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_05

/**
 Method_06 - Repeticao sobre cadeia de caracateres.
*/

void method_06(void)
{
    // definir dado
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;

    // identificar
    IO_id("Method06 - v0.6");

    // ler do teclado
    palavra = IO_readstring("Entre com uma palavra: ");

    // determinar a quantidade de simbolos na palavra
    tamanho = strlen(palavra);

    // repetir para a quantidade de vezes informada
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        // isplar um simbolo por vez
        simbolo = palavra[posicao];
        // testar e contar se caractere e letra minuscula
        if (isLowerCase(simbolo))
        {
            contador = contador + 1;
        } // end if
    }     // end for

    // mostrar a quantidade de minusculas
    IO_printf("%s%d\n", "Minusculas = ", contador);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_06

/**
 Method_07 - Repeticao sobre cadeia de caracateres.
*/

void method_07(void)
{
    // definir dado
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;

    // identificar
    IO_id("Method07 - v0.7");

    // ler do teclado
    palavra = IO_readstring("Entre com uma palavra: ");

    // determinar a quantidade de simbolos na palavra
    tamanho = strlen(palavra);

    // repetir para a quantidade de vezes informada
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        // isplar um simbolo por vez
        simbolo = palavra[posicao];
        // testar e contar se caractere e letra minuscula
        if (isLowerCase(simbolo))
        {
            // mostrar
            IO_printf("%c", simbolo);

            // contar
            contador = contador + 1;
        } // end if
    }     // end for

    // mostrar a quantidade de minusculas
    IO_printf("\n%s%d\n", "Minusculas = ", contador);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_07

/**
 Method_08 - Repeticao com intervalos.
*/

void method_08(void)
{
    // definir dado
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;
    chars minusculas = IO_new_chars(STR_SIZE);

    strcpy(minusculas, STR_EMPTY); // vazio

    // identificar
    IO_id("Method08 - v0.8");

    // ler do teclado
    palavra = IO_readstring("Entrar com uma palavra: ");

    // determinar a quantidade de simbolos na palavra
    tamanho = strlen(palavra);

    // repetir para a quantidade de vezes informada
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        // isolar um simbolo por vez
        simbolo = palavra[posicao];

        // testar e contar as letras maiusculas de uma palavra
        if (isLowerCase(simbolo))
        {
            // concatenar simbolo encontrado
            minusculas = IO_concat(minusculas, IO_toString_c(simbolo));

            // contar
            contador = contador + 1;
        } // end if
    }     // end for

    // mostrar a quantidade de minusculas
    IO_printf("\n%s%d[%s]\n", "Minusculas = ", contador, minusculas);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_08

/**
 Method_09 - Repeticao com intervalos.
*/

void method_09(void)
{
    // definir dado
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;

    // identificar
    IO_id("Method09 - v0.9");

    // ler do teclado
    palavra = IO_readstring("Entrar com caracteres: ");

    // determinar a quantidade de simbolos
    tamanho = strlen(palavra);

    // repetir para a quantidade de vezes informada
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        // isolar um simbolo por vez
        simbolo = palavra[posicao];

        // testar e contar os algarismos em uma cadeia de caracteres
        if (isDigit(simbolo))
        {
            // mostrar
            IO_printf("%c", simbolo);

            // contar
            contador = contador + 1;
        } // end if

    } // end for

    // mostrar a quantidade de digitos
    IO_printf("\n%s%d\n", "Algarismos = ", contador);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_09

/**
 Method_10 - Repeticao com confirmacao.
*/
void method_10(void)
{
    // definir dado
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    chars digitos = IO_new_chars(STR_SIZE);

    strcpy(digitos, STR_EMPTY); // vazio

    // identificar
    IO_id("Method10 - v1.0");

    // ler do teclado
    palavra = IO_readstring("Entrar com uma palavra: ");

    // determinar a quantidade de simbolos na palavra
    tamanho = strlen(palavra);

    // repetir para a quantidade de vezes informada
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        // isolar um simbolo por vez
        simbolo = palavra[posicao];

        // testar e contar os algarismos em uma cadeia de caracteres
        if (isADigit(simbolo))
        {
            // concatenar simbolo encontrado
            digitos = concatADigt(digitos, simbolo);
        } // end if
    }     // end for

    // mostrar a quantidade de digitos
    IO_printf("\n%s%d [%s]\n", "Algarismos = ", strlen(digitos), digitos);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_10

/**
 Method_11 - Exercicio.
*/
void method_11(void)
{
    // definir dados
    double num1 = 0.0,
           num2 = 0.0,
           numeros = 0.0;

    int contIn = 0,
        contOut = 0,
        n = 0,
        y = 0;

    // identificar
    IO_id("Method11 - v1.1");

    // entradas
    n = IO_readint("Digite o numero de vezes: ");
    num1 = IO_readdouble("Digite o valor minimo: ");
    num2 = IO_readdouble("Digite o valor maximo: ");

    for (y = 0; y < n; y = y + 1)
    {
        numeros = IO_readdouble("\nDigite um numero: ");

        if (numeros >= num1 && numeros <= num2)
        {
            IO_printf("\nO valor esta entre %lf e %lf", num1, num2);
            contIn = contIn + 1;
        } // end if
        else
        {
            IO_printf("\nO valor esta fora de %lf e %lf", num1, num2);
            contOut = contOut + 1;
        } // emd else

    } // end for

    IO_printf("\nO numero de valores dentro do intervalo: %d", contIn);
    IO_printf("\nO numero de valores fora do intervalo: %d", contOut);

    // encerrar
    IO_pause("Aperte <Enter> para terminar");

} // endmethod_11

/**
 Method_12 - Exercicio.
*/
void method_12(void)
{
    // definir dados
    chars palavra = IO_new_chars(STR_SIZE);
    int y = 0, tamanho = 0, cont = 0;

    palavra = IO_readstring("Digite uma palavra: ");
    tamanho = strlen(palavra);

    for(y = 0; y < tamanho; y = y + 1)
    {
        if(maiuscula(palavra[y]))
        {
            if(palavra[y] > 'K')
            {
                IO_printf("\n%d. [%c]", y, palavra[y]);
                cont = cont + 1;
            } // end if 2
        } // end if 1
    } // end for

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
        IO_id("EXEMPLO0412 - Programa - v1.2");

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
        default:
            IO_pause(IO_concat("Valor diferente das opcoes (", IO_concat(IO_toString_d(x), ")")));
        } // end switch
    } while (x != 0);

    // encerrar
    IO_pause("Aperte <Enter> para terminar");
    return (0);
} // end main
