/*
 Exemplo0102 - v0.1. - 26/ 08 /2023
 Author: Vinicius Cesar DAscencao Dias
 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0100 exemplo0101.c
 Windows: gcc -o exemplo0100 exemplo0101.c

 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0102
 Windows: exemplo0102
*/
// dependencias
#include <stdio.h>   // para as entradas e saidas
#include <stdlib.h>  // para outras funcoes de uso geral
#include <stdbool.h> // para valores logicos
#include <string.h>  // para cadeias de caracteres
/**
 Method_01
*/

void method_01(void)
{
    // definit dado
    int x = 0; // definir variavel com valor inicial

    // identificar
    printf("%s\n", "Method_01");

    // mostrar valor inicial
    printf("\n%s%d\n", "x = ", x);
    // obs.: O formato para int - > %d (ou %i)

    printf("&%d%p\n", "x = ", &x);
    // obs.: O formato para endereco -> %p

    // ver do teclado
    printf("Entrar com um valor inteiro: ");
    scanf("%d", &x);
    // obs.: Necessario indicar o endereco - > &

    getchar(); // obs.: Limpar a entrada de dados

    // mostrar valor lido
    printf("%s%i\n", "x = ", x);

    // encerrar
    printf("\nAperte <Enter> para continuar.");
    getchar();
} // end method_01

/**
 * Method_02
 */

void method_02(void)
{
    // definir dado
    double x = 0.0; // definir variavel com valor inicial
                    // obs.: Definir a parte fracionaria e util

    // identificar
    printf("\n%s\n", "Method_02 - Programa - v0.3");

    // mostrar valor inicial
    printf("\n%s%lf\n", "x = ", x);
    // obs.: O formato para double - > %fl

    // ler do teclado
    printf("Enter com um valor real: ");
    scanf("%lf", &x);
    // obs.: Necessario indicar o endereço - > &
    getchar(); // obs.: Limpar a entrada de dados

    // mostrar o valor lido
    printf("%s%lf\n", "x = ", x);

    // encerrar
    printf("\n\nAperte <Enter> para continuar.\n");
    getchar(); // aguardar por ENTER

} // end method_02

/**
 * Method_03
 */

void method_03(void)
{
    // definir dado
    char x = 'A'; // definir variavel com valor incial
                  // obs.: Indispensavel usar apostrofos

    // identificar
    printf("\n%s\n", "Method_03 - Programa - v0.3");

    // mostrar valor incial
    printf("\n%s%c\n", "x = ", x);
    // obs.: O formato para char - > %c

    // ler do teclado
    printf("Entrar com um caractere: ");
    scanf("%c", &x);
    // obs.: Necessario indicar o endereco - > &
    getchar(); // limpar as entrada de dados

    // mostrar valor lido
    printf("%s%c\n", "x = ", x);

    // encerrar
    printf("\n\nAperte <Enter> para continuar.\n");
    getchar(); // aguardar por enter
} // end method_03

/**
 * Method_04
 */
void method_04(void)
{
    // definir dado
    bool x = false; // definir variavel com valor inicial

    int y = 0;

    // identificar
    printf("\n%s\n", "EXEMPLO0104 - Programa - v0.4");

    // mostrar valor inicial
    printf("\n%s%d\n", "x = ", x);

    // ler do teclado
    printf("Entre com um valor logico (0 ou 1)");
    scanf("%d", &y);
    getchar(); // limpar entrada de dados

    // garantir valor logico no intervalo[0:1]
    x = (y != 0);

    // mostrar valor lido
    printf("%s%d\n", "x = ", x);

    // encerrar
    printf("\n\nApertar ENTER para continuar.\n");
    getchar(); // aguardar por ENTER

} // end method_04

/**
 * Method_05
 */

void method_05(void)
{
    // definir dado
    char x[80] = "abc"; // definir variavel com tamanho e valor inicial
    char *px = &x[0];   // definir alternativa para acesso via endereco

    // identificar
    printf("\n%s\n", "Method_05 - Programa - v0.5");

    // mostrar valor incial
    printf("\n%s%s\n", "x = ", x); // obs.: O formato para caracteres - > %s

    // ler do teclado
    printf("Entrar com uma cadeia de caracteres: ");
    scanf("%s", x); // nao usar & quando é cadeia de cracteres
    getchar();      // limpar a entrada de dados

    // mostrar valor lido
    printf("%s%s\n", "x = ", px);

    // encerrar
    printf("\n\nApertar ENTER para continuar.\n");
    getchar(); // aguardar por ENTER

} // end method_05

/**
 * Method_06.
 */

