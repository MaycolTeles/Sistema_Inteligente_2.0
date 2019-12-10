#ifndef COMPONENTE_H_INCLUDED
#define COMPONENTE_H_INCLUDED

using namespace std;            // Para poder utilizar strings

// DEFININDO UMA CLASSE
/*abstract*/ class Componente{  // Como "Componente" deve ser uma Classe Abstrata , ao menos um de seus m�todos deve ser �Pure Virtual� ...
                                // ... ou "Puramente Virtual", ou seja, sem implementa��o).

    // DECLARANDO OS ATRIBUTOS
    private:
        static int numeroComponentes;   // N�mero de componentes ao todo na planta ("static" para tornar o atributo est�tico, ou seja, todos os objetos (sensores, atuadores, controladores, etc) compartilhar�o o valor desse atributo)
        int index;                      // O index do componente (Qual sua posi��o no vetor de componentes)
        string nome;                    // O nome do componente
        string tipo;                    // O tipo do componente
        bool status;                    // O status do componente (funcionando ou n�o - on/off)

    // PROTOTIPANDO OS M�TODOS
    public:                     // Escrevendo "virtual" para torn�-los "Virtual" (Fazendo com que, caso sejam implementados aqui, n�o haver� a necessidade de implement�-los em suas classes filhas).

        // M�TODOS ACESSORES E MODIFICADORES (Getters e Setters)
        virtual int getNumeroComponentes();                         // Retorna o n�mero de componentes adicionados
        virtual void setNumeroComponentes(int numeroComponentes);   // Define o n�mero de componentes adicionados

        virtual int getIndex();                                     // Retorna o index (posi��o) do componente desejado
        virtual void setIndex(int index);                           // Define o index (posi��o) do componente desejado

        virtual string getNome();                                   // Retorna o nome do componente desejado
        virtual void setNome(string nome);                          // Define o nome do componente desejado

        virtual string getTipo();                                   // Retorna o tipo (Sensor: umidade, temperatura // Atuador: motor, alarme // etc) do componente desejado
        virtual void setTipo(string tipo);                          // Define o tipo do componente desejado

        virtual bool getStatus();                                   // Retorna o status (on/off) do componente desejado
        virtual void setStatus(bool status);                        // Define o status do componente desejado


};



#endif // COMPONENTE_H_INCLUDED
