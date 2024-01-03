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
#include <math.h>    // para funcoes matemáticas: pow( ), sqrt( ), sin( ), cos( )
#include "io.h"      // para definicoes proprias ( na mesma pasta )

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
    scanf("%s", y); // obs.: Nao indicar o endereco - > &
    getchar();      // obs.: Limpar a entrada de dados

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

/**
 * Method_08.
 */

void method_08(void)
{
    // definir dados
    double x = 0.0; // definir a variavel com valor incial
    double y = 0.0; // definir a variavel com valor incial
    double z = 0.0; // definir a variavel com valor incial

    // identificar
    printf("\n%s\n", "Method_08 - Programa - v0.0");

    // mostrar valores inciais
    printf("%s%lf\n", "x = ", x);
    printf("%s%lf\n", "y = ", y);

    // ler do teclado
    printf("Entrar com um valor real: ");
    scanf("%lf", &x); // obs.: Mecessario indicar o endereco - > &
    getchar();        // obs.: Limpar a entrada de dados

    printf("Entrar com outro valor real: ");
    scanf("%lf", &y); // obs.: Mecessario indicar o endereco - > &
    getchar();        // obs.: Limpar a entrada de dados

    // operar valores
    z = pow(x, y); // elevar a base (x) a potencia (y)

    // mostrar valor resultante
    printf("%s(%lf) elevado a (%lf) = (%lf)\n", "z = ", x, y, z);

    // o perar valores
    x = pow(z, 1.0 / y); // elevar a base (x) a potencia iversa de (y) (raiz)

    // mostrar valor resultante
    printf("%s(%lf) elevado a (1/%lf) = (%lf)\n", "z = ", z, y, x);

    // operar valores
    z = sqrt(x); // raiz quadrada do argumento

    // mostrar valor resultante
    printf("%sraiz(%lf) = (%lf)\n", "z = ", x, z);

    // encerrar
    printf("\n\nAperte <Enter> para continuar");
    getchar(); // aguardar por enter

} // end method_08

/**
 * Method_09.
 */

