#ifndef INTERACAO_H_INCLUDED        // Se "INTERACAO_H_INCLUDED" ainda n�o foi definido
#define INTERACAO_H_INCLUDED        // Defina "INTERACAO_H_INCLUDED"

#include "Interface.h"              // Para poder criar uma classe baseada na classe abstrata "Interface"

// DEFININDO UMA CLASSE
class Interacao : public Interface{         // Interacao � um filho de Interface (Intera��o herda tudo de Interface)

    // DECLARANDO OS ATRIBUTOS
    private:
        string nomeUsuario;                 // Para salvar o nome do usu�rio

    // PROTOTIPANDO OS M�TODOS
    public:

        // M�TODO CONSTRUTOR (Constructor)
            // O m�todo construtor deve possuir o mesmo nome da classe.
                // No C++, n�o � preciso declarar "void", apenas o nome da classe.
        Interacao();                        // Instanciando uma nova Interacao
        Interacao(string nomeUsuario);      // Instanciando uma nova Interacao, mas j� com o nome do usu�rio (caso ele tenha escolhido salv�-lo)
        // ^^Criando um m�todo "Overload" (ou "Sobrecarregando" um m�todo), para poder passar um par�metro para ele


        // M�TODO DESTRUTOR (Destructor)
        ~Interacao();

        // M�TODOS ACESSORES E MODIFICADORES (Getters e Setters)
        string getNomeUsuario();                            // Retorna o nome do usu�rio
        void setNomeUsuario(string nomeUsuario);            // Define o nome do usu�rio

        // M�TODOS EXCLUSIVOS
        void introducao();                                  // Para exibir a introdu��o
        void menu();                                        // Para exibir o menu de op��es

            // Op��es do Menu
        void adicionarComponente();             // Para adicionar um novo componente
        void adicionarComponenteModelo();       // Para adicionar um novo componente a partir de um modelo j� existente
        void exibirComponentes();               // Para exibir todos os componentes
        void historicoComponente();             // Para exibir o hist�rico do componente
        void editarComponente();                // Para editar o nome ou tipo de um componente
        void editarNomeUsuario();               // Para editar o nome do usu�rio
        void fazerAlgo();                       // Para fazer algo
        void removerComponente();               // Para remover um componente que j� foi adicionado
        void encerrar();                        // Para encerrar o programa

};


#endif // INTERACAO_H_INCLUDED
// Fim "Se"
