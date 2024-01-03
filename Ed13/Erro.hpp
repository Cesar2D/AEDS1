/**
 * Classe para tratar erro.
 */
#ifndef _ERRO_H_
#define _ERRO_H_

class Erro
{
    /*
    * tratamento de erro.
    codigos de erro: 0. nao ha
    erro
    */

    /*
     * atibutos privados
     */
private:
    int erro;

protected:
    // ------------------------------------------- metodos para acesso restrito

    /*
    * Metodo para estabelecer novo codigo de erro.
    @param codigo de erro a ser guardado
    */
    void setErro(int codigo)
    {
        erro = codigo;
    } // end setErro()

    /*
    definicoes publicas
    */
public:
    /*
    destrutor
    */
    ~Erro()
    {
    }

    /*
    construtor padrao
    */
    Erro()
    {
        // atribuir valor inicial
        erro = 0;
    } // end constructor (padrao)

    // ------------------------------------------- metodos para acesso

    /*
    * Funcao para obter o codigo de erro.
    @return codigo de erro guardado
    */

    int getErro()
    {
        return (erro);
    } // end getErro()

    /**
     * indicar a existencia de erro.
     */
    bool hasErro()
    {
        return (getErro() != 0);
    } // end hasErro

}; // end class Erro

#endif