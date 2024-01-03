/*
 Exemplo1100 - v0.0
 Author: Vinicius Cesar D'Ascenção Dias
 */

// dependencias
#include "io.hpp"

// ----------------------------------------------- definicoes globais
void pause(std::string text)
{
    std::string dummy;
    std::cin.clear();
    std::cout << std::endl
              << text;
    std::cin.ignore();
    std::getline(std::cin, dummy);
    std::cout << std::endl
              << std::endl;
} // end pause()

// ----------------------------------------------- classes / pacotes

#include "myarray.hpp"

using namespace std;

// ----------------------------------------------- metodos

/**
 Method_00 - nao faz nada.
*/
void method_00()
{
    // nao faz nada
} // end method_00 ( )

/**
 Method_01 - Mostrar certa quantidade de valores.
*/
void method_01()
{
    // definir dados
    Array<int> int_array(5, 0);

    // identificar
    cout << "\nMethod_01 - v0.1\n"
         << endl;

    int_array.set(0, 1);
    int_array.set(1, 2);
    int_array.set(2, 3);
    int_array.set(3, 4);
    int_array.set(4, 5);

    // mostrar dados
    int_array.print();

    // reciclar espaco
    int_array.free();

    // encerrar
    pause("Aperte <Enter> para continuar");
} // end method_01()

/**
 Method_02.
*/
void method_02()
{
    // identificar
    cout << endl
         << "Method_02 - v0.2" << endl;

    // definir dados
    Array<int> int_array(5, 0);

    // ler dados
    int_array.read();

    // mostrar dados
    int_array.print();

    // reciclar espaco
    int_array.free();

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_03.
*/
void method_03()
{
    // definir dados
    Array<int> int_array(5, 0);

    // identificar
    cout << endl
         << "Method_03 - v0.3" << endl;

    // ler dados
    int_array.read();

    // mostrar dados
    int_array.fprintf("INT_ARRAY1.TXT");

    // reciclar espaco
    int_array.free();

    // encerrar
    pause("Apertar ENTER para continuar");
} // end method_03()

/**
 Method_04.
*/
void method_04()
{
    // definir dados
    Array<int> int_array(5, 0);

    // identificar
    cout << endl
         << "Method_04 - v0.4" << endl;

    // ler dados
    int_array.fread("INT_ARRAY1.TXT");

    // mostrar dados
    int_array.print();

    // reciclar espaco
    int_array.free();

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_05.
*/
void method_05()
{
    // identificar
    cout << endl
         << "Method_05 - v0.0" << endl;

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_06.
*/
void method_06()
{
    // identificar
    cout << endl
         << "Method_06 - v0.0" << endl;

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_07.
*/
void method_07()
{
    // identificar
    cout << endl
         << "Method_07 - v0.0" << endl;

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_08.
*/
void method_08()
{
    // identificar
    cout << endl
         << "Method_08 - v0.0" << endl;

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_09.
*/
void method_09()
{
    // identificar
    cout << endl
         << "Method_09 - v0.0" << endl;

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_10.
*/
void method_10()
{
    // identificar
    cout << endl
         << "Method_10 - v0.0" << endl;

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_11. - Exercicio
*/
void method_11()
{
    // identificar
    cout << endl
         << "Method_11 - v0.0" << endl;

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_12. - Exercicio
*/
void method_12()
{
    // identificar
    cout << endl
         << "Method_12 - v0.0" << endl;

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_13. - Exercicio
*/
void method_13()
{
    // identificar
    cout << endl
         << "Method_13 - v0.0" << endl;

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_14. - Exercicio
*/
void method_14()
{
    // identificar
    cout << endl
         << "Method_14 - v0.0" << endl;

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_15. - Exercicio
*/
void method_15()
{
    // identificar
    cout << endl
         << "Method_15 - v0.0" << endl;

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_16. - Exercicio
*/
void method_16()
{
    // identificar
    cout << endl
         << "Method_16 - v0.0" << endl;

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_17. - Exercicio
*/
void method_17()
{
    // identificar
    cout << endl
         << "Method_17 - v0.0" << endl;

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_18. - Exercicio
*/
void method_18()
{
    // identificar
    cout << endl
         << "Method_18 - v0.0" << endl;

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_19. - Exercicio
*/
void method_19()
{
    // identificar
    cout << endl
         << "Method_19 - v0.0" << endl;

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_20. - Exercicio
*/
void method_20()
{
    // identificar
    cout << endl
         << "Method_20 - v0.0" << endl;

    // encerrar
    pause("Apertar ENTER para continuar");
}

// ----------------------------------------------- acao principal

/*
 Funcao principal.
 @return codigo de encerramento
*/
int main(int argc, char **argv)
{
    // definir dado
    int x = 0; // definir variavel com valor inicial

    // repetir ate desejar parar
    do
    {
        // identificar
        cout << "EXEMPLO1104 - Programa - v0.4\n " << endl;

        // mostrar opcoes
        cout << "Opcoes" << endl;
        cout << " 0 - Parar " << endl;
        cout << " 1 - Method 01 " << endl;
        cout << " 2 - Method 02 " << endl;
        cout << " 3 - Method 03 " << endl;
        cout << " 4 - Method 04 " << endl;
        cout << " 5 - Method 05 " << endl;
        cout << " 6 - Method 06 " << endl;
        cout << " 7 - Method 07 " << endl;
        cout << " 8 - Method 08 " << endl;
        cout << " 9 - Method 09 " << endl;
        cout << "10 - Method 10 " << endl;
        cout << "11 - Method 11 " << endl;
        cout << "12 - Method 12 " << endl;
        cout << "13 - Method 13 " << endl;
        cout << "14 - Method 14 " << endl;
        cout << "15 - Method 15 " << endl;
        cout << "16 - Method 16 " << endl;
        cout << "17 - Method 17 " << endl;
        cout << "18 - Method 18 " << endl;
        cout << "19 - Method 19 " << endl;
        cout << "20 - Method 20 " << endl;

        // ler do teclado
        cout << endl
             << "Entrar com uma opcao: ";
        cin >> x;

        // escolher acao
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
            cout << endl
                 << "ERRO: Valor invalido." << endl;
        } // end switch

    } while (x != 0);

    // encerrar
    pause("Aperte <Enter> para finalizar");
    return 0;
} // end main()