void method_09()
{
    // ddefinir dados simgulares
    int x = 0;      // definir variavel com valor inicial para guardar inteiro
    double y = 3.5; // definir variavel com valor inicial para guardar real
    char z = 'A';   // definir variavel com valor inicial para guardar caractere (simbolo)
    bool w = false; // definir variavel com valor inicial para guardar falso ou verdadeiro

    // definir dados com mais de um valor
    char s[80] = ""; // definir espaco de armazenamento para ate 80 caracteres (simbolos)

    // identificar
    printf("\n%s\n", "Method_09 - Programa - v0.0");

    // mostrar valores iniciais
    printf("01. %s%d\n", "x = ", x);
    printf("02. %s%lf\n", "y = ", y);
    printf("03. %s%c\n", "z = ", z);

    // converter entre tipos de dados (type casting)
    x = (int)z; // codigo inteiro equivalente ao caractere
    printf("04. %s%d - > %c\n", "x = ", x, z);

    x = (int)y; // parte inteira de real
    printf("05. %s%d - > %lf\n", "x = ", x, y);

    x = 97;
    z = (char)x; // simbolo equivalente ao codigo inteiro
    printf("06. %s%c - > %d\n", "z = ", z, x);

    x = (int)'0'; // codigo inteiro equivalente ao caractere
    z = (char)x;  // caractere equivalente ao codigo inteiro
    printf("07. %s%c - > %d\n", "z = ", z, x);

    x = w; // codigo inteiro equivalente ao logico
    printf("08. %s%d - > %d\n", "x = ", x, w);

    w = true;
    x = w; // codigo inteiro equivalente ao logico
    printf("09. %s%d - > %d\n", "x = ", x, w);

    x = (w == false); // equivalente 'a comparacao de igualdade (true igual a false)
    printf("10. %s%d - > %d\n", "x = ", x, w);

    x = !(w == false); // equivalente ao contrario da comparacao de valores (true igual a false)
    printf("11. %s%d - > %d\n", "x = ", x, w);

    x = (w != false); // equivalente 'a comparacao de diferenca (true diferente de false)
    printf("12. %s%d - > %d\n", "x = ", x, w);

    w = (x == 0); // equivalente 'a comparacao de igualdade entre (x) e zero
    printf("13. %s%d == %d = %d\n", "w = ", x, 0, w);

    w = (x != 0); // equivalente 'a comparacao de diferenca entre (x) e zero
    printf("14. %s%d != %d = %d\n", "w = ", x, 0, w);

    w = (x < y); // equivalente 'a comparacao entre (x) e (y)
    printf("15. %s%d < %lf = %d\n", "w = ", x, y, w);

    w = (x <= y); // equivalente 'a comparacao entre (x) e (y)
    printf("16. %s%d <= %lf = %d\n", "w = ", x, y, w);

    w = (y > x); // equivalente 'a comparacao entre (x) e (y)
    printf("17. %s%lf > %d = %d\n", "w = ", y, x, w);

    w = (y >= x); // equivalente 'a comparacao entre (x) e (y)
    printf("18. %s%lf >= %d = %d\n", "w = ", y, x, w);

    x = 4;
    w = (x % 2 == 0); // equivalente a testar se é par ou
    // resto inteiro (%) da divisao por 2 igual a zero
    printf("19. %s (%d%%2) ? %d\n", "e' par ", x, w);

    x = 4;
    w = (x % 2 != 0); // equivalente a testar se é ímpar ou
    // resto inteiro (%) da divisao por 2 diferente de zero
    printf("20. %s (%d%%2) ? %d\n", "e' impar ", x, w);

    z = '5';
    w = ('0' <= z && z <= '9'); // equivalente a testar se e' algarismo/digito
                                // pertence a [‘0’:’9’] (é igual ou esta’ entre ‘0’ e ‘9’)
    printf("21. %s (%c) ? %d\n", "e' digito", z, w);

    z = 'x';
    w = ('a' <= z && z <= 'z'); // equivalente a testar se e' letra minuscula,
                                // pertence a [‘a’:’z’] (é igual ou esta’ entre ‘a’ e ‘z’)
    printf("22. %s (%c) ? %d\n", "e' minuscula ", z, w);

    z = 'X';
    w = (!('a' <= z && z <= 'z')); // equivalente a testar se NAO (!) e' letra minuscula
    printf("23. %s (%c) ? %d\n", "nao e' minuscula ", z, w);

    z = 'x';
    w = ('A' <= z && z <= 'Z'); // equivalente a testar se e' letra maiuscula
    printf("24. %s (%c) ? %d\n", "e' maiuscula ", z, w);

    z = 'X';
    w = ((z < 'A') || ('Z' < z)); // equivalente a testar se NAO e' letra maiuscula,
                                  // esta’ fora do intervalo [’a’:’z’], ou e’ menor que ‘a’ ou e’ maior que ‘z’
    printf("25. %s (%c) ? %d\n", "nao e' maiuscula ", z, w);

    z = '0';
    w = ('0' == z || '1' == z); // equivalente a testar se e' igual a '0' ou a '1'
    printf("26. %s (%c) ? %d\n", "e' 0 ou 1 ", z, w);

    strcpy(s, "zero"); // copiar para (s) <- "zero" (NAO usar '=' com caracteres);
    printf("27. palavra = %s\n", s);
    w = (strcmp("zero", s) == 0); // comparar se caracteres iguais (NAO usar '==' com caracteres);
                                  // Nota: O resultado da comparação sempre devera' ser avaliado
                                  // em relacao a zero, e sera' igual caso coincida.

    printf("28. palavra == %s ? %d\n", s, w);
    strcpy(s, "um e dois"); // copiar para (s) <- "outras palavras" (NAO usar '=' com caracteres);
    printf("29. palavras = %s\n", s);
    w = (strcmp("zero", s) != 0); // comparar se caracteres diferentes (NAO usar '!=' com caracteres);
                                  // Nota: O resultado da comparação sempre devera' ser avaliado
                                  // em relacao a zero, e sera' diferente caso NAO coincidir.
    printf("30. palavra == %s ? %d\n", s, w);
    // encerrar
    printf("\n\nAperte <Enter> para continuar.");
    getchar(); // aguardar por ENTER

} // end method_09

/**
 * Method_10.
 */

