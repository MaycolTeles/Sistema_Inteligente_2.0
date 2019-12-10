#include <iostream>
#include "Componente.h"

    // ATRIBUTOS ESTÁTICOS

// Atributo para saber o número de componentes (estático, pois deve ser o mesmo valor para todos os componentes)
int Componente :: numeroComponentes = 0;   // Inicializando o atributo em 0, ou seja, não há nenhum componente ainda


    // MÉTODOS ACESSORES E MODIFICADORES (Getters e Setters)

// Retorna o número de componentes adicionados
int Componente :: getNumeroComponentes(){

    return numeroComponentes;

}


// Define o número de componentes adicionados
void Componente :: setNumeroComponentes(int numeroComponentes){

    this->numeroComponentes = numeroComponentes;

    return;
}


// Retorna o index (posição) do componente desejado
int Componente :: getIndex(){

    return index;

}


// Define o index (posição) do componente desejado
void Componente :: setIndex(int index){

    this->index = index;

    return;
}


// Retorna o nome do componente desejado
string Componente :: getNome(){

    return nome;

}


// Define o nome do componente desejado
void Componente :: setNome(string nome){

    this->nome = nome;

    return;
}


// Retorna o tipo (Sensor: umidade, temperatura // Atuador: motor, alarme // etc) do componente desejado
string Componente :: getTipo(){

    return tipo;

}


// Define o tipo do componente desejado
void Componente :: setTipo(string tipo){

    this->tipo = tipo;

    return;
}


// Retorna o status (on/off) do componente desejado
bool Componente :: getStatus(){

    return status;

}


// Define o status do componente desejado
void Componente :: setStatus(bool status){

    this->status = status;

    return;
}
