/*
 mymatrix.hpp - v0.0. - __ / __ / _____
 Author: Vinicius Cesar D'Ascencao Dias
*/

#ifndef _MYMATRIX_H_
#define _MYMATRIX_H_

// dependencias
#include <iostream>
using std::cin;  // para entradas
using std::cout; // para saida
using std::endl; // para mudanca de linha

#include <iomanip>
using std::setw;

#include <string>
using std::string; // para cadeia de caracteres

#include <fstream>   // para gravar arquivo
using std::ifstream; // para ler arquivo
using std::ofstream; // para gravar arquivo

#include "io.hpp"

template <typename T>
class Matrix
{
private: // area reservada
    T optional;
    int rows;
    int columns;
    T **data;

public: // area aberta
    Matrix()
    {
        // definir valores iniciais
        this->rows = 0;
        this->columns = 0;

        // ser reservar area
        data = nullptr;
    } // end constructor

    Matrix(int rows = 0, int columns = 0, T initial = T())
    {
        // definir dado local
        bool OK = true;

        // derfinir valores iniciais
        this->optional = initial;
        this->rows = rows;
        this->columns = columns;

        // reservar area
        data = new T *[rows];
        if (data != nullptr)
        {
            for (int x = 0; x < rows; x = x + 1)
            {
                data[x] = new T[columns];
                OK = OK && (data[x] != nullptr);
            } // end for

            if (!OK)
            {
                data = nullptr;
            } // end if
        }     // end if
    }         // emd constructor

    ~Matrix()
    {
        if (data != nullptr)
        {
            for (int x = 0; x < rows; x = x + 1)
            {
                delete (data[x]);
            } // end for
            delete (data);
            data = nullptr;
        } // end if
    }     // end constructor()

    void set(int row, int column, T value)
    {
        if (row < 0 || row >= rows || column < 0 || column >= columns)
        {
            cout << "\nERROR> invalid position.\n";
        }
        else
        {
            data[row][column] = value;
        } // end if
    }     // end set()

    T get(int row, int column)
    {
        T value = optional;
        if (row < 0 || row >= rows || column < 0 || column >= columns)
        {
            cout << "\nERROR: Imvalid position.\n";
        }
        else
        {
            value = data[row][column];
        } // end if

        return (value);
    } // emd get()

    void print()
    {
        if (data)
        {
            cout << endl;
            for (int x = 0; x < rows; x = x + 1)
            {
                cout << "REP 1" << endl;

                for (int y = 0; y < columns; y = y + 1)
                {
                    cout << "REP 2" << endl;
                    cout << data[x][y] << "\t";
                } // end for
                cout << endl;
            } // end for
        }
        else
        {
            cout << "ERROR: Missing data." << endl;
        }

    } // end print()

    void read()
    {
        cout << endl;
        for (int x = 0; x < rows; x = x + 1)
        {
            for (int y = 0; y < columns; y = y + 1)
            {
                cout << setw(2) << x << "," << setw(2) << y << ":";
                cin >> data[x][y];
            } // end for
        }     // end for
        cout << endl;
    } // end read()

    void fprint(string fileName)
    {
        ofstream afile;

        afile.open(fileName);
        afile << rows << endl;
        afile << columns << endl;
        for (int x = 0; x < rows; x = x + 1)
        {
            for (int y = 0; y < columns; y = y + 1)
            {
                afile << data[x][y] << endl;
            } // end for
        }     // end for

        afile.close();
    } // end fprint()

    void fread(string fileName)
    {
        ifstream afile;
        int m = 0;
        int n = 0;

        afile.open(fileName);
        afile >> m;
        afile >> n;

        if (m <= 0 || n <= 0)
        {
            cout << "\nERROR: Invalid dimensions for matrix.\n"
                 << endl;
        }
        else
        {
            // guardar a quantidade de dados
            rows = m;
            columns = n;

            // reservar area
            data = new T *[rows];

            for (int x = 0; x < rows; x = x + 1)
            {
                data[x] = new T[columns];
            } // end for ( alocacao )

            // ler dados
            for (int x = 0; x < rows; x = x + 1)
            {
                for (int y = 0; y < columns; y = y + 1)
                {
                    afile >> data[x][y];
                } // end for
            }     // end for
        }         // end if

        afile.close();
    } // end fread()

