/*
Ed10 - v0.1 - __ / __ / _____
 Author: Vinicius Cesar DAscencao Dias
*/
// dependencias
#include "io.h" // para definicoes proprias

/**
 Definicao de tipo arranjo bidimensional com inteiros baseado em estrutura
*/
typedef struct s_int_Matrix
{
    int rows;
    int columns;
    ints *data;
    int ix, iy;
} int_Matrix;

/**
 Definicao de referencia para arranjo bidimensional com inteiros baseado em estrutura
*/
typedef int_Matrix *ref_int_Matrix;

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
    if (array.data == NULL)
    {
        array.length = 0; // nao ha espaco
    }
    else
    {
        // ler e guardar valores em arranjo
        for (array.ix = 0; array.ix < array.length; array.ix = array.ix + 1)
        {
            // ler valor
            strcpy(text, STR_EMPTY);
            array.data[array.ix] = IO_readint(IO_concat(IO_concat(text, IO_toString_d(array.ix)), ":"));
        } // end for
    }     // end if
    // retornar arranjo
    return (array);
} // end IO_readintArray()

/**
 * Method_02.
 */

void method_02(void)
{
    // definir dados
    int_Array array;

    // identificar
    IO_id("Method_02 - v0.2");

    // ler dados
    array = IO_readintArray();

    // testar a existencia de dados
    if (array.data)
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
 fprintIntArray - Gravar arranjo com valores inteiros.
 @param fileName - nome do arquivo
 @param array - grupo de valores inteiros
*/
void fprintIntArray(chars fileName, int_Array array)
{
    // definir dados locais
    FILE *arquivo = fopen(fileName, "wt");

    // gravar quantidade de dados
    fprintf(arquivo, "%d\n", array.length);

    // gravar valores no arquivo, se existirem
    if (array.data)
    {
        for (array.ix = 0; array.ix < array.length; array.ix = array.ix + 1)
        {
            // gravar valor
            fprintf(arquivo, "%d\n", array.data[array.ix]);
        } // end for
    }     // end if
    // fechar o arquivo
    fclose(arquivo);
} // end fprintIntArray()

/**
 Method_03
*/

void method_03(void)
{
    // definir dados
    int_Array array;

    // identificar
    IO_id("Method_03 - v0.3");

    // ler dados
    array = IO_readintArray();

    // testar a existencia de dados
    if (array.data)
    {
        // mostrar e gravar dados
        IO_printf("\n");
        printfIntArray(array);
        fprintIntArray("ARRAY1.TXT", array);

        // reciclar o espaco
        free(array.data);
    } // end if

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_03

/**
 freadArraySize - Ler tamanho do arranjo com valores inteiros.
 @return quantidade de valores lidos
 @param fileName - nome do arquivo
*/
int freadArraySize(chars fileName)
{
    // definir dados locais
    int n = 0;
    FILE *arquivo = fopen(fileName, "rt");

    // testar a existencia
    if (arquivo)
    {
        // ler a quantidade de dados
        fscanf(arquivo, "%d", &n);

        if (n <= 0)
        {
            IO_printf("\nERRO: valor invalido.\n");
            n = 0;
        }

        fclose(arquivo);
    } // end if

    // retornar dados lidos
    return (n);

} // end freadArraySize()

/**
 fIO_readintArray - Ler arranjo com valores inteiros.
 @return arranjo com os valores lidos
 @param fileName - nome do arquivo
 @param array - grupo de valores inteiros
*/
int_Array fIO_readintAarray(chars fileName)
{
    // definir dados locais
    int x = 0;
    int y = 0;
    FILE *arquivo = fopen(fileName, "rt");
    static int_Array array;

    // testar existencia
    if (arquivo)
    {
        // ler a quantidade de dados
        fscanf(arquivo, "%d", &array.length);

        // testar se ha dados
        if (array.length <= 0)
        {
            IO_printf("\nERRO: Valor invalidos\n");
            array.length = 0;
        }
        else
        {
            // reservar espaco
            array.data = IO_new_ints(array.length);

            // testar a existencia
            if (array.data)
            {
                // ler guardar valores em arranjo
                array.ix = 0;
                while (!feof(arquivo) && array.ix < array.length)
                {
                    // ler valor
                    fscanf(arquivo, "%d", &(array.data[array.ix]));

                    // passar ao proximo
                    array.ix = array.ix + 1;
                } // end while
            }     // end if
        }         // end if
    }             // end if

    // retornar dados lidos
    return (array);
} // end fIO_readintAarray()

/**
 Method_04.
*/

void method_04(void)
{
    // definir dados
    int_Array array; // arranjo sem tamanho definido

    // identificar
    IO_id("Method_04 - v0.4");

    // ler dados
    array = fIO_readintAarray("ARRAY1.TXT");

    // testar a existencia de dados
    if (array.data)
    {
        // mostrar dados
        IO_printf("\n");
        printfIntArray(array);

        // reciclar espaco
        free(array.data);

    } // end if

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_04

/**
 copyIntArray - Copiar arranjo com valores inteiros.
 @return referencia para copia do arranjo
 @param fileName - nome do arquivo
 @param array - grupo de valores inteiros
*/
ref_int_Array copyIntArray(int_Array array)
{
    // definir dados locais
    int x = 0;
    int y = 0;
    ref_int_Array copy;

    if (array.length <= 0)
    {
        IO_printf("\nERRO: Valor invalido");
        array.length = 0;
    }
    else
    {
        // reservar area
        copy = new_int_Array(array.length);

        // testar se ha descritor
        if (copy)
        {
            copy->length = array.length;
            copy->data == IO_new_ints(copy->length);

            // testar se ha espaco e dados
            if (copy->data == NULL || array.data == NULL)
            {
                printf("\nERRO: Falta espaco ou dados.");
            }
            else
            {
                // ler e copiar valores
                for (array.ix = 0; array.ix < array.length; array.ix = array.ix + 1)
                {
                    // copiar valor
                    copy->data[array.ix] = array.data[array.ix];
                } // end for
            }     // end if
        }         // end if
    }             // end if

    // retornar dados lidos
    return (copy);
} // end copyIntArray()

/**
 Method_05.
*/

void method_05(void)
{
    // definir dados
    int_Array array;     // arranjo sem tamanho definido
    ref_int_Array other; // referencia para arranjo sem tamanho definido

    // identificar
    IO_id("Method_05 - v0.5");

    // ler dados
    array = fIO_readintAarray("ARRAY.TXT");

    // testar a existencia de dados
    if (array.data)
    {
        // mostrar dados
        IO_printf("\nOriginal\n");
        printfIntArray(array);

        // mostrar dados
        IO_printf("\nCopia\n");
        printfIntArray(*other); // deferenciar a copia

        // reciclar os espacos
        free(array.data);
        free(other->data);
        free(other);

    } // end if

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_05

/**
 new_int_Matrix - Reservar espaco para arranjo bidimensional com inteiros
 @return referencia para arranjo com inteiros
 @param rows - quantidade de dados
 @param columns - quantidade de dados
*/
ref_int_Matrix new_int_Matrix(int rows, int columns)
{
    // reserva de espaco
    ref_int_Matrix tmpMatrix = (ref_int_Matrix)malloc(sizeof(int_Matrix));

    // estabelecer valores padroes
    if (tmpMatrix != NULL)
    {
        tmpMatrix->rows = 0;
        tmpMatrix->columns = 0;
        tmpMatrix->data = NULL;

        // reservar espaco
        if (rows > 0 && columns > 0)
        {
            tmpMatrix->rows = rows;
            tmpMatrix->columns = columns;
            tmpMatrix->data = malloc(rows * sizeof(ints));
            if (tmpMatrix->data)
            {
                for (tmpMatrix->ix = 0; tmpMatrix->ix < tmpMatrix->rows; tmpMatrix->ix = tmpMatrix->ix + 1)
                {
                    tmpMatrix->data[tmpMatrix->ix] = (ints)malloc(columns * sizeof(int));
                } // end for
            }     // end if
        }         // end if
        tmpMatrix->ix = 0;
        tmpMatrix->iy = 0;
    } // end if
    return (tmpMatrix);
}

/**
 free_int_Matrix - Dispensar espaco para arranjo com inteiros
 @param tmpMatrix - referencia para grupo de valores inteiros
*/
void free_int_Matrix(ref_int_Matrix matrix)
{
    // testar se ha dados
    if (matrix != NULL)
    {
        for (matrix->ix = 0; matrix->ix < matrix->rows; matrix->ix = matrix->ix + 1)
        {
            free(matrix->data[matrix->ix]);
        } // end for
        free(matrix->data);
    } // end if
} // end free_int_Matrix()

/**
 printIntMatrix - Mostrar matrix com valores inteiros.
 @param array - grupo de valores inteiros
*/
void printIntMatrix(ref_int_Matrix matrix)
{
    // testar existencia
    if (matrix != NULL && matrix->data != NULL)
    {
        // nostrar valores na matriz
        for (matrix->ix = 0; matrix->ix < matrix->rows; matrix->ix = matrix->ix + 1)
        {
            for (matrix->iy = 0; matrix->iy < matrix->columns; matrix->iy = matrix->iy + 1)
            {
                // mostrar valor
                printf("%3d\t", matrix->data[matrix->ix][matrix->iy]);
            } // end for
            printf("\n");
        } // end for
    }     // end if
} // end printIntMatrix()

/**
 Method_06.
*/

void method_06(void)
{
    // DEFINIR DADO
    ref_int_Matrix matrix = new_int_Matrix(3, 3);

    if (matrix != NULL && matrix->data != NULL)
    {
        matrix->data[0][0] = 1;
        matrix->data[0][1] = 2;
        matrix->data[0][2] = 3;
        matrix->data[1][0] = 3;
        matrix->data[1][1] = 4;
        matrix->data[1][2] = 5;
        matrix->data[2][0] = 6;
        matrix->data[2][1] = 7;
        matrix->data[2][2] = 8;

    } // end if

    // identificar
    IO_id("Method_06 - v0.6");

    // executar o metodo auxiliar
    printIntMatrix(matrix);

    // reciclar espaco
    free_int_Matrix(matrix);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_06

/**
 IO_readintMatrix - Ler arranjo bidimensional com valores inteiros.
 @return referencia para o grupo de valores inteiros
*/
ref_int_Matrix IO_readintMatrix()
{
    // definir dados locais
    int rows = 0;
    int columns = 0;
    chars text = IO_new_chars(STR_SIZE);

    // ler a quantidade de dados
    do
    {
        rows = IO_readint("\nRows = ");
    } while (rows <= 0);
    do
    {
        columns = IO_readint("\nColumns = ");
    } while (columns <= 0);

    // reservar espaco para armazenar valores
    ref_int_Matrix matrix = new_int_Matrix(rows, columns);

    // testar se ha espaco
    if (matrix != NULL)
    {
        if (matrix->data == NULL)
        {
            // nao ha espaco
            matrix->rows = 0;
            matrix->columns = 0;
            matrix->ix = 0;
            matrix->iy = 0;
        }
        else
        {
            // ler e guardar valores na matriz
            for (matrix->ix = 0; matrix->ix < matrix->rows; matrix->ix = matrix->ix + 1)
            {
                for (matrix->iy = 0; matrix->iy < matrix->columns; matrix->iy = matrix->iy + 1)
                {
                    // ler e guardar valor
                    strcpy(text, STR_EMPTY);
                    matrix->data[matrix->ix][matrix->iy] = IO_readint(IO_concat(IO_concat(IO_concat(text, IO_toString_d(matrix->ix)), ","), IO_concat(IO_concat(text, IO_toString_d(matrix->iy)), ":")));
                } // end for
                printf("\n");
            } // end for
        }     // end if
    }         // end if

    // retornar dados lidos
    return (matrix);
    ;

} // end IO_readintMatrix()

/**
 Method_07.
*/

void method_07(void)
{
    // definir dados
    ref_int_Matrix matrix = NULL;

    // identificar
    IO_id("Method_07 - v0.7");

    // ler dados
    matrix = IO_readintMatrix();

    // mostrar dados
    IO_printf("\n");
    printIntMatrix(matrix);

    // reciclar espaco
    free_int_Matrix(matrix);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_07()

/**
 fprintIntMatrix - Gravar arranjo bidimensional com valores inteiros.
 @param fileName - nome do arquivo
 @param matrix - grupo de valores inteiros
*/
void fprintIntMatrix(chars fileName, ref_int_Matrix matrix)
{
    // definir dados locais
    FILE *arquivo = fopen(fileName, "wt");

    // testar se ha dados
    if (matrix == NULL)
    {
        printf("\nERRO: Nao ha dados.");
    }
    else
    {
        // gravar quantidade de dados
        fprintf(arquivo, "%d\n", matrix->rows);
        fprintf(arquivo, "%d\n", matrix->columns);

        if (matrix->data != NULL)
        {
            // gravar valores no arquivo
            for (matrix->ix = 0; matrix->ix < matrix->rows; matrix->ix = matrix->ix + 1)
            {
                for (matrix->iy = 0; matrix->iy < matrix->columns; matrix->iy = matrix->iy + 1)
                {
                    // gravar valor
                    fprintf(arquivo, "%d\n", matrix->data[matrix->ix][matrix->iy]);
                } // end for
            }     // end for
        }         // end if

        // fechar arquivo
        fclose(arquivo);
    } // end if
} // end fprintIntMatrix()

/**
 Method_08.
*/

void method_08(void)
{
    // definir dados
    ref_int_Matrix matrix = NULL;

    // identificar
    IO_id("Method_08 - v0.8");

    // ler dados
    matrix = IO_readintMatrix();

    // gravar dados
    fprintIntMatrix("MATRIX1.TXT", matrix);

    // reciclar espaco
    free_int_Matrix(matrix);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_08

/**
 freadintMatrix - Ler arranjo bidimensional com valores inteiros.
 @return referencia para o grupo de valores inteiros
 @param fileName - nome do arquivo
*/
ref_int_Matrix freadintMatrix(chars fileName)
{
    // definir dados locais
    ref_int_Matrix matrix = NULL;
    int rows = 0;
    int columns = 0;
    FILE *arquivo = fopen(fileName, "rt");

    // ler a quantidade de dados
    fscanf(arquivo, "%d", &rows);
    fscanf(arquivo, "%d", &columns);

    if (rows <= 0 || columns <= 0)
    {
        IO_printf("\nERRO: Valor invalido.\n");
    }
    else
    {
        // reservar espaco para amarzenar
        matrix = new_int_Matrix(rows, columns);

        // testar se ha espaco
        if (matrix != NULL && matrix->data == NULL)
        {
            // nao ha espaco
            matrix->rows = 0;
            matrix->columns = 0;
            matrix->ix = 0;
            matrix->iy = 0;
        }
        else
        {
            // testar a existencia
            if (matrix != NULL)
            {
                // ler e guardar valores na matrix
                matrix->ix = 0;
                while (!feof(arquivo) && matrix->ix < matrix->rows)
                {
                    matrix->iy = 0;
                    while (!feof(arquivo) && matrix->iy < matrix->columns)
                    {
                        // guardar valor
                        fscanf(arquivo, "%d", &(matrix->data[matrix->ix][matrix->iy]));

                        // passar ao proximo
                        matrix->iy = matrix->iy + 1;
                    } // end while

                    // passar ao proximo
                    matrix->ix = matrix->ix + 1;
                } // end while
                matrix->ix = 0;
                matrix->iy = 0;
            } // end if
        }     // end if
    }         // end if

    // retornar matriz lida
    return (matrix);
} // end freadintMatrix()

/**
 Method_09.
*/

void method_09(void)
{
    // identificar
    IO_id("Method_09 - v0.9");

    // ler dados
    ref_int_Matrix matrix = freadintMatrix("MATRIX1.TXT");

    // mostrar dados
    IO_printf("\n");
    printIntMatrix(matrix);

    // reciclar espaco
    free_int_Matrix(matrix);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_09

/**
 copyIntMatrix - Copiar matriz com valores inteiros.
 @return referencia para o grupo de valores inteiros
*/
ref_int_Matrix copyIntMatrix(ref_int_Matrix matrix)
{
    // definir dados locais
    ref_int_Matrix copy = NULL;

    if (matrix == NULL || matrix->data == NULL)
    {
        IO_printf("\nERRO: Faltam dados\n");
    }
    else
    {
        if (matrix->rows <= 0 || matrix->columns <= 0)
        {
            IO_printf("\nERRO: Valor invalido.\n");
        }
        else
        {
            // reservar espaco
            copy = new_int_Matrix(matrix->rows, matrix->columns);

            // testar se ha espaco e dados
            if (copy == NULL || copy->data == NULL)
            {
                printf("\nERRO: Falta espaco.");
            }
            else
            {
                // copiar valores
                for (copy->ix = 0; copy->ix < copy->rows; copy->ix = copy->ix + 1)
                {
                    for (copy->iy = 0; copy->iy < copy->columns; copy->iy = copy->iy + 1)
                    {
                        // copiar valor
                        copy->data[copy->ix][copy->iy] = matrix->data[copy->ix][copy->iy];
                    } // end for
                }     // end for
            }         // end if
        }             // end if
    }                 // end if

    // retornar copia
    return (copy);
} // end copyIntMatrix()

/**
 Method_10.
*/
void method_10(void)
{
    // definir dados
    ref_int_Matrix matrix = NULL;
    ref_int_Matrix other = NULL;

    // identificar
    IO_id("Method_10 - v1.0");

    // ler dados
    matrix = freadintMatrix("MATRIX1.TXT");

    // copiar dados
    other = copyIntMatrix(matrix);

    // mostrar dados
    IO_printf("\nOriginal\n");
    printIntMatrix(matrix);

    // mostrar dados
    IO_printf("\nCopia\n");
    printIntMatrix(other);

    // reciclar espaco
    free_int_Matrix(matrix);
    free_int_Matrix(other);

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_10

ref_int_Array ref_fprintIntArray(chars fileName, ref_int_Array array)
{
    // definir dados locais
    FILE *arq = fopen(fileName, "wt");

    // gravar quantidade de dados
    fprintf(arq, "%d\n", array->length);

    // gravar valores no arquivo, se existirem
    if (array->data)
    {
        for (array->ix = 0; array->ix < array->length; array->ix = array->ix + 1)
        {
            // gravar valor
            fprintf(arq, "%d\n", array->data[array->ix]);
        } // end for
    }     // end if
    // fechar o arquivo
    fclose(arq);

} // end ref_fprintIntArray()

void RandomIntGenerate(int inf, int sup, ref_int_Array array)
{
    // semente de geracao
    srand(time(NULL));

    for (array->ix = 0; array->ix < array->length; array->ix = array->ix + 1)
    {
        array->data[array->ix] = rand() % (inf - sup + 1) + inf;
    }
} // end RandomIntGenerate()

/**
 Method_11 - Exercicio.
*/
void method_11(void)
{
    // declaracao de variaveis
    int n = 0;
    int inf = 0;
    int sup = 0;
    ref_int_Array array;
    FILE *arq = fopen("DADOS.TXT", "wt");

    // entrada do tamanho
    n = IO_readint("Digite o tamanho: ");

    // alocacao dinamica
    array = new_int_Array(n);

    // teste de existencia
    if (array)
    {
        // atribuicao de valor para o tamanho
        array->length = n;

        // entrada dos limites
        inf = IO_readint("Digite o limite infrior: ");
        sup = IO_readint("Digite o limite superior: ");

        // geracao de numero aleatorios
        RandomIntGenerate(inf, sup, array);

        // imprimir no arquivo
        ref_fprintIntArray("DADOS.TXT", array);
    }
    // liberar o espaco
    free_int_Array(array);

    // fecahr o arquivo
    fclose(arq);

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
        IO_id("EXEMPLO1011 - Programa - v1.1");

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
