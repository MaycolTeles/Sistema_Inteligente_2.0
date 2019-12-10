#ifndef INTERFACE_H_INCLUDED    // Se "INTERFACE_H_INCLUDED" n�o foi definido
#define INTERFACE_H_INCLUDED    // Defina "INTERFACE_H_INCLUDED"

using namespace std;        // Para poder utilizar strings

// DEFININDO A CLASSE:          // Como em C++ n�o h� uma �interface� pronta (como em Java, por exemplo) ...
/*abstract*/ class Interface{   // ... � necess�rio criar uma Classe Abstrata (Fazendo com que seus m�todos sejam �Pure Virtual� ...
                                // ... ou "Puramente Virtual", ou seja, sem implementa��o).

    // PROTOTIPANDO OS M�TODOS
        // M�TODOS EXCLUSIVOS
    public:                             // Igualando os m�todos a zero e escrevendo "virtual" para torn�-los "Pure Virtual".
        virtual void introducao() = 0;                                  // Para exibir a introdu��o
        virtual void menu() = 0;                                        // Para exibir o menu de op��es
        virtual void adicionarComponente() = 0;    // Para adicionar um novo componente
        virtual void removerComponente() = 0;      // Para remover um componente que j� foi adicionado

};


#endif // INTERFACE_H_INCLUDED
// Fim "Se"