    Matrix &operator=(const Matrix<T> &other)
    {
        if (other.rows == 0 || other.columns == 0)
        {
            cout << "\nERROR: Missing data.\n"
                 << endl;
        }
        else
        {
            this->rows = other.rows;
            this->columns = other.columns;
            this->data = new T *[rows];
            for (int x = 0; x < columns; x = x + 1)
            {
                this->data[x] = new T[columns];
            } // end for

            for (int x = 0; x < this->rows; x = x + 1)
            {
                for (int y = 0; y < this->columns; y = y + 1)
                {
                    data[x][y] = other.data[x][y];
                } // end for
            }     // end for
        }         // end if

        return (*this);
    } // end operator=()

    bool isZeros()
    {
        bool result = false;
        int x = 0;
        int y = 0;

        if (rows > 0 && columns > 0)
        {
            result = true;
            while (x < rows && result)
            {
                y = 0;
                while (y < columns && result)
                {
                    result = result && (data[x][y] == 0);
                    y = y + 1;
                }
                x = x + 1;
            } // end while
        }     // end if

        return (result);
    } // end isZeros

    bool operator!=(const Matrix<T> &other)
    {
        bool result = false;
        int x = 0;
        int y = 0;

        if (other.rows == 0 || rows != other.rows ||
            other.columns == 0 || columns != other.columns)
        {
            cout << "\nERROR: Missing data.\n"
                 << endl;
        }
        else
        {
            x = 0;
            while (x < rows && !result)
            {
                y = 0;
                while (y < columns && !result)
                {
                    result = (data[x][y] != other.data[x][y]);
                    y = y + 1;
                } // end while
                x = x + 1;
            } // end while
        }     // end if

        return (result);
    } // end operator!=()

    Matrix &operator-(const Matrix<T> &other)
    {
        static Matrix<T> result(1, 1, 0);
        int x = 0;
        int y = 0;

        if (other.rows == 0 || rows != other.rows || other.columns == 0 || columns != other.columns)
        {
            cout << "\nERROR: Missing data.\n"
                 << endl;
        }
        else
        {
            result.rows = other.rows;
            result.columns = other.columns;
            result.data = new T *[result.rows];

            for (int x = 0; x < result.rows; x = x + 1)
            {
                result.data[x] = new T[result.columns];
            } // end for (alocacao)

            for (int x = 0; x < result.rows; x = x + 1)
            {
                for (int y = 0; y < result.columns; y = y + 1)
                {
                    result.data[x][y] = data[x][y] - other.data[x][y];
                } // end for
            }     // end for
        }         // end if

        return (result);
    } // end operator-()

    Matrix &operator*(const Matrix<T> &other)
    {
        static Matrix<T> result(1, 1, 0);
        int x = 0;
        int y = 0;
        int z = 0;
        int sum = 0;

        if (rows <= 0 || columns == 0 || other.rows <= 0 || other.columns == 0 || columns != other.rows)
        {
            cout << endl
                 << "ERROR: Invalid data." << endl;
            result.data[0][0] = 0;
        }
        else
        {
            result.rows = rows;
            result.columns = other.columns;
            result.data = new T *[result.rows];

            for (int x = 0; x < result.rows; x = x + 1)
            {
                result.data[x] = new T[result.columns];
            } // end for (alocacao)

            for (x = 0; x < result.rows; x = x + 1)
            {
                for (y = 0; y < result.columns; y = y + 1)
                {
                    sum = 0;
                    for (z = 0; z < columns; z = z + 1)
                    {
                        sum = sum + data[x][z] * other.data[z][y];
                    } // end for

                    result.data[x][y] = sum;
                } // end for
            }     // end for
        }         // end if

        return (result);
    } // end operator*()

    const int getRows()
    {
        return (rows);
    } // end getRows()

    const int getColumns()
    {
        return (columns);
    } // end getColumns()

    /***************** Exercicios *****************/
    /*
        Exemplo1211.cpp
        Função para geração aleatória de valor.
        @return - Valor aleatorio.
        @param - Void.
    */
    int random()
    {
        // definir dados
        T rand = 0;

        // semente geradora
        srand(static_cast<unsigned int>(std::time(0)));

        // geracao de numero aleatorio com maximo e minimo
        rand = std::rand() % (100 - 10 + 1) + 10;

        // retorna o valor
        return (rand);
    } // end ramdom()

