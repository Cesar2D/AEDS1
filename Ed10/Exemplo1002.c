/*
Ed10 - v0.1 - __ / __ / _____
 Author: Vinicius Cesar DAscencao Dias
*/
// dependencias
#include "io.h" // para definicoes proprias

/**
 Definicao de tipo arranjo com inteiros
 baseado em estrutura
*/
typedef struct s_int_Array
{
    int length;
    ints data;
    int ix;
} int_Array;

/**
 Definicao de referencia para arranjo com inteiros
 baseado em estrutura
*/
typedef int_Array *ref_int_Array;

/**
 * Method_00 - não faz nada
 */

void method_00(void)
{
    // nao faz nada
} // end method_00

/**
 new_int_Array - Reservar espaco para arranjo com inteiros
 @return referencia para arranjo com inteiros
 @param n - quantidade de datos
*/
ref_int_Array new_int_Array(int n)
{
    // reserva de espaco
    ref_int_Array tmpArray = (ref_int_Array)malloc(sizeof(int_Array));

    // estabelecer valores padroes
    if (tmpArray == NULL)
    {
        IO_printf("\nErro: valta de espaco.\n");
    }
    else
    {
        tmpArray->length = 0;
        tmpArray->data = NULL;
        tmpArray->ix = -1;

        if (n > 0)
        {
            // guardar a contidade de dados
            tmpArray->length = n;

            // reservar espaco para dados
            tmpArray->data = (ints)malloc(n * sizeof(int));

            // definir indicador do primeiro elemento
            tmpArray->ix = 0;
        } // end if
    }
} // end new_int_Array()

/**
 free_int_Array - Dispensar espaco para arranjo com inteiros
 @param tmpArray - referencia para grupo de valores inteiros
*/
void free_int_Array(ref_int_Array tmpArray)
{
    // testar se ha dados, antes de reciclar o espaco
    if (tmpArray != NULL)
    {
        if (tmpArray->data != NULL)
        {
            free(tmpArray->data);
        } // end if
        free(tmpArray);
    } // end if
} // end free_int_Array ( )

/**
 printIntArray - Mostrar arranjo com valores inteiros.
 @param array - grupo de valores inteiros
*/
void printfIntArray(int_Array array)
{
    // mostra valores no arranjo
    if (array.data)
    {
        for (array.ix = 0; array.ix < array.length; array.ix = array.ix + 1)
        {
            // mostrar valor
            printf("%2d: %d\n", array.ix, array.data[array.ix]);
        }
    }
} // end printfIntArray()

/**
 Method_01.
*/
void method_01(void)
{
    // definir dado
    int_Array array;

    // montar arranjo em estrutura
    array.length = 5;
    array.data = (ints)malloc(array.length * sizeof(int));

    // testar existencia de dados
    if (array.data)
    {
        array.data[0] = 1;
        array.data[1] = 2;
        array.data[2] = 3;
        array.data[3] = 4;
        array.data[4] = 5;
    } // end if

    // identificar
    IO_id("Method_01 - v0.1");

    // executar metodo auxiliar
    printfIntArray(array);

    // reciclar espaco
    if (array.data)
    {
        free(array.data);
    } // end if

    // encerrar
    IO_pause("Eperte <Enter> para continuar");
} // end method_01

/**
 IO_readintArray - Ler arranjo com valores inteiros.
 @return arranjo com valores lidos
*/
int_Array IO_readintArray()
{
    // definir dados locais
    chars text = IO_new_chars(STR_SIZE);
    static int_Array array;

    // le a quantidade de dados
    do
    {
        array.length = IO_readint("\nLength = ");
    } while (array.length <= 0);

    // reservar espaco para armazenar
    array.data = IO_new_ints(array.length);

    // testar se ha espaco
    if(array.data == NULL)
    {
        array.length = 0; // nao ha espaco
    }
    else
    {
        // ler e guardar valores em arranjo
        for(array.ix = 0; array.ix < array.length; array.ix = array.ix + 1)
        {
            // ler valor
            strcpy(text, STR_EMPTY);
            array.data[array.ix] = IO_readint( IO_concat( IO_concat(text, IO_toString_d(array.ix)), ":"));
        } // end for
    } // end if
    // retornar arranjo
    return(array);
} // end IO_readintArray()

/**
 * Method_02.
 */

void method_02(void)
{
    // definir dados
    int_Array array;

    // identificar
    IO_id ( "Method_02 - v0.2" );

    // ler dados
    array = IO_readintArray();

    // testar a existencia de dados
    if(array.data)
    {
        // mostrar dados
        IO_printf("\n");

        // reciclar o espaco
        free(array.data);
    } // end if

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_02

/**
 Method_03
*/

void method_03(void)
{
    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_03

/**
 Method_04.
*/

void method_04(void)
{
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
        IO_id("EXEMPLO1002 - Programa - v0.2");

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