void method_06(void)
{
    // definir dados
    int x = 0; // definir variavel com valor incicial
    int y = 0; // definir variavel com valor incicial
    int z = 0; // definir variavel com valor incicial

    int *py = &y; // definir acesso a y via endereco

    // identificar
    printf("\n%s\n", "Method_06 - Programa - v0.0");

    // mostar valores incicais
    printf("%s%d\n", "x = ", x);
    printf("%s%i\n", "y = ", y); // obs.: OP formato para int - > %d (ou %i)

    // ler do teclado
    printf("Entrar com um valor inteiro: ");
    scanf("%d", &x); // obs.: Necessario indicar o endereco - > &
    getchar();       // obs.: Limpar a entrada de dados
    printf("Entrar com outro valor inteiro: ");
    scanf("%i", py); // obs.: Não e necessario indicar o endereco -> &
    getchar();       // obs.: Limpar a entrada de dados

    // operar valores
    z = x * y; // guardar em z o produto de x por y

    // mostrar valor resultante
    printf("%s(%i)*(%i) = (%d)\n", "z = ", x, y, z);

    // encerrar
    printf("\n\nAperte <Enter> para continuar");
    getchar(); // aguardar por enter// obs.: Limpar a entrada de dados

} // end method_06

/**
 * Method_07.
 */

void method_07(void)
{
    // definir dados
    char x[80] = "abc"; // definir variavel com tamanho e valor inicial
    char y[80] = "def"; // definir variavel com tamanho e valor inicial
    char z[80];         // definir variavel com tamanho inicial
    strcpy(z, "");      // e copiar para (z) a representacao de vazio

    // identificar
    printf("\n%s\n", "Method_07 - Programa - v0.0");

    // mostrar valores iniciais e comprimento das cadeias
    printf("%s%s (%d)\n", "x = ", x, strlen(x));
    printf("%s%s (%d)\n", "y = ", y, strlen(y));

    // ler do teclado
    printf("Entrar com caracteres: ");
    scanf("%s", x); // obs.: Nao indicar o endereco - > &
    getchar();      // obs.: Limpar a entrada de dados

    printf("Entrar com outros caracteres: ");
    scanf("%s", y);// obs.: Nao indicar o endereco - > &
    getchar(); // obs.: Limpar a entrada de dados

    // operar valores
    strcpy(z, x); // copiar (x) para (z)
    strcat(z, y); // concatenar (juntar) (y) a (z)
                  // obs.: Forma mais eficiente

    // mostrar valor resultante
    printf("%s[%s]*[%s] = [%s]\n", "z = ", x, y, z);

    // operar valores ( forma alternativa
    strcpy(z, strcat(strdup(x), y)); // copiar para (z) o resultado de concatenar a copia de (x) com (y)
                                     // obs.: Se nao duplicar, o valor (x) sera alterado

    // mostrar valor resultante
    printf("%s[%s]*[%s] = [%s]\n", "z = ", x, y, z);

    // encerrar
    printf("\n\nAperte <Enter> para continuar\n");
    getchar(); // aguardar por enter

} // end method_07

/*
Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/

int main(void)
{
    // definir dado
    int opcao = 0;

    // identificar
    printf("%s\n", "Exemplo0107 - Programa = v0.7");
    printf("%s\n", "Autor: Vinicius Cesar DAscencao Dias");
    printf("\n");

    // acoes

    // repetir
    do
    {
        // para mostrar opcoes
        printf("\n%s\n", "Opcoes: ");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - Method_01");
        printf("\n%s", "2 - Method_02");
        printf("\n%s", "3 - Method_03");
        printf("\n%s", "4 - Method_04");
        printf("\n%s", "5 - Method_05");
        printf("\n%s", "6 - Method_06");
        printf("\n%s", "7 - Method_07");
        printf("\n");

        // ler a opcao do teclado
        printf("\n%s", "Opcao = ");
        scanf("%d", &opcao);
        getchar(); // para limpar a entrada de dados

        // para mostrar a opcao lida
        printf("\n%s%d", "Opcao = ", opcao);

        // escolher acao dependente da opcao
        switch (opcao)
        {
        case 0: // nao fazer nada
            break;
        case 1: // executar method_01
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
        default: // comportamento padrao (O que fazer caso não for as opçoes anteriores )
            printf("\nErro: Opcao invalida.\n");
            break;
        } // end switch
    } while (opcao != 0);

    // encerrar
    printf("\n\nAperte <Enter> para terminar.");
    getchar(); // aguardar por Enter
    return 0;  // voltar ao so (sem erros)
} // end main

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
// prestar mais atençao," case X: " seguir essa ideia
                            break;
---------------------------------------------- previsao de testes
a.) 12 e 24
b.) ab e cd
c.) a e bc
d.) ab e c
---------------------------------------------- historico
Versao Data Modificacao
0.1 27/08 esboco
---------------------------------------------- testes
Versao     Teste
0.1     01. ( OK )     identificacao de programa
0.2     01. ( OK )     identificacao de programa
0.3     01. ( OK )     identificacao de programa
0.4     01. ( OK )     identificacao de programa
0.5     01. ( OK )     identificacao de programa
0.6     01. ( OK )     identificacao de programa
0.7     01. ( OK )     identificacao de programa

*/