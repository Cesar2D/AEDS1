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

/**
 * Method_04.
 */

void method_04(void)
{
    // definir dado
    double x = 0.0; // definir variavel com valor inicial

    // identificar
    IO_id("EXEMPLO0204 - Programa - v0.4");

    // ler do teclado
    x = IO_readdouble("Entrar com um valor real: ");

    // testar valor
    if (1.0 <= x && x <= 10.0)
    {
        IO_printf("%s(%lf)\n", "Valor dentro do intervalo [1:10] ", x);
    } // end if 1
    else
    {
        IO_printf("%s(%lf)\n", "Valor fora do intervalo [1:10] ", x);
        if (x < 1.0)
        {
            IO_printf("%s(%lf)\n", "Valor abaixo do itervalo[1:10] ", x);
        } // end if 2
        else
        {
            IO_printf("%s(%lf)\n", "Valor acima do intervalo [1:10] ", x);
        } // end else 2
    }     // end else 1

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_04

/**
 * Method_05.
 */

void method_05()
{
    // definir dado
    char x = '_'; // definir variavel com valor inicial

    // identificar
    IO_id("MEthod_05 - Programa - v0.0");

    // ler do teclado
    x = IO_readchar("Entrar com um caractere: ");

    // testar valor
    if (('a' <= x) && (x <= 'z'))
    {
        IO_printf("%s(%c)\n", "Letra minuscula ", x);
    } // end if 1
    else
    {
        IO_printf("%s(%c)\n", "valor diferente de minuscula ", x);
        if (('A' <= x) && (x <= 'Z'))
        {
            IO_printf("%s(%c)\n", "Letras maiuscula ", x);
        } // end if 2
        else
        {
            if (('0' <= x) && (x <= '9'))
            {
                IO_printf("%s(%c)\n", "Algarismo ", x);
            } // end if 3
            else
            {
                IO_printf("%s(%c)\n", "Valor diferente de algarismo ", x);
            } // end else 3
        }     // end else 2
    }         // end else 1
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_05

/**
 * Method_06.
 */

void method_06(void)
{
    // definir dado
    char x = '_'; // definir variavel com valor inicial

    // identificar
    IO_id("Method_06 - Programa - v0.6");

    // ler do teclado
    x = IO_readchar("Entar com um caractere: ");

    // testar valor
    if (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z')) // minuscula ou maiuscula
    {
        IO_printf("%s(%c)\n", "Letra ", x);
    } // end if
    else
    {
        IO_printf("%s(%c)\n", "Valor diferente de letra", x);
    } // end else

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_06

/**
 * Method_07.
 */

void method_07()
{
    // definir dados
    char x = '_'; // definir variavel com valor inicial

    // identificar
    IO_id("Method_07 - Programa - v0.0");

    // ler do teclado
    x = IO_readchar("Entre com um caractere: ");

    // testar valor
    if (!(('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))) // nao (maiuscula ou minuscula)
    {
        IO_printf("%s(%c)\n", "Valor diferente de letra ", x);
    } // end if
    else
    {
        IO_printf("%s(%c)\n", "Letra ", x);
    } // end else

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end methot_07

/**
 * Method_08.
 */

void method_08(void)
{
    // definir dado
    char x = '_'; // definir variavel com valor inicial

    // identificar
    IO_id("Method_08 - Programa - v0.8");

    // ler do teclado
    x = IO_readchar("Entre com um caractere['0','A','a']: ");

    // testar valor
    switch (x)
    {
    case '0':
        IO_printf("%s(%c = %d)\n", "Valor igual do simbolo '0' ", x, x);
        break;
    case 'A':
        IO_printf("%s(%c = %d)\n", "Valor igua a letra 'A' ", x, x);
        break;
    case 'a':
        IO_printf("%s(%c = %d)\n", "Valor igual a letra 'a' ", x, x);
        break;
    default: // se nao alguma das opcoes anteriores
        IO_printf("%s(%c = %d)\n", "Valor diferente das opcoes['0','A','a']: ", x, x);
        break;
    } // end switch

    // encerrar
    IO_pause("Apertar <Enter> para continuar");
} // end method_08

/**
 * Method_09.
 */

void method_09()
{
    // definir dado
    int x = 0; // definir variavel com valor inicial

    // identificar
    IO_id("Method_09 - Programa - v0.9");

    // ler do teclado
    x = IO_readint("Entrar com um inteiro[0,1,2,3]: ");

    // testar valor
    switch (x)
    {
    case 0:
        IO_printf("%s(%d)\n", "Valor igual a zero ", x);
        break;
    case 1:
        IO_printf("%s(%d)\n", "Valor igual a um ", x);
        break;
    case 2:
        IO_printf("%s(%d)\n", "Valor igual a dois ", x);
        break;
    case 3:
        IO_printf("%s(%d)\n", "Valor igual a tres ", x);
        break;
    default: // se nao for alguma das opcoes anteriores
        IO_printf("%s(%d)\n", "Valor diferente das opcoes[0,1,2,3] ", x);
        break;
    } // end switch

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_09

/**
 * Method_10.
 */

void method_10()
{
    // definir dado
    int x = 0; // definir variavel com valor incial

    // identificar
    IO_id("Method_10 - Programa - v1.0");

    // ler do teclado
    x = IO_readint("Entrar com um inteiro[0,1,2,3]: ");

    // testar valor
    switch (x)
    {
    case 0:
        IO_println(IO_concat("Valor igual a zero (", IO_concat(IO_toString_d(x), ")\n")));
        break;
    case 1:
        IO_println(IO_concat("Valor igual a um (", IO_concat(IO_toString_d(x), ")\n")));
        break;
    case 2:
        IO_println(IO_concat("Valor igual a dois (", IO_concat(IO_toString_d(x), ")\n")));
        break;
    case 3:
        IO_println(IO_concat("Valor igual a tres (", IO_concat(IO_toString_d(x), ")\n")));
        break;
    default: // se nao for alguma das opcoes anteriores
        IO_println(IO_concat("valor diferente das opcoes[0,1,2,3] (", IO_concat(IO_toString_d(x), ")")));
    } // end switch

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_10

/**
 * Method_11.
 */

void method_11(void)
{
    // dados
    int val = 0;
    int res = 0;

    // identificar
    IO_id("Method_11 - Programa - v1.1");

    // entradas
    val = IO_readint("Entre com um valor inteiro: ");

    // calculo matematico
    res = val % 2;

    // teste
    if (res > 0)
    {
        IO_printf("O valor e impar %d", val);
    } // end if
    else
    {
        IO_printf("O valor e par %d", val);
    } // end else

    // encerrar
    IO_pause("Aperte <Enter> para continuar.");

} // end method_11

/**
 * Method_12.
 */

void method_12(void)
{
    // dados
    int val = 0;
    int res = 0;

    // identificar
    IO_id("Method_12 - Programa - v1.2");

    // entradas
    val = IO_readint("Entre com um valor inteiro: ");

    // calculo
    res = val % 2;

    // testar
    if (res != 0 && val < -15)
    {
        IO_printf("O valor e impar e menor que -15: %d", val);
    } // end if
    else if (res == 0 && val > 15)
    {
        IO_printf("O valor é par e maior que 15: %d", val);
    } // end else if
    else
    {
        IO_printf("Nao entra em nenhum dos casos anteriores: %d", val);
    } // end else if

    // encerrar
    IO_pause("Aperte <Enter> para continuar.");
} // end method_12

/**
 * Method_13.
 */

void method_13(void)
{
    // dados
    int num = 0;

    // identificar
    IO_id("Method_13 - Programa - v1.3");

    // entrada
    num = IO_readint("Entre com um valor inteiro: ");

    // testar
    if (num > 25 && num < 65)
    {
        IO_printf("O valor esta entre (25:65): %d", num);
    } // end if
    else
    {
        IO_printf("O valor nao esta entre o intervalo (25:65): %d", num);
    } // end else

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_13

/**
 * Method_14.
 */

void method_14(void)
{
    // definir dados
    int num = 0;

    // identificao
    IO_id("Method_14 - Programa - v1.4");

    // entrada
    printf("Digite um valor real: ");
    scanf("%d", &num);
    getchar();

    // testar
    if (num >= 20 && num <= 60)
    {
        IO_printf("O valor esta no intervalo [20:60]: %d", num);
    } // end if
    else
    {
        IO_printf("O valor esta fora do intervalo [20:60]: %d", num);
    } // end else

    // encerrar
    IO_pause("Aperte <Enter> para continuar.");

} // end method_14

/**
 * Method_15.
 */

void method_15(void)
{
    // dados
    int num = 0;

    // identificar
    printf("\n\n%s\n", "Method_15 - Programa - v1.5");

    // entrada
    printf("\n%s", "Digite um valor inteiro: ");
    scanf("%d", &num);
    getchar();

    // testar
    if (num >= 15 && num < 50)
    {
        if (num > 25 && num <= 30)
        {
            printf("\n%s%d", "O valor pertence a intercecao: ", num);
        } // end if 2
        else
        {
            printf("\n%s%d", "O valor pertence a so um deles: ", num);
        } // end else 2
    }     // end if
    else
    {
        printf("\n%s%d", "O valor nao pertence aos intervalos [15:30] e (25:50): ", num);
    } // end else

    // encerrar
    printf("\n\n%s", "Aperte <Enter> para continuar.");
    getchar();

} // end method_15

/**
 * Method_16.
 */

void method_16(void)
{
    // dados:
    int num1 = 0, num2 = 0;

    // identificar
    printf("\n\n%s\n", "Method_16 - Programa - v1.6");

    // entradas
    printf("\n%s", "Digite o primeiro valor: ");
    scanf("%d", &num1);
    getchar();
    printf("\n%s", "Digite o segundo valor: ");
    scanf("%d", &num2);
    getchar();

    num1 = num1 % 2;
    num2 = num2 % 2;

    if (num1 == 0)
    {
        printf("\n%s", "O primeiro valor e par");
    } // end if
    else
    {
        printf("\n%s", "O primeiro valor nao e par");
    } // end else

    if (num2 == 1)
    {
        printf("\n%s", "O segundo valor e impar");
    } // end if
    else
    {
        printf("\n%s", "O segundo valor nao e impar");
    } // end else

    // encerrar
    printf("\n\n%s", "Aperte <Enter> para continuar.");
    getchar();

} // end method_16

/**
 * Method_17.
 */

void method_17(void)
{
    // dados
    int num1 = 0,
        num2 = 0,
        teste1 = 0,
        teste2 = 0;

    // identificar
    printf("\n\n%s\n", "Method_17 - Programa - v1.7");

    // entrada
    printf("\n%s", "Digite o primeiro valor: ");
    scanf("%d", &num1);
    getchar();
    printf("\n%s", "Digite o segundo valor: ");
    scanf("%d", &num2);
    getchar();

    // calculo matematico
    teste1 = num1 % 2;
    teste2 = num2 % 2;

    // teste
    if (teste1 != 0)
    {
        if (num1 < 0)
        {
            printf("\n%s", "O primeiro valor e impar e negativo");
        } // end if 3
        else
        {
            printf("\n%s", "O primeiro valor e impar e positivo");
        } // end else 3
    }     // end if 1
    else
    {
        printf("\n%s", "O primeiro valor e par.");
    } // end else 1

    if (teste2 == 0)
    {
        if (num2 > 0)
        {
            printf("\n%s", "O segundo valor e par e positivo");
        } // end if 4
        else
        {
            printf("\n%s", "O segundo valor e par e negativo");
        } // end else 4
    }     // end if 2
    else
    {
        printf("\n%s", "O segundo valor e impar");
    } // end else 2

    // encerrar
    printf("\n\n%s", "Aperte <Enter> para continuar.");
    getchar(); // para esperar

} // end method_17

/**
 * Method_18.
 */

void method_18(void)
{
    // definir dados
    double num1 = 0.0;
    double num2 = 0.0;

    // identificar
    printf("\n\n%s\n", "18 - Programa - v1.8");

    // entrada
    printf("\n%s", "Digite o primeiro valor: ");
    scanf("%lf", &num1);
    getchar();
    printf("\n%s", "Digite o segundo valor: ");
    scanf("%lf", &num2);
    getchar();

    // calculo matematico
    num1 = num1 * 2;

    // teste
    if (num1 > num2)
    {
        printf("\n%s", "O segundo valor e menor que o dobro do primeiro");
    } // end
    else if (num1 == num2)
    {
        printf("\n%s", "O Segundo valor e igual ao dobro do primeiro");
    } // end else if
    else
    {
        printf("\n%s", "O segundo valor e maior que o dobro do primeiro");
    } // end else

    // encerrar
    printf("\n\n%s", "Aperte <Enter> para continuar.");
    getchar(); // para esperar

} // end method_18

/**
 * Method_19.
 */

void method_19()
{
    // definir dados
    double num1 = 0.0;
    double num2 = 0.0;
    double num3 = 0.0;

    // identificar
    printf("\n\n%s\n", "Method_19 - Programa - v1.9");

    // entradas
    printf("\n%s", "Digite o primeiro valor: ");
    scanf("%lf", &num1);
    getchar();
    printf("\n%s", "Digite o segundo valor: ");
    scanf("%lf", &num2);
    getchar();
    printf("\n%s", "Digite o terceiro valor: ");
    scanf("%lf", &num3);
    getchar();

    // teste
    if (num1 != num2)
    {
        if ((num3 > num1 && num3 < num2) || (num3 < num1 && num3 > num2))
        {
            printf("\nO terceiro valor esta entre %lf e %lf", num1, num2);
        } // end if
        else
        {
            printf("\nO terceiro valor nao esta entre %lf e %lf", num1, num2);
        }
    }
    else
    {
        printf("\nOs valores sao iguais.");
    }
    // encerrar
    printf("\n\n%s", "Aperte <Enter> para continuar.");
    getchar(); // para esperar

} // end method_19

/**
 * Method_20.
 */

void method_20(void)
{
    // dados
    double num1 = 0.0, num2 = 0.0, num3 = 0.0;

    // identificar
    printf("\n\n%s\n", "Method_20 - Programa - v2.0");

    // entradas
    printf("\n%s", "Digite o primeiro valor: ");
    scanf("%lf", &num1);
    getchar();
    printf("\n%s", "Digite o segundo valor: ");
    scanf("%lf", &num2);
    getchar();
    printf("\n%s", "Digite o terceiro valor: ");
    scanf("%lf", &num3);
    getchar();

    // teste
    if((num1 != num2 && num1 != num3 && num3 != num2))
    {
        if((num3 > num1 && num3 < num2) || (num3 < num1 && num3 > num2))
        {
            printf("\n%s", "O terceiro valor esta entre o primeiro e o segundo");
        } // end if 2
        else
        {
            printf("\n%s", "O terceiro valor nao esta entre o primeiro e o segundo");
        } // end else 2
    }   
    else
    {
        printf("\n%s", "Os valores sao iguais");
    }

    // encerrar
    printf("\n\n%s", "Aperte <Enter> para continuar.");
    getchar(); // para esperar

} // end method_20

/*
 Funcao principal.
 @return codigo de encerramento
*/

int main(void)
{
    // definir dado
    int opcao = 0;

    // identificar
    printf("%s\n", "Exemplo0220 - Programa = v2.0");
    printf("%s\n", "Autor: Vinicius Cesar DAscencao Dias");
    printf("\n"); // mudar de linha

    // acoes

    // repetir
    do
    {
        // para mostrar opcoes
        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "  0 - Terminar");
        printf("\n%s", "  1 - Method_01");
        printf("\n%s", "  2 - Method_02");
        printf("\n%s", "  3 - Method_03");
        printf("\n%s", "  4 - Method_04");
        printf("\n%s", "  5 - Method_05");
        printf("\n%s", "  6 - Method_06");
        printf("\n%s", "  7 - Method_07");
        printf("\n%s", "  8 - Method_08");
        printf("\n%s", "  9 - Method_09");
        printf("\n%s", " 10 - Method_10");
        printf("\n%s", " 11 - Method_11");
        printf("\n%s", " 12 - Method_12");
        printf("\n%s", " 13 - Method_13");
        printf("\n%s", " 14 - Method_14");
        printf("\n%s", " 15 - Method_15");
        printf("\n%s", " 16 - Method_16");
        printf("\n%s", " 17 - Method_17");
        printf("\n%s", " 18 - Method_18");
        printf("\n%s", " 19 - Method_19");
        printf("\n%s", " 20 - Method_20");
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
b.) A
c.) a
d.) 1
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/