void method_10()
{
    // definir dados
    int x = 5;                        // definir variavel com valor inicial
    double y = 3.5;                   // definir variavel com valor inicial
    char z = 'A';                     // definir variavel com valor inicial
    bool w = TRUE;                    // definir variavel com valor inicial
    chars a = IO_new_chars(STR_SIZE); // definir variavel com valor inicial
    chars b = IO_new_chars(STR_SIZE); // definir variavel com valor inicial
    chars c = IO_new_chars(STR_SIZE); // definir variavel com valor inicial

    // identificar
    IO_id("\nMethod 10 - Programa - v0.0");

    // concatenar (juntar) cadeias de caracteres
    strcpy(a, "abc"); // atribuir a variavel (a) o valor constante ("abc")
    strcpy(b, "def"); // obs.: a atribuicao de cadeia de caracteres NAO usa (=)

    IO_printf("\na = %s b = %s\n", a, b);

    c = IO_concat(a, b); // alternativa melhor para a funcao nativa strcat (a,b)
    IO_printf("\nc = [%s]+[%s] = [%s]\n", a, b, c);

    strcpy(a, "c = ");
    strcpy(c, STR_EMPTY); // limpara a cadeia de caracteres

    IO_printf("%s\n", IO_concat(a, IO_toString_c(z)));
    IO_println(IO_concat("x = ", IO_toString_d(x)));
    IO_println(IO_concat("w = ", IO_toString_b(w)));

    strcpy(b, STR_EMPTY);
    IO_print("y = ");
    IO_print(IO_concat(b, IO_toString_f(y)));
    IO_printf("\n");

    z = IO_readchar("char = ");
    IO_println(IO_concat(a, IO_toString_c(z)));

    y = IO_readdouble("Double = ");
    IO_println(IO_concat(a, IO_toString_f(y)));

    x = IO_readint("int = ");
    IO_println(IO_concat(a, IO_toString_d(x)));

    w = IO_readbool("bool = ");
    IO_println(IO_concat(a, IO_toString_b(w)));

    b = IO_readstring("chars = ");
    IO_println(IO_concat(a, b));

    b = IO_readln("line = ");
    IO_println(IO_concat(a, b));

    // encerrar
    IO_pause("Aperte <Enter> para terminar"); // chamar method para pausar

} // end method_10

/**
 * Method_11.
 */

void method_11(void)
{
    // dados
    int lado = 0;
    int area = 0;

    // entrada
    printf("\nDigite o valor do lado do quadrado: ");
    scanf("%d", &lado);
    getchar();

    // calculo matematico
    lado = lado * 6;
    area = pow(lado, 2);

    printf("\n%s%d", "O valor da area do outro quadrado 6x maior e: ", area);

    // encerrar
    printf("\n\nAperte <Enter> para terminar");
    getchar(); // para esperar

} // end method_11

/**
 * Method_12.
 */

void method_12(void)
{
    // variaveis
    int lado = 0.0;
    int area = 0.0;
    int perimetro = 0.0;

    // entradas
    printf("\nDigite o valor do lado do quadrado: ");
    scanf("%d", &lado);
    getchar(); // limpar a entrada de valores

    // calculos matematicos
    lado = (lado / 3);
    area = pow(lado, 2);
    perimetro = lado * 4;

    // saidas
    printf("\nA area do quadrado (com 1/3 do lado): %d", area);
    printf("\nO perimetro do quadrado ( com 1/3 do lado): %d", perimetro);

    // encerrar
    printf("\n\nAperte <Enter> para continuar");
    getchar(); // para esperar

} // emd method_12

/**
 * Method_13.
 */

void method_13()
{
    // variaveis
    int l1 = 0;
    int l2 = 0;
    int area = 0;

    // entradas
    printf("\nDigite o valor de um lado do retangulo: ");
    scanf("%d", &l1);
    getchar();
    printf("\nDigite o valor do segundo lado do retangulo: ");
    scanf("%d", &l2);
    getchar();

    // calculo matematico
    area = l1 * l2;
    area = area * 4;

    // saida
    printf("\nA area 4 vezes maior do retangulo e: %d", area);

    // encerrar
    printf("\n\nAperte <Enter> para continuar.");
    getchar();

} // end method_13

/**
 * Method_14.
 */

void method_14()
{
    // variaveis
    int l1 = 0.0;
    int l2 = 0.0;
    int area = 0.0;
    int perimetro = 0.0;

    // entrada
    printf("\nDigite o valor do primeiro lado: ");
    scanf("%d", &l1);
    getchar();
    printf("\nDigite o valor do segundo lado: ");
    scanf("%d", &l2);
    getchar();

    // calculo matematico
    l1 = (l1 / 5);
    l2 = (l2 / 5);

    area = l1 * l2;

    perimetro = (l1 * 2) + (l2 * 2);

    // saidas
    printf("\nO valor da area com o tamanho 5 vezes menor e: %d", area);
    printf("\nO valor do perimetro com o tamanho 5 vezes menor e: %d", perimetro);

    // encerrar
    printf("\n\nAperte <Enter> para continuar");
    getchar();

} // end method_14

/**
 * Method_15.
 */

void method_15()
{
    // variaveis
    double h = 0.0;
    double b = 0.0;
    double area = 0.0;

    // enstrada
    printf("\nDigite o valor da altura: ");
    scanf("%lf", &h);
    getchar();
    printf("\nDigite o valor da base: ");
    scanf("%lf", &b);
    getchar();

    // calculo matematico
    h = h / 2;
    area = (b * h) / 2;

    // saidas
    printf("\nO valor da area com a metade do tamanho e: %lf", area);

    // encerrar
    printf("\n\nAperte <Enter> para continuar.");
    getchar();

} // end method_15

/**
 * Method_16.
 */

