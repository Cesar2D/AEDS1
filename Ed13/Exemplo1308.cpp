/*
 Exemplo1300 - v0.0
 Author: Vinicius Cesar D'Ascenção Dias
 */

// dependencias
#include "io.hpp"

// ----------------------------------------------- classes / pacotes

#include "Contato.hpp" // clase para tratar dados de pessoas

// ----------------------------------------------- definicoes globais

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
    Contato pessoa1;
    ref_Contato pessoa2 = nullptr;
    ref_Contato pessoa3 = new Contato();

    // identificar
    cout << "\nMethod_01 - v0.1\n"
         << endl;

    // encerrar
    pause("Aperte <Enter> para continuar");
} // end method_01()

/**
 Method_02.
*/
void method_02()
{
    // definir dados
    Contato pessoa1;
    ref_Contato pessoa2 = nullptr;
    ref_Contato pessoa3 = new Contato();

    // identificar
    cout << endl
         << "Method_02 - v0.2" << endl;

    // testar atribuicoes
    pessoa1.setNome("Pessoa_01");
    pessoa1.setFone("111");
    pessoa3->setNome("Pessoa_03");
    pessoa3->setFone("333");

    cout << "pessoa1 - {" << pessoa1.getNome() << ", " << pessoa1.getFone() << "}" << endl;
    cout << "pessoa3 - {" << pessoa3->getNome() << ", " << pessoa3->getFone() << "}" << endl;

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_03.
*/
void method_03()
{
    // definir dados
    Contato pessoa1;
    ref_Contato pessoa2 = nullptr;
    ref_Contato pessoa3 = new Contato();

    // identificar
    cout << endl
         << "Method_03 - v0.3" << endl;

    // testar atribuicoes
    pessoa1.setNome("Pessoa_01");
    pessoa1.setFone("111");
    pessoa3->setNome("Pessoa_3");
    pessoa3->setFone("333");

    cout << "pessoa1 - " << pessoa1.toString() << endl;
    cout << "pessoa3 - " << pessoa3->toString() << endl;

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_04.
*/
void method_04()
{
    // definir dados
    Contato pessoa1("Pessoa_01", "111");
    ref_Contato pessoa2 = nullptr;
    ref_Contato pessoa3 = new Contato("Pessoa_03", "333");

    // identificar
    cout << endl
         << "Method_04 - v0.4" << endl;

    // testar atribuicoes
    cout << "pessoa1 - " << pessoa1.toString() << endl;
    cout << "pessoa3 - " << pessoa3->toString() << endl;

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_05.
*/
void method_05()
{
    // definir dados
    Contato pessoa1("Pessoa_01", "111");
    ref_Contato pessoa2 = nullptr;
    ref_Contato pessoa3 = new Contato("", "333");

    // identificar
    cout << endl
         << "Method_05 - v0.5" << endl;

    // testar atribuicoes
    cout << "pessoa1 - " << pessoa1.toString() << "(" << pessoa1.getErro() << ")" << endl;
    cout << "pessoa3 - " << pessoa3->toString() << "(" << pessoa3->getErro() << ")" << endl;

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_06.
*/
void method_06()
{
    // definir dados
    Contato pessoa1("Pessoa_01", "111");
    ref_Contato pessoa2 = nullptr;
    ref_Contato pessoa3 = new Contato("Pessoa_03", "333");

    // identificar
    cout << endl
         << "Method_06 - v0.0" << endl;

    // testar atribuicoes
    if (!pessoa1.hasErro())
    {
        cout << "pessoa1 - " << pessoa1.toString() << endl;
    }
    else
    {
        cout << "pessoa1 tem erro (" << pessoa1.getErro() << ")" << endl;
    }

    if (!pessoa3->hasErro())
    {
        cout << "pessoa3 - " << pessoa3->toString() << endl;
    }
    else
    {
        cout << "pessoa3 tem erro (" << pessoa3->getErro() << ")" << endl;
    }

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_07.
*/
void method_07()
{
    // definir dados
    Contato pessoa1("Pessoa_01", "111");
    ref_Contato pessoa2 = nullptr;
    ref_Contato pessoa3 = new Contato("", "333");

    // identificar
    cout << endl
         << "Method_07 - v0.7" << endl;

    // testar atribuicoes
    pessoa2 = &pessoa1; // copiar endereco de objeto

    if (!pessoa2->hasErro())
    {
        cout << "pessoa1 - " << pessoa2->toString() << endl;
    }
    else
    {
        cout << "pessoa1 tem erro (" << pessoa2->getErro() << ")" << endl;
    }

    pessoa2 = pessoa3; // vincular-se a outro objeto
    if (!pessoa2->hasErro())
    {
        cout << "pessoa3 - " << pessoa2->toString() << endl;
    }
    else
    {
        cout << "pessoa3 tem erro (" << pessoa2->getErro() << ")" << endl;
    }

    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 Method_08.
*/
void method_08()
{
    // definir dados
    Contato pessoa1("Pessoa_01", "111");
    ref_Contato pessoa2 = nullptr;
    ref_Contato pessoa3 = new Contato("", "333");
    ref_Contato pessoa4 = nullptr;

    // identificar
    cout << endl
         << "Method_08 - v0.8" << endl;

    pessoa2 = new Contato(pessoa1);
    if (!pessoa2->hasErro())
    {
        cout << "pessoa2 - " << pessoa2->toString() << endl;
    }
    else
    {
        cout << "pessoa2 tem erro (" << pessoa2->getErro() << ")" << endl;
    }

    if (pessoa3) // o teste de existencia deve ser feito previamente
    {
        pessoa2 = new Contato(*pessoa3);
        if (!pessoa2->hasErro())
        {
            cout << "pessoa2 - " << pessoa2->toString() << endl;
        }
        else
        {
            cout << "pessoa2 tem erro (" << pessoa2->getErro() << ")" << endl;
        } // end if
    }     // end if

    if (pessoa4) // o teste de existencia deve ser feito previamente
    {
        pessoa2 = new Contato(*pessoa4);
        if (!pessoa2->hasErro())
        {
            cout << "pessoa2 - " << pessoa2->toString() << endl;
        }
        else
        {
            cout << "pessoa2 tem erro (" << pessoa4->getErro() << ")" << endl;
        } // end if
    }     // end if

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
        cout << "EXEMPLO1308 - Programa - v0.8\n " << endl;

        // mostrar opcoes
        cout << "Opcoes" << endl;
        cout << " 0 - parar " << endl;
        cout << " 1 - Method_01 " << endl;
        cout << " 2 - Method_02 " << endl;
        cout << " 3 - Method_03 " << endl;
        cout << " 4 - Method_04 " << endl;
        cout << " 5 - Method_05 " << endl;
        cout << " 6 - Method_06 " << endl;
        cout << " 7 - Method_07 " << endl;
        cout << " 8 - Method_08 " << endl;
        cout << " 9 - Method_09 " << endl;
        cout << "10 - Method_10 " << endl;
        cout << "11 - Method_11 " << endl;
        cout << "12 - Method_12 " << endl;
        cout << "13 - Method_13 " << endl;
        cout << "14 - Method_14 " << endl;
        cout << "15 - Method_15 " << endl;
        cout << "16 - Method_16 " << endl;
        cout << "17 - Method_17 " << endl;
        cout << "18 - Method_18 " << endl;
        cout << "19 - Method_19 " << endl;
        cout << "20 - Method_20 " << endl;

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