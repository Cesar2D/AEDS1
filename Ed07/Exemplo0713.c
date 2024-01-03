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
        fscanf(arquivo, "%lf", &z);

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
 writeText - Gravar em arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/
void writeText(chars fileName)
{
    // definir dados
    FILE *arquivo = fopen(fileName, "wt");
    chars linha = IO_new_chars(STR_SIZE);

    // repetir ate desejar parar
    IO_printf("Gravar linha (para terminar, entrar com \"PARAR\"): ");

    do
    {
        // ler do teclado
        strcpy(linha, IO_readln(""));

        // gravar valor
        IO_fprintf(arquivo, "%s\n", linha);
    } while (strcmp("PARAR", linha) != 0);

    // fechar arquivo
    fclose(arquivo);
} // end writeText()

/**
 Method_05.
*/

void method_05(void)
{
    // identificar
    IO_id("Method_05 - v0.5");

    // executar metodo auxiliar
    writeText("DADOS3.TXT");

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_05

/**
 readText - Ler de arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
*/
void readText(chars fileName)
{
    // definir dados
    FILE *arquivo = fopen(fileName, "rt");
    chars linha = IO_new_chars(STR_SIZE);

    // tentar ler o primeiro
    strcpy(linha, IO_freadln(arquivo));

    // repetir enquanto houver dados
    while (!feof(arquivo) && strcmp("PARAR", linha) != 0)
    {
        // mostrar valor
        printf("%s\n", linha);

        // tentar ler o proximo
        strcpy(linha, IO_freadln(arquivo));
    } // end while

    // fechar arquivo
    fclose(arquivo);
} // end readText()

/**
 Method_06.
*/

void method_06(void)
{
    // identificar
    IO_id("Method_06 - v0.6");

    // executar o metodo auxiliar
    readText("DADOS3.TXT");

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_06

/**
 copyText - Copiar arquivo texto.
 @param fileOut - nome do arquivo de saida (destino)
 @param fileIn - nome do arquivo de entrada (origem )
*/
void copyText(chars fileOut, chars fileIn)
{
    // definir dados
    FILE *saida = fopen(fileOut, "wt");
    FILE *entrada = fopen(fileIn, "rt");
    chars linha = IO_new_chars(STR_SIZE);
    int contador = 0;

    // ler da origem
    strcpy(linha, IO_freadln(entrada));

    // repetir enquanto houver dados
    while (!feof(entrada))
    {
        // contar linha lida
        contador = contador + 1;

        // gravar no destino
        // exepcionalmente sem a ultima linha, nesse caso
        if (strcmp("PARAR", linha) != 0)
        {
            IO_fprint(saida, linha);
        } // end if

        // ler da origem
        strcpy(linha, IO_freadln(entrada));
    } // end while

    // informar total de linha copiadas
    IO_printf("Lines read = %d\n", contador);

    // fechar arquivos
    fclose(saida);   // write wt
    fclose(entrada); // read rt
} // end copyText()

/**
 Method_07.
*/

void method_07(void)
{
    // identificar
    IO_id("Method_07 - v0.");

    // executar o metodo auxiliar
    copyText("DADOS4.TXT", "DADOS3.TXT");

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_07

/**
 appendText - Gravar em arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/
void appendText(chars fileName)
{
    // definir dados
    FILE *arquivo = fopen(fileName, "at");
    chars linha = IO_new_chars(STR_SIZE);

    // repetir ate desejar parar
    printf("Gravar linhas (para terminar, entrar com\"PARAR\"): ");
    do
    {
        // ler do teclado
        strcpy(linha, IO_readln(""));

        // gravar valor
        IO_fprintln(arquivo, linha);
    } // end do
    while (strcmp("PARAR", linha) != 0);

    // fechar arquivo
    fclose(arquivo);
} // end appendText()

/**
 Method_08.
*/

void method_08(void)
{
    // identificar
    IO_id("EXEMPLO0710 - Method_08 - v0.0");

    // executar metodo
    appendText("DADOS4.TXT");

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_08

/**
 readWords - Ler palavras de arquivo.
 @param fileName - nome do arquivo
*/
void readWords(chars fileName)
{
    // definir dados
    FILE *arquivo = fopen(fileName, "rt");
    chars linha = IO_new_chars(STR_SIZE);

    // tentar ler a primeira
    strcpy(linha, IO_fread(arquivo));

    // repetir enquanto houver dados
    while (!feof(arquivo) && strcmp("PARAR", linha) != 0)
    {
        // mostrar valor
        printf("%s\n", linha);

        // tentar ler o proximo
        strcpy(linha, IO_fread(arquivo));
    } // end while

    // fechr arquivo
    fclose(arquivo);
} // end readWords()

/**
 Method_09.
*/

void method_09(void)
{
    // identificar
    IO_id("Method_09 - v0.9");

    // executar o metodo
    readWords("DADOS4.TXT");

    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_09

/**
 searchWord - Procurar palavra em arquivo.
 @return true, se encontrar; false, caso contrario
 @param fileName - nome do arquivo
 @param word - palavra a procurar
*/
bool searchWord(chars fileName, chars word)
{
    // definir dados
    FILE *arquivo = fopen(fileName, "rt");
    chars linha = IO_new_chars(STR_SIZE);

    // tentar ler a primeira
    strcpy(linha, IO_fread(arquivo));

    // repetir enquanto houver dados
    while (!feof(arquivo) && strcmp(word, linha) != 0)
    {
        // tentar ler o proximo
        strcpy(linha, IO_fread(arquivo));
    } // end while

    // fechar arquivo
    fclose(arquivo);

    // retornar resultado
    return (strcmp(word, linha) == 0);
} // end searchWord()

/**
 Method_10.
*/
void method_10(void)
{
    // identificar
    IO_id("Method_10 - v1.0");

    // procurar palavra
    IO_printf("Procurar(\"%s\") = %d\n", "pqr", searchWord("DADOS4.TXT", "pqr"));
    IO_printf("Procurar(\"%s\") = %d\n", "pqs", searchWord("DADOS4.TXT", "pqs"));

    // encerrar
    IO_pause("Aperte <Enter> para continuar");
} // end method_10

void method_11a(chars fileName, int n, int y, int z)
{
    y = 9 + (3 * z);

    if (n > 0)
    {
        if (y % 2 != 0)
        {
            method_11a(fileName, n - 1, y, z + 1);
            FILE *arq = fopen(fileName, "at");
            fprintf(arq, "%d\n", y);
            fclose(arq);
        }
        else
        {
            method_11a(fileName, n, y, z + 1);
        }
    }

} // end method_11a()

/**
 Method_11 - Exercicio.
*/
void method_11(void)
{
    int n = 0;

    n = IO_readint("Digite o numero de vezes: ");

    FILE *arq = fopen("ARQ_1.TXT", "wt");
    fclose(arq);

    // chamada da funcao
    method_11a("ARQ_1", n, 0, 0);

    // encerrar
    IO_pause("Aperte <Enter> para terminar");

} // endmethod_11

void method_12a(int n, chars fileName, int multi)
{
    int y = 0;
    FILE *arq = fopen(fileName, "at");

    if (n > 0)
    {
        multi = 7 * n;
        if (multi % 2 != 0 && multi >= 21)
        {
            method_12a(n - 1, fileName, multi);
            fprintf(arq, "%d\n", multi);
        }
        else
        {
            method_12a(n, fileName, multi);
        }
    }

    fclose(arq);
} // end method_12()

/**
 Method_12 - Exercicio.
*/
void method_12(void)
{
    int n = 0;
    FILE *arq = fopen("ARQ_2.TXT", "wt");
    fclose(arq);

    n = IO_readint("Digite o numero de vezes: ");

    method_12a(n, "ARQ_2.TXT", 0);
    // encerrar
    IO_pause("Aperte <Enter> para continuar");

} // end method_12

void method_13a(int n, chars fileName, int val)
{
    FILE *arq = fopen(fileName, "at");
    if (n > 0)
    {
        fprintf(arq, "%d\n", val);
        method_13a(n - 1, fileName, val = val * 7);
    }
    fclose(arq);
}

/**
 Method_13 - Exercicio.
*/
void method_13(void)
{
    int n = 0;
    FILE *arq = fopen("ARQ_teste.TXT", "wt");
    fclose(arq);

    n = IO_readint("Digite o numero de vezes: ");

    method_13a(n, "ARQ_3.TXT", 1);

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
        IO_id("EXEMPLO0513 - Programa - v1.3");

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
