/*
 Contato.hpp - v0.0
 Author: Vinicius Cesar D'Ascenção Dias
*/
// ----------------------------------------------- definicoes globais
#ifndef _CONTATO_H_
#define _CONTATO_H_

using namespace std;
// dependencias
#include <iostream>
using std::cin;  // para entrada
using std::cout; // para saidas
using std::endl; // para mudar de linha

#include <iomanip>
using std::setw; // para definir espacamento

#include <string>
using std::string; // para cadeia de caracteres

#include <fstream>
using std::ifstream; // para ler arquivo
using std::ofstream; // para gravar arquivo

// outras dependencias

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

#include "Erro.hpp"

// ---------------------------------------------- definicao de classe

class Contato : public Erro
{
    /*
        Atributos privados
    */
private:
    string nome;
    string fone;
    string fone2;

    /*
        definicoes publicas
    */
public:
    //-------------------------------------------Constutors & Destructor

    /**
     * Destrutor.
     */
    ~Contato()
    {
    }

    /*
    Construtor padrao
    */
    Contato()
    {
        setErro(0); // nenhum erro, ainda
        // atribuir valores iniciais vazios
        nome = "";
        fone = "";
    } // end construtor (padrao)

    /**
     * Construtor alternativo.
     * @param nome_inicial a ser atribuido
     * @param fone_inicial a ser atribuido
     */
    Contato(string nome_inicial, string fone_inicial)
    {
        setErro(0); // nenhum erro, ainda

        // atribuir valores iniciais
        setNome(nome_inicial); // nome = nome_inicial
        setFone(fone_inicial); // fone = fone_inicial

    } // end constructor (alternativo)

    Contato(string nome_inicial, string fone_inicial1, string fone_inicial2)
    {
        setErro(0); // nenhum erro, ainda

        // atribuir valores iniciais
        setNome(nome_inicial);  // nome = nome_inicial
        setFone(fone_inicial1); // fone = fone_inicial1
        setFone(fone_inicial2); // fone = fone_inicial1

    } // end constructor (alternativo)

    /**
     * Construtor alternativo baseado em copia.
     */
    Contato(Contato const &another)
    {
        // atribuir valores iniciais por copia
        setErro(0);            // copiar erro
        setNome(another.nome); // copiar nome
        setFone(another.fone); // copiar fone
    }                          // end constructor (alternativo)

    // ----------------------------------- metodos para acesso

    /**
     * Metodo para atribuir nome.
     * @param nome a ser atribuido
     */
    void setNome(string nome)
    {
        if (nome.empty())
        {
            setErro(1); // nome invalido
        }
        else
        {
            this->nome = nome;
        }
    } // end setNome()

    /**
     * Metodo para atribuir telefone.
     * @param fone a ser atribuido
     */
    void setFone(string fone)
    {
        if (fone.empty())
        {
            setErro(2); // fone invalido
        }
        else
        {
            this->fone = fone;
        }
    } // end setFone()

    void setFone2(string fone)
    {
        char x = 'a';
        string phone = "";
        cout << "Caso queira adicionar mais um telefone digite S/N (Maiuscula): ";
        cin >> x;

        switch (x)
        {
        case 'S':
            if (fone.empty())
            {
                setErro(2); // fone invalido
            }
            else
            {
                this->fone2 = fone;
            }
            break;

        case 'N':
            break;

        default:
            cout << "Letra invalida!" << endl;
            break;
        }

    } // end setFone2()

    /**
     * Funcao para obter nome.
     * @return nome armazenado
     */
    string getNome()
    {
        return (this->nome);
    } // end getNome()

    /**
     * Funcao para obter fone.
     * @return fone armazenado
     */
    string getFone()
    {
        return (this->fone);
    } // end getFone()]
    string getFone2()
    {
        return (this->fone2);
    } // end getFone()

    /**
     * Funcao para obter dados de uma pessoa.
     * @return dados de uma pessoa
     */

    string toString()
    {
        return ("{" + getNome() + "," + getFone() + "}");
    } // end toString()

    string toString2()
    {
        return ("{" + getNome() + ", " + getFone() + ", " + getFone2() + "}");
    } // end toString()

    void readName()
    {
        string newName = "";
        cout << "Digite o nome da pessoa: ";
        cin >> newName;

        if (newName == "")
        {
            setErro(1);
        }
        else
        {
            this->nome = newName;
        } // end if
    }

    void readPhone()
    {
        string newPhone = "";
        cout << "Digite o numero da pessoa: ";
        cin >> newPhone;

        if (newPhone == "")
        {
            setErro(1);
        }
        else
        {
            this->fone = newPhone;
        } // end if
    }

    bool checkNumb()
    {
        bool result = false;
        int a = 0;

        a = this->fone.size();

        for (int x = 0; x < a; x = x + 1)
        {
            if (this->fone[x] == '-' || this->fone[x] >= '0' && this->fone[x] <= '9')
            {
                result = true;
            }
            else
            {
                result = false;
                break;
            }
        }
        return (result);
    }

    void fread(string fileName)
    {
        ifstream afile;
        string name = "";
        string phone = "";

        afile.open(fileName);
        afile >> name;
        afile >> phone;

        if (name != "" && phone != "")
        {
            this->nome = name;
            this->fone = phone;
        }

        afile.close();
    } // end fread()

    void fprint(string fileName)
    {
        ofstream afile;

        afile.open(fileName);

        afile << this->nome << endl;
        afile << this->fone << endl;

        afile.close();
    } // end fprint()

    void veriTwoNumb()
    {
        if (this->fone.empty() && this->fone2.empty())
        {
            cout << "Os telefones NAO existem." << endl;
        }
        else
        {
            cout << "Os telefones existem." << endl;
        }
    }

    int checkQuant()
    {
        int result = 0;

        if (this->fone.empty() && this->fone2.empty())
        {
            result = 2;
        }
        else
        {
            result = 0;
        }

        return (result);
    }
}; // end class contato

using ref_Contato = Contato *; // similar a typedef Contato* ref_Contato;

#endif