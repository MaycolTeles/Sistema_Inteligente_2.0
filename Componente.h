#ifndef COMPONENTE_H_INCLUDED
#define COMPONENTE_H_INCLUDED

using namespace std;            // Para poder utilizar strings

// DEFININDO UMA CLASSE
/*abstract*/ class Componente{  // Como "Componente" deve ser uma Classe Abstrata , ao menos um de seus métodos deve ser “Pure Virtual” ...
                                // ... ou "Puramente Virtual", ou seja, sem implementação).

    // DECLARANDO OS ATRIBUTOS
    private:
        static int numeroComponentes;   // Número de componentes ao todo na planta ("static" para tornar o atributo estático, ou seja, todos os objetos (sensores, atuadores, controladores, etc) compartilharão o valor desse atributo)
        int index;                      // O index do componente (Qual sua posição no vetor de componentes)
        string nome;                    // O nome do componente
        string tipo;                    // O tipo do componente
        bool status;                    // O status do componente (funcionando ou não - on/off)

    // PROTOTIPANDO OS MÉTODOS
    public:                     // Escrevendo "virtual" para torná-los "Virtual" (Fazendo com que, caso sejam implementados aqui, não haverá a necessidade de implementá-los em suas classes filhas).

        // MÉTODOS ACESSORES E MODIFICADORES (Getters e Setters)
        virtual int getNumeroComponentes();                         // Retorna o número de componentes adicionados
        virtual void setNumeroComponentes(int numeroComponentes);   // Define o número de componentes adicionados

        virtual int getIndex();                                     // Retorna o index (posição) do componente desejado
        virtual void setIndex(int index);                           // Define o index (posição) do componente desejado

        virtual string getNome();                                   // Retorna o nome do componente desejado
        virtual void setNome(string nome);                          // Define o nome do componente desejado

        virtual string getTipo();                                   // Retorna o tipo (Sensor: umidade, temperatura // Atuador: motor, alarme // etc) do componente desejado
        virtual void setTipo(string tipo);                          // Define o tipo do componente desejado

        virtual bool getStatus();                                   // Retorna o status (on/off) do componente desejado
        virtual void setStatus(bool status);                        // Define o status do componente desejado


};



#endif // COMPONENTE_H_INCLUDED
