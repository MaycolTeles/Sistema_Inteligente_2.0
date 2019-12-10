#ifndef INTERFACE_H_INCLUDED    // Se "INTERFACE_H_INCLUDED" não foi definido
#define INTERFACE_H_INCLUDED    // Defina "INTERFACE_H_INCLUDED"

using namespace std;        // Para poder utilizar strings

// DEFININDO A CLASSE:          // Como em C++ não há uma “interface” pronta (como em Java, por exemplo) ...
/*abstract*/ class Interface{   // ... é necessário criar uma Classe Abstrata (Fazendo com que seus métodos sejam “Pure Virtual” ...
                                // ... ou "Puramente Virtual", ou seja, sem implementação).

    // PROTOTIPANDO OS MÉTODOS
        // MÉTODOS EXCLUSIVOS
    public:                             // Igualando os métodos a zero e escrevendo "virtual" para torná-los "Pure Virtual".
        virtual void introducao() = 0;                                  // Para exibir a introdução
        virtual void menu() = 0;                                        // Para exibir o menu de opções
        virtual void adicionarComponente() = 0;    // Para adicionar um novo componente
        virtual void removerComponente() = 0;      // Para remover um componente que já foi adicionado

};


#endif // INTERFACE_H_INCLUDED
// Fim "Se"