void method_16()
{
    // variaveis
    double lado = 0.0;
    double altura = 0.0;
    double area = 0.0;
    double perimetro = 0.0;

    // entradas
    printf("\nDigite o valor do lado: ");
    scanf("%lf", &lado);
    getchar();

    // calculo matematico
    lado = lado * 2;
    altura = (lado * sqrt(3)) / 2;
    area = (pow(lado, 2) * sqrt(3)) / 4;
    perimetro = lado * 3;

    // saida
    printf("\nA Area, Altura e perimetro do triangulo e respectivamente(com o dobro do lado): %lf, %lf, %lf", area, altura, perimetro);

    // encerar
    printf("\n\nAperte <Enter> para continuar.");
    getchar();

} // end method_16

/**
 * Method_17.
 */

void method_17()
{
    // variaveis
    double lado = 0.0;
    double area = 0.0;

    // entradas
    printf("\nDigite o valor do lado do cubo: ");
    scanf("%lf", &lado);
    getchar();

    // calculo matematico
    lado = lado * 7;
    area = pow(lado, 3);

    // saida
    printf("\nA area do cubo e: %lf", area);

    // encerrar
    printf("\n\nAperte <Enter> para continuar.");
    getchar();

} // end method_17

/**
 * Method_18.
 */

void method_18()
{
    // variaveis
    double comp = 0.0;
    double larg = 0.0;
    double altu = 0.0;
    double volu = 0.0;

    printf("\nDigite o valo do comprimento do paralelepipedo: ");
    scanf("%lf", &comp);
    getchar();
    printf("\nDigite o valo da largura do paralelepipedo: ");
    scanf("%lf", &larg);
    getchar();
    printf("\nDigite o valo da altura do paralelepipedo: ");
    scanf("%lf", &altu);
    getchar();

    // calculo matematico
    comp = comp / 6;
    larg = larg / 6;
    altu = altu / 6;

    volu = comp * larg * altu;

    // saida
    printf("\nO volume do paralelepipedo com 1/6 do tamanho e: %lf", volu);

    // encerrar
    printf("\n\nAperte <Enter> para continuar.");
    getchar();

} // end method_18

/**
 * Method_19.
 */

void method_19()
{
    // variaveis
    double r = 0.0;
    double area = 0.0;

    // entradas
    printf("\nDigite o valor do raio: ");
    scanf("%lf", &r);
    getchar();

    // calculo matematico
    r = r / 2;
    area = (M_PI * pow(r, 2)) / 2;

    // saida
    printf("\nO valor da area do semicirculo e: %lf", area);

    // encerrar
    printf("\n\nAperte <Enter> para continuar.");
    getchar();

} // end method_19

/**
 * Method_20.
 */

void method_20()
{
    // variaveis
    double raio = 0.0;
    double volume = 0.0;

    // entrada
    printf("\nDigite o valor do raio: ");
    scanf("%lf", &raio);
    getchar();

    // calculo matematico
    raio = (raio * 3)/8;
    volume = (4 * M_PI* pow(raio,3))/3;

    // saida 
    printf("\nO volume da esfera e: %lf", volume);

    // encerrar
    printf("\n\nAperte <Enter> para continuar.");
    getchar();

}   // end method_20

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
    printf("%s\n", "Exemplo0110 - Programa = v1.9");
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
        printf("\n%s", "8 - Method_08");
        printf("\n%s", "9 - Method_09");
        printf("\n%s", "10 - Method_10");
        printf("\n%s", "11 - Method_11");
        printf("\n%s", "12 - Method_12");
        printf("\n%s", "13 - Method_13");
        printf("\n%s", "14 - Method_14");
        printf("\n%s", "15 - Method_15");
        printf("\n%s", "16 - Method_16");
        printf("\n%s", "17 - Method_17");
        printf("\n%s", "18 - Method_18");
        printf("\n%s", "19 - Method_19");
        printf("\n%s", "20 - Method_20");
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
a.) a
b.) 4.2
c.) 10
d.) 1
e.) abc def
f .) abc def
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
0.8     01. ( OK )     identificacao de programa
0.9     01. ( OK )     identificacao de programa
1.0     01. ( OK )     identificacao de programa
1.1     01. ( OK )     identificacao de programa
1.2     01. ( OK )     identificacao de programa
1.3     01. ( OK )     identificacao de programa
1.4     01. ( OK )     identificacao de programa
1.5     01. ( OK )     identificacao de programa
1.6     01. ( OK )     identificacao de programa
1.7     01. ( OK )     identificacao de programa
1.8     01. ( OK )     identificacao de programa
1.9     01. ( OK )     identificacao de programa
1.9     01. ( OK )     identificacao de programa
2.0     01. ( OK )     identificacao de programa
*/