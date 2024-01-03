/*
 myarray.hpp - v0.0
 Author: Vinicius Cesar D'Ascenção Dias
*/
// ----------------------------------------------- definicoes globais
#ifndef _MYARRAY_HPP_
#define _MYARRAY_HPP_

// dependencias
#include "io.hpp"

using std::cin;  // para entrada
using std::cout; // ára saida
using std::endl; // para mudar de linha

using std::setw; // para definir escapamento

using std::string; // para cadeia de caracteres

using std::ifstream; // para ler arquivo
using std::ofstream; // para gravar arquivo

template <typename T>
class Array
{
private: // area reservada
    T optional;
    int length;
    T *data;

public: // area aberta
    Array(int n, T initial)
    {
        // definir valores iniciais
        optional = initial;
        length = 0;
        data = nullptr;

        // reservar area
        if (n > 0)
        {
            length = n;
            data = new T[length];
        } // end if
    }     // end constructor

    void free()
    {
        if (data != nullptr)
        {
            delete (data);
            data = nullptr;
        } // end if
    }     // end free()

    void set(int position, T value)
    {
        if (0 <= position && position < length)
        {
            data[position] = value;
        } // end if
    }     // end set()

    T get(int position)
    {
        T value = optional;

        if (0 <= position && position < length)
        {
            value = data[position];
        } // end if

        return (value);
    } // end get()

    void print()
    {
        cout << endl;

        for (int x = 0; x < length; x = x + 1)
        {
            cout << setw(3) << x + 1 << ":" << setw(9) << data[x] << endl;

        } // end for

        cout << endl;
    } // end print()

    void read()
    {
        cout << endl;
        for (int x = 0; x < length; x = x + 1)
        {
            cout << setw(3) << x << ":";
            cin >> data[x];
        } // end for
        cout << endl;
    } // end read()

    void fprintf(string fileName)
    {
        ofstream afile; // output file

        afile.open(fileName);

        afile << length << endl;

        for (int x = 0; x < length; x = x + 1)
        {
            afile << data[x] << endl;
        } // end for

        afile.close();
    } // end fprint()

    void fread(string fileName)
    {
        ifstream afile; // input file

        int n = 0;

        afile.open(fileName);

        afile >> n;

        if (n <= 0)
        {
            cout << "\nERROR: invalid length.\n"
                 << endl;
        }
        else
        {
            // guardar a quantidade de dados
            length = n;

            // recervar area
            data = new T[n];

            // ler dados
            for (int x = 0; x < length; x = x + 1)
            {
                afile >> data[x];
            } // end for
        }     // end if

        afile.close();

    } // end fread()

    Array()
    {
        // definir valores iniciais
        length = 0;

        // reservar area
        data = nullptr;
    } // end constructor

    // construtor baseado em copia
    Array(int length, int other[])
    {
        if (length <= 0)
        {
            cout << "\nERROR: Missing data.\n"
                 << endl;
        }
        else
        {
            // criar copia
            this->length = length;

            // reservar area
            data = new T[this->length];

            // ler dados
            for (int x = 0; x < this->length; x = x + 1)
            {
                data[x] = other[x];
            } // end for
        }     // end if
    }         // end constructor()

    Array(const Array &other)
    {
        if (other.length <= 0)
        {
            cout << "\nERROR: Missing data.\n"
                 << endl;
        }
        else
        {
            // criar copia
            length = other.length;

            // reservar area
            data = new T[other.length];

            // ler dados
            for (int x = 0; x < length; x = x + 1)
            {
                data[x] = other.data[x];
            } // end for
        }     // end if
    }         // end constructor()

    Array &operator=(const Array<T> other)
    {
        if (other.length <= 0)
        {
            cout << "\nERROR: Missing data.\n"
                 << endl;
        }
        else
        {
            this->length = other.length;
            this->data = new T[other.length];

            for (int x = 0; x < this->length; x = x + 1)
            {
                data[x] = other.data[x];
            } // end for
        }     // end if

        return (*this);
    } // end operator=

