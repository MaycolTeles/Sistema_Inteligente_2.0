#ifndef INTERACAO_H_INCLUDED        // Se "INTERACAO_H_INCLUDED" ainda não foi definido
#define INTERACAO_H_INCLUDED        // Defina "INTERACAO_H_INCLUDED"

#include "Interface.h"              // Para poder criar uma classe baseada na classe abstrata "Interface"

// DEFININDO UMA CLASSE
class Interacao : public Interface{         // Interacao é um filho de Interface (Interação herda tudo de Interface)

    // DECLARANDO OS ATRIBUTOS
    private:
        string nomeUsuario;                 // Para salvar o nome do usuário

    // PROTOTIPANDO OS MÉTODOS
    public:

        // MÉTODO CONSTRUTOR (Constructor)
            // O método construtor deve possuir o mesmo nome da classe.
                // No C++, não é preciso declarar "void", apenas o nome da classe.
        Interacao();                        // Instanciando uma nova Interacao
        Interacao(string nomeUsuario);      // Instanciando uma nova Interacao, mas já com o nome do usuário (caso ele tenha escolhido salvá-lo)
        // ^^Criando um método "Overload" (ou "Sobrecarregando" um método), para poder passar um parâmetro para ele


        // MÉTODO DESTRUTOR (Destructor)
        ~Interacao();

        // MÉTODOS ACESSORES E MODIFICADORES (Getters e Setters)
        string getNomeUsuario();                            // Retorna o nome do usuário
        void setNomeUsuario(string nomeUsuario);            // Define o nome do usuário

        // MÉTODOS EXCLUSIVOS
        void introducao();                                  // Para exibir a introdução
        void menu();                                        // Para exibir o menu de opções

            // Opções do Menu
        void adicionarComponente();             // Para adicionar um novo componente
        void adicionarComponenteModelo();       // Para adicionar um novo componente a partir de um modelo já existente
        void exibirComponentes();               // Para exibir todos os componentes
        void historicoComponente();             // Para exibir o histórico do componente
        void editarComponente();                // Para editar o nome ou tipo de um componente
        void editarNomeUsuario();               // Para editar o nome do usuário
        void fazerAlgo();                       // Para fazer algo
        void removerComponente();               // Para remover um componente que já foi adicionado
        void encerrar();                        // Para encerrar o programa

};


#endif // INTERACAO_H_INCLUDED
// Fim "Se"