    /*
        Exemplo1212.cpp
        Função para multiplicar o valor com uma constante K.
        @return - new Object.
        @param - const k, other Object.
    */
    Matrix<T> scalar(int k, const Matrix<T> other)
    {
        // definir dados
        int n = 0;
        int m = 0;

        // atribuicao para a copia
        m = other.rows;
        n = other.columns;

        // teste fisico
        if (m <= 0 || n <= 0)
        {
            cout << "ERRO: Missing Data.\n";
        }
        else
        {
            // criacao do objeto
            Matrix<int> int_result(m, n, 0);

            // atribuicao de tamanho para o novo objeto
            int_result.rows = m;
            int_result.columns = n;

            // alocacao de espaco para o novo objeto
            int_result.data = new T *[m];

            // alocacao secundaria para matriz
            for (int x = 0; x < m; x = x + 1)
            {
                int_result.data[x] = new T[n];
            } // end for (alocacao)

            // for para rows
            for (int x = 0; x < m; x = x + 1)
            {
                // for para columns
                for (int y = 0; y < n; y = y + 1)
                {
                    // atribuicao para data
                    int_result.data[x][y] = other.data[x][y] * k;
                } // end for
            }     // end for
        }         // end if

        // retornar novo objeto
        return (int_result);
    } // end scalar()

    /*
        Exemplo1213.cpp
        Função para verificar se a matriz é identidade.
        @return - result valor booleano (T or F).
        @param - Void.
    */
    bool identidade()
    {
        // definir dados
        bool result = true;
        int cont = 0;

        // teste fisico
        if (rows != columns)
        {
            cout << "ERROR: Matrix invalid" << endl;
        }
        else
        {
            // for para as rows e columns
            for (int x = 0; x < rows && result; x = x + 1)
            {
                // teste para a verificação
                if (data[x][x] == 1)
                {
                    // contador
                    cont = cont + 1;
                }
                else
                {
                    // atribuicao para falso caso nao seja
                    result = false;
                } // end if
            }     // end for

            // teste para verificar se contador e igual a rows ou columns
            if (cont == rows || cont == columns)
            {
                result = true;
            } // end if
        }     // end if

        // retornar result (T or F)
        return (result);
    } // end identidade()

    /*
        Exemplo1214.cpp
        Operador para verificar se a matriz é identidade.
        @return - result - Valor booleano (T or F).
        @param - Objeto 1, Objeto 2.

        OBS.: Não sei o motivo mas tenho que usar a propriedade friend (perguntar ao theldo depois)
        poderia usar o this para melhorar e retirar um dos objetos passados pelo parametro
    */
    friend bool operator==(const Matrix<T> &other1, const Matrix<T> &other2)
    {
        // definir dados
        bool result = false;
        int cont = 0;
        int m = 0;
        int n = 0;

        // teste fisico
        if (other1.rows == 0 || other1.columns == 0 || other2.rows == 0 || other2.columns == 0)
        {
            cout << "\nERROR: Missing data.\n"
                 << endl;
        }
        else
        {
            // teste se as matrizes sao iguais ou nao
            if (other1.rows != other2.rows || other1.columns != other2.columns)
            {
                cout << "As matrizes nao sao iguais" << endl;
                result = false;
            }
            else
            {
                // definir rows and columns
                m = other1.rows;
                n = other1.columns;

                // for para rows
                for (int x = 0; x < m; x = x + 1)
                {
                    // for para columns
                    for (int y = 0; y < n; y = y + 1)
                    {
                        // teste para igualdade
                        if (other1.data[x][y] == other2.data[x][y])
                        {
                            // contador para verificacao
                            cont = cont + 1;
                        }
                        else
                        {
                            break;
                        } // end if
                    }     // end for
                }         // end for
            }             // end if
        }                 // end if

        // teste para verificar se sao iguais e resultar true
        if (cont == (m * n))
        {
            result = true;
        } // end if

        // return result (T or F)
        return (result);
    } // end operator==()

    /*
        Exemplo1215.cpp
        Funcao para somar duas matrizes.
        @return - new Object.
        @param - Objeto.
    */
    Matrix<T> add(const Matrix<T> &int_matrix)
    {
        // definir dados
        int m = 0;
        int n = 0;

        // copia das rows and columns
        m = int_matrix.rows;
        n = int_matrix.columns;

        // cout << "Rows = " << m << endl;
        // cout << "Columns = " << n << endl;

        // criar novo objeto (igual)
        Matrix<T> int_result(m, n, 0);

        // teste fisico
        if (this->rows != m || this->columns != n)
        {
            cout << "ERROR: Invalid Matrix." << endl;
        }
        else
        {
            // cout << "PARAR 1" << endl;
            // for para rows
            for (int x = 0; x < m; x = x + 1)
            {
                // cout << "PARAR 2" << endl;
                // for para columns
                for (int y = 0; y < n; y = y + 1)
                {
                    // cout << "PARAR 3" << endl;
                    // soma dos valores das matrizes
                    int_result.data[x][y] = this->data[x][y] + int_matrix.data[x][y];
                } // end for
            }     // end for
        }         // end if

        // retornar novo objeto (Matrix<T>)
        return (int_result);
    } // end add()

    /*
       Exemplo1216.cpp
       Funcao para multiplicar uma determinada
       row com outra determinada row dada pelo
       usuario e multiplicar por uma constante.
       @return - Void.
       @param - Objeto.
   */
    void addRows(int r1, int r2, int k)
    {
        // teste do limite fisico
        if (r1 < 0 || r2 < r1)
        {
            cout << "ERROR: Invalid position." << endl;
        }
        else
        {
            // for para andar pelas columnas
            for (int y = 0; y < columns; y = y + 1)
            {
                /* atribuicao da soma da matriz
                com a row escolhida pelo usuario
                e multiplicada por uma constante
                */
                this->data[r1][y] = this->data[r1][y] + (this->data[r2][y] * k);
            } // end for
        }     // end if
    }         // end addRows()

    /*
        Exemplo1217.cpp
        Funcao para subtrair determinada row com
        outra determinada row e substituir a posicao inicial.
        @return - Void.
        @param - Posicao 1, Posicao 2.
    */
    void subtractRows(int r1, int r2)
    {
        // reste fisico
        if (r1 < 0 || r2 < r1)
        {
            cout << "ERROR: Invalid position." << endl;
        }
        else
        {
            // for para andar pelas colunas
            for (int y = 0; y < columns; y = y + 1)
            {
                // substituicao dos valores e subitracao
                this->data[r1][y] = this->data[r1][y] - this->data[r2][y];
            } // end for
        }     // end if
    }         // end subtractRows()

    /*
        Exemplo1218.cpp
        Funcao para procurar determinado valor
        e retornar a linha onde esta o valor.
        @return - result (row).
        @param - Const K.
    */
    int searchRows(int k)
    {
        // definir dados
        int result = 0;

        // for para rows
        for (int x = 0; x < this->rows; x = x + 1)
        {
            // for para columns
            for (int y = 0; y < this->columns; y = y + 1)
            {
                // teste para verificar se a constante esta na matriz
                if (this->data[x][y] == k)
                {
                    // salvar do resultado (rows)
                    result = x;
                } // end if
            }     // end for
        }         // end for

        // retornar resultado (row)
        return (result);
    }

    /*
        Exemplo1219.cpp
        Funcao para procurar determinado valor
        e retornar a coluna onde esta o valor.
        @return - result (columns).
        @param - Const K.
    */
    int searchColumns(int k)
    {
        // definir dados
        int result = 0;

        // teste fisico
        if (this->rows < 0 || this->columns < 0)
        {
            // retornar valor invalido
            result = -1;
        }
        else
        {
            // for para as rows
            for (int x = 0; x < this->rows; x = x + 1)
            {
                // for para as columns
                for (int y = 0; y < this->columns; y = y + 1)
                {
                    // teste de verificacao da constante
                    if (this->data[x][y] == k)
                    {
                        // atribuicao do resultado (columns)
                        result = y;
                    } // end if
                }     // end for
            }         // end for
        }

        // retornar resultado (columns)
        return (result);
    } // end searchColumns()

    /*
        Exemplo1220.cpp
        Funcao para trocar as linha pelas as colunas.
        @return - ?.
        @param - Void.

        OBS.: Não funcionou e nao sei como fazer :/
    */
    void transpose()
    {
        int m = 0;
        int n = 0;

        m = this->rows;
        n = this->columns;
        
        Matrix<T> * result(m, n, 0)

        // for para as rows
        for (int x = 0; x < this->rows; x = x + 1)
        {
            // for para as columns
            for (int y = 0; y < this->columns; y = y + 1)
            {
                // troca da linha pela coluna
                this->data[x][y] = result->data[y][x];
            } // end for
        }     // end for
    }         // end transpose()

}; // end class

#endif