    bool operator==(const Array<T> other)
    {
        bool result = false;
        int x = 0;

        if (other.length == 0 || length != other.length)
        {
            cout << "\nERROR: Missing data.\n"
                 << endl;
        }
        else
        {
            x = 0;
            result = true;
            while (x < this->length && result)
            {
                result = result && (data[x] == other.data[x]);
                x = x + 1;
            } // end while

        } // end if
        return (result);
    } // edn operator== ()

    Array &operator+(const Array<T> other)
    {
        static Array<T> result(other);

        if (other.length <= 0)
        {
            cout << "\nERROR: Missing data.\n"
                 << endl;
        }
        else
        {
            for (int x = 0; x < this->length; x = x + 1)
            {
                result.data[x] = result.data[x] + this->data[x];
            } // end for
        }     // end if
        return (result);
    } // end operator+()

    const int getLength()
    {
        return (length);
    } // end getLength()

    T &operator[](const int position)
    {
        static T value = optional;

        if (position < 0 || length <= position)
        {
            cout << endl
                 << "\nERROR: Invalid position.\n"
                 << endl;
        }
        else
        {
            value = data[position];
        } // end if
        return (value);
    } // end operator[]

    int random(int n, int min, int max)
    {
        T rand = 0;

        if (min >= 0 && max > min)
        {
            srand(static_cast<unsigned int>(std::time(0)));

            rand = std::rand() % (max - min + 1) + min;
        }
        else
        {
            cout << "ERROR: Ivalid numbers" << endl;
        }
        return (rand);
    } // end ramdom()

    int searchFirstEven()
    {
        T maior = 0;
        
        maior = data[0];
        
        for(int x = 0; x < length; x = x + 1)
        {
            if(data[x] % 2 == 0)
            {
                if(data[x] > maior)
                {
                    
                    maior = data[x];
                }
            }
        }

        return (maior);
    } 
    
    int searchFirstOdd()
    {
        T menor = 0;
        
        menor = data[0];
        
        for(int x = 0; x < length; x = x + 1)
        {
            if(data[x] % 2 != 0)
            {
                if(data[x] < menor)
                {
                    menor = data[x];
                }
            }
        }
        
        return (menor);
    }
    
    int addInterval(int menor, int maior)
    {
        int soma = 0;
        
         // cout << "menor " << menor << endl;
         // cout << "maior " << maior << endl;
        if(menor >= 0 && maior < length && menor < maior)
        {
            for(int x = menor; x < maior; x = x + 1 )
            {
                // cout << "for" << endl;
                soma = soma + data[x];
            }
        }
        return (soma);
    }
    
    int averageInterval(int p1, int p2)
    {
        int media = 0;
        int soma = 0;
        
        if(p1 >= 0 && p2 >= 0)
        {
            soma = addInterval(p1, p2);
        
            media = soma / (p2 - p1);    
        }   
        return (media);
    }
    
    bool positives()
    {
        bool result = false;
        int cont = 0;
        for(int x = 0; x < length; x = x + 1)
        {
            if(data[x] > 0)
            {
                cont = cont + 1;
            }
        }
        
        if(cont == length)
        {
            result = true;
        }
        return (result);
    }
    
    bool isCrescent()
    {
        int result = true;
        
        int cont = 0;
        
        for(int x = 0; x < length; x = x + 1)
        {
            if(data[x] > data[x + 1])
            {
                result = false;
            }
        }
        
        return (result);
    }
    
    bool searchInterval( int val, int inicio, int fim )
    {
        bool result = false;
        
        for(int x = inicio; x < fim && !result; x = x + 1)
        {
            if(data[x] == val)
            {
                result = true;
            }
        }
        
        return (result);
    }
    
    Array scalar(int val, int inicio, int fim)
    {
        Array<T> array2(*this);
        
        for(int x = inicio; x < fim; x = x + 1)
        {
            array2.data[x] = data[x] * val; 
        }
        return (array2);
    }
    
    void sortUp( )
    {
        int x = 0, y = 0;
        int value = 0;

        for ( x = 1; x < length; x = x+1 )    // (n-1) vezes
        {
            for ( y = 1; y < length; y = y+1 ) // (n-1) testes
            {
                if ( get ( y-1 ) > get ( y ) )
                {
                    value = get ( y );
                    set ( y, get ( y-1 ) );
                    set ( y-1, value );
                } // end if
            } // end for
        } // end for
    }

}; // end class

#endif