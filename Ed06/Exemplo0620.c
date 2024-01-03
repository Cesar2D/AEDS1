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
 Method_01a - Mostrar certa quantidade de valores recursivamente.
 @param x - quantidade de valores a serem mostrados
*/
void method_01a(int x)
{
    // repetir enquanto valor maior que zero
    if (x > 0)
    {
        // mostrar valor
        IO_printf("%s%d\n", "Valor = ", x);

        // passar ao proximo
        method_01a(x - 1); // motor da recursividade
    }                      // end if
} // end method_01a()

/**
 Method_02a - Mostrar certa quantidade de valores recursivamente.
 @param x - quantidade de valores a serem mostrados
*/

/**
 Method_01.
*/
void method_01(void)
{
    // definir dado

    // identificar
    IO_id("Method_01 - v0.1");

    // executar o metodo auxiliar
    method_01a(5); // motor da recursividade

    // encerrar
    IO_pause("Eperte <Enter> para continuar");
} // end method_01()

/**
    method_02a
*/
void method_02a(int x)
{
    // repetir enquanto valor maior que zero
    if (x > 0)
    {
        // passar ao proximo
        method_02a(x - 1); // motor da recursividade

        // mostrar valor
        IO_printf("%s%d\n", "Valor = ", x);
    } // end if
} // end method_02a()

/**
 * Method_02.
 */

void method_02(void)
{
    // identificar
    IO_id("Method_02 - v0.2");

    // executar o metodo auxiliar
    method_02a(5); // motor da recursividade

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_02()

/**
 Method_03a - Mostrar certa quantidade de valores recursivamente.
 @param x - quantidade de valores a serem mostrados
*/
void method_03a(int x)
{
    // repetir enquanto valor maior que zero
    if (x > 1)
    {
        // passar ao proximo
        method_03a(x - 1); // motor de recursividade

        // mostrar valor
        IO_printf("%s%d\n", "Valor = ", x);
    } // end if
    else
    { // base da recursividade
        // mostrar o ultimo
        IO_printf("%s\n", "Valor = 1");
    } // end else
} // end method_03a()

/**
 Method_03
*/

void method_03(void)
{
    // identificar
    IO_id("Method_03 - v0.3");

    // executar o metodo auxiliar
    method_03a(5); // motor da recursividade

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_03()

/**
 Method_04a - Mostrar certa quantidade de valores recursivamente.
 @param x - quantidade de valores a serem mostrados
*/
void method_04a(int x)
{
    // repetir enquanto valor maior que zero
    if (x > 1)
    {
        // passar ao proximo
        method_04a(x - 1); // motor da recursividade

        // mostrar valor
        IO_printf("%s%d\n", "Valor = ", 2 * (x - 1));
    } // end if
    else
    {
        // mostrar o ultimo
        IO_printf("%s\n", "Valor = 1");
    } // end else
} // end method_04a()

/**
 Method_04.
*/

void method_04(void)
{
    // identificar
    IO_id("Method_04 - v0.4");

    // executar o metodo auxiliar
    method_04a(5); // motor da recursividade

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_04()

/**
 Method_05a - Mostrar certa quantidade de valores recursivamente.
 @param x - quantidade de valores a serem mostrados
*/
void method_05a(int x)
{
    // repetir enquanto valor maior que zero
    if (x > 1)
    {
        // passar ao proximo
        method_05a(x - 1); // motor da recursividade

        // mostrar valor
        IO_printf("%d: %d/%d\n", x, (2 * (x - 1)), (2 * (x - 1) + 1));
    } // end if
    else
    { // base da recursividade
        // mostrar o ultimo
        IO_printf("%d; %d\n", x, 1);
    } // end else
} // end method_05a()

/**
 Method_05.
*/

void method_05(void)
{
    // identificar
    IO_id("Method_05 - v0.5");

    // executar o metodo auxiliar
    method_05a(5); // motor da recursividade

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_05

/**
 somarFracoes - Somar certa quantidade de fracoes recursivamente.
 @return soma de valores
 @param x - quantidade de valores a serem mostrados
*/
double somarFracoes(int x)
{
    // definir dado local
    double soma = 0.0;

    // repetir enquanto valor maior que zero
    if (x > 1)
    {
        // separar um valor e passar ao proximo ( motor da recursividade)
        soma = (2.0 * (x - 1)) / (2.0 * (x - 1) + 1) + somarFracoes(x - 1);

        // mostrar valor
        IO_printf("%d: %lf/%lf\n", x, (2.0 * (x - 1)), (2.0 * (x - 1) + 1));
    } // end if
    else
    {
        // base da recursividade
        soma = 1.0;

        // mostrar o ultimo
        IO_printf("%d; %lf\n", x, 1.0);
    } // end else

    // retornar resultado
    return (soma);
} // end somarFracoes()

/**
 Method_06.
*/

void method_06(void)
{
    // definir dado
    double soma = 0.0;

    // identificar
    IO_id("Method_06 - v0.1");
    // chamar a funcao e receber o resultado
    soma = somarFracoes(5);

    // mostrar resultado
    IO_printf("soma = %lf\n", soma);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_06

/**
 somarFracoes2b - Somar certa quantidade de fracoes recursivamente.
 @return soma de valores
 @param x - quantidade de valores a serem mostrados (controle)
 @param soma - valor atual da soma (historia = memoria)
 @param numerador - numerador da parcela a ser somada
 @param denominador - denominador da parcela a ser somada
*/
double somarFracoes2b(int x, double soma, double numerador, double denominador)
{
    // repetir enquanto valor maior que zero
    if (x > 0)
    {
        // mostrar valores atuais
        IO_printf("%d: %lf/%lf\n", x, numerador, denominador);

        // somar o termo atual e passar ao proximo (motor da recursividade)
        soma = somarFracoes2b(x - 1, soma + ((1.0 * numerador) / denominador), numerador + 2.0, denominador + 2.0);
    } // end if

    // retornar resultados
    return (soma);
} // end somarFracoes2b()

/**
 somarFracoes2a - Somar certa quantidade de fracoes.
 Funcao de servico para preparar e
 disparar o mecanismo recursivo.
 @return soma de valores
 @param x - quantidade de valores a serem mostrados
*/
double somarFracoes2a(int x)
{
    // definir dado local
    double soma = 0.0;

    // repetir enquanto valor maior que zero
    if (x > 0)
    {
        // mostrar o ultimo
        IO_printf("%d: %lf\n", x, 1.0);

        // preparar a soma do valor atual e o proximo
        soma = somarFracoes2b(x - 1, 1.0, 2.0, 3.0);
    } // end if

    // retornar resultado
    return (soma);

} // end somarFracoes2a()

/**
 Method_07.
*/

void method_07(void)
{
    // definir dado
    double soma = 0.0;

    // identificar
    IO_id("Method_07 - v0.7");

    // chamar a funcao e receber o resultado
    soma = somarFracoes2a(5);

    // mostrar resultado
    IO_printf("soma = %lf\n", soma);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_07()

/**
 contarDigitos - Contar digitos recursivamente.
 @return quantidade de digitos
 @param x - numero cuja quantidade de digitos sera' calculada
*/
int contarDigitos(int x)
{
    // definir dados
    int resposta = 1; // base

    // testar se contador valido
    if (x >= 10)
    {
        // tentar fazer de novo com valor menor
        resposta = 1 + contarDigitos(x / 10); // motor 1
    }                                         // end if
    else
    {
        if (x < 0)
        {
            // fazer de novo com valor absoluto
            resposta = contarDigitos(-x); // motor 2
        }                                 // end if 2
    }                                     // end else

    // RETORNAR RESPOSTA
    return (resposta);
} // end contarDigitos()

/**
 Method_08.
*/

void method_08(void)
{
    // identificar
    IO_id("Method_08 - v0.8");

    // mostrar resultado
    IO_printf("digitos (%3d) = %d\n", 123, contarDigitos(123));
    IO_printf("digitos (%3d) = %d\n", 1, contarDigitos(1));
    IO_printf("digitos (%3d) = %d\n", -10, contarDigitos(-10));

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_08

/**
 fibonacci - Gerador de numero de Fibonacci.
 @return numero de Fibonacci
 @param x - numero de ordem cujo valor sera' calculado
*/
int fibonacci(int x)
{
    // definir dado
    int resposta = 0;

    // testar se contador valido
    if (x == 1 || x == 2)
    {
        // primeiros dois valores iguais a 1
        resposta = 1; // bases
    }                 // end if
    else
    {
        if (x > 1)
        {
            // fazer de novo com valor absoluto
            resposta = fibonacci(x - 1) + fibonacci(x - 2);
        } // end if 2
    }     // end else

    // retornar resposta
    return (resposta);
} // end fibonacci()

/**
 Method_09.
*/

void method_09(void)
{
    // identificar
    IO_id("Method_09 - v0.9");

    // calcular numero de fibonacci
    IO_printf("fibonacci (%d) = %d\n", 1, fibonacci(1));
    IO_printf("fibonacci (%d) = %d\n", 2, fibonacci(2));
    IO_printf("fibonacci (%d) = %d\n", 3, fibonacci(3));
    IO_printf("fibonacci (%d) = %d\n", 4, fibonacci(4));
    IO_printf("fibonacci (%d) = %d\n", 5, fibonacci(5));

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_09

/**
 contarMinusculas - Contador de letras minusculas.
 @return quantidade de letras minusculas
 @param x - cadeia de caracteres a ser avaliada
*/
int contarMinuscula(chars cadeia, int x)
{
    // definir dado
    int resposta = 0;

    // testar se contador valido
    if (0 <= x && x < strlen(cadeia))
    {
        // testar se letra minuscula
        if (cadeia[x] >= 'a' && cadeia[x] <= 'z')
        {
            // fazer de novo com valor absoluto
            resposta = 1;
        } // end if 2
        resposta = resposta + contarMinuscula(cadeia, x + 1);
    } // end if

    // retornar resposta
    return (resposta);
} // end contarMinusculas()

/**
 Method_10.
*/
void method_10(void)
{
    // identificar
    IO_id("Method_10 - 1.0");

    // contar minusculas em cadeias de caracteres
    IO_printf("Minusculas (\"abc\", 0) = %d\n", contarMinuscula("abc", 0));
    IO_printf("Minusculas (\"aBc\", 0) = %d\n", contarMinuscula("aBc", 0));
    IO_printf("Minusculas (\"AbC\", 0) = %d\n", contarMinuscula("AbC", 0));

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_10

int method_11a(int x, int valAtu)
{
    int resultado = 0;
    if (x > 0) // condicao
    {
        if (valAtu % 2 == 0) // condicao para par
        {
            resultado = valAtu + method_11a(x - 1, valAtu + 2); // recursividade
            IO_printf("depois: %d\n", resultado);               // exibicao
        }                                                       // end if
        else
        {
            resultado = resultado + method_11a(x, valAtu + 1); // base
        }                                                      // end else
    }
    return (resultado);
} // end method_11a

int method_11b(int x, int y)
{
    int resultado = 0;
    resultado = 7 + method_11a(x, y);
    return (resultado);

} // end method_11b()

/**
 Method_11 - Exercicio.
*/
void method_11(void)
{
    int n = 0, m = 0;

    n = IO_readint("Digite o numero de vezes: ");

    m = method_11b(n, 1);

    IO_printf("a soma e: %d", m);

    // encerrar
    IO_pause("Aperte <Enter> para terminar");

} // endmethod_11()

/**
 Method_01a - Mostrar certa quantidade de valores recursivamente.
 @param x - quantidade de valores a serem mostrados
*/
void method_12a(int x)
{
    int resultado = 0;

    // repetir enquanto valor maior que zero
    if (x > 0)
    {
        // calculo matematico
        resultado = (7 * x);
        // mostrar valor
        IO_printf("%s%d\n", "Valor = ", resultado);

        // passar ao proximo
        method_12a(x - 1);

    } // end if
} // end method_01a()

/**
 Method_12 - Exercicio.
*/
void method_12(void)
{
    int n = 0;

    // entrada
    n = IO_readint("Digite o numero de vezes: ");

    // chamada da funcao
    method_12a(n);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_12

void method_13a(int x, int y)
{
    int resultado = 0;

    if (x == y)
    {
        resultado = 1;
        IO_printf("[%d] = %d\n", x, resultado);
        method_13a(x - 1, y);
    }
    else if (x > 0)
    {
        resultado = (7 * x);
        method_13a(x - 1, y);
        printf("[%d] = %d\n", x, resultado);
    }

} // end method_13a()

/**
 Method_13 - Exercicio.
*/
void method_13(void)
{
    int n = 0;

    n = IO_readint("Digite o numero de vezes: ");

    method_13a(n, n);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_13

void method_14a(int x, int y)
{
    int resultado = 0;

    if (x == y)
    {
        resultado = 1;
        method_14a(x - 1, y);
        IO_printf("[%d] = %d\n", x, resultado);
    }
    else if (x > 0)
    {
        resultado = (7 * x);
        printf("[%d] = 1 / %d\n", x, resultado);
        method_14a(x - 1, y);
    }
} // end method_14a()

/**
 Method_14 - Exercicio.
*/
void method_14(void)
{
    int n = 0;

    n = IO_readint("Digite o numero de vezes: ");

    method_14a(n, n);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_14

int method_15a(int x)
{
    int resultado = 0;
    if (x > 0)
    {
        resultado = 7 + (2 * x) + method_15a(x - 1);
        printf("[%d] %d\n", x, resultado);
    }

    return (resultado);

} // end method_15a()

void method_15(void)
{
    int n = 0;
    int m = 0;

    n = IO_readint("Digite o numero de vezes: ");

    m = method_15a(n);

    printf("[%d]\n", m);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_15

double method_16a(int x)
{
    double resultado = 0;
    if (x > 0)
    {
        resultado = 1.0 / (7 + (2 * x) + method_16a(x - 1));
        printf("[%d] = %lf\n", x, resultado);
    }

    return (resultado);

} // end method_16a()
void method_16(void)
{
    int n = 0;
    double m = 0.0;

    n = IO_readint("Digite o numero de vezes: ");

    m = method_16a(n);

    printf("[%lf]\n", m);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_16

void method_17a(chars x, int y)
{
    if (y >= 0)
    {
        method_17a(x, y - 1);
        printf("[%c]\n", x[y]);
    }

} // end method_17a()

void method_17(void)
{
    chars palavra = "abc";
    int tamanho = 0;

    palavra = IO_readstring("Digite uma palavra: ");

    tamanho = strlen(palavra) - 1;

    method_17a(palavra, tamanho);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_17

int method_18a(chars s, int x)
{
    int resultado = 0;

    if (x > 0)
    {
            if (s[x] % 2 == 0)
            {
                resultado = 1 + method_18a(s, x - 1);
            }
            else
            {
                resultado = 0 + method_18a(s, x - 1);
            }
    }
    return (resultado);
}

void method_18(void)
{
    int tamanho = 0;
    chars palavra = "abc";
    int m = 0;

    palavra = IO_readstring("Digite uma palavra: ");
    tamanho = strlen(palavra);

    m = method_18a(palavra, tamanho);

    IO_printf("[%d]\n", m);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_18

bool maiMAioresK(char c)
{
    return (c >= 'K' && c <= 'Z');
}
int method_19a(chars s, int x)
{
    int resultado = 0;

    if (x >= 0)
    {
        if (maiMAioresK(s[x]))
        {
            resultado = 1 + method_18a(s, x - 1);
            printf("%c\n", s[x]);
        }
        else
        {
            resultado = 0 + method_18a(s, x - 1);
        }
    }
    return (resultado);
}
void method_19(void)
{
    int tamanho = 0;
    chars palavra = "abc";
    int m = 0;

    palavra = IO_readstring("Digite uma palavra: ");

    tamanho = strlen(palavra);
    printf("tamanho = %d\n", tamanho);

    m = method_18a(palavra, tamanho);

    printf("[%d]\n", m);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_18

int method_20a(int x, int y, int z)
{
    int resultado = 0;
    int temp = 0;

    if(x > 0)
    {
        temp = x + y;
        x = y;
        printf("%d\n", temp);
        resultado = temp + method_20a(x - 1, y, temp); 
    }

} // end method_20a()
void method_20(void)
{
    int n = 0;
    int m = 0;

    n = IO_readint("Digite o numero de vezes: ");

    m = fibonacci(n);

    printf("[%d]\n", m);

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
        IO_id("EXEMPLO0620 - Programa - v2.0");

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
