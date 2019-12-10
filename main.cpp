#include <iostream>
#include <fstream>      // Para salvar todos os dados importantes em arquivos para uso posterior
#include "Interacao.h"  // Para poder utilizar toda a interface

using namespace std;

struct data_type{       // Uma struct para a leitura de dados (Estilo JSON)

    string parametro;   // O parâmetro do dado a ser lido (Ex: "Nome:", "Sensores salvos:", etc)
    string valor;       // O valor desse respectivo parâmetro (Ex: "Carol", "Temperatura", etc)

};


int main(){

    setlocale(LC_ALL, "Portuguese");        // Para utilizar estrutura gráfica em português (Acentuação, cedilha, etc).

    ifstream leituraDados;      // leituraDados é uma variável que representa o arquivo de Leitura de Dados
    data_type dados[1000];      // Vetor da struct dados, para salvar as informações lidas no arquivo, com seus respectivos valores e parâmetros
    int i = 0;                  // Contador
    Interacao* MAFIA = NULL;    // MAFIA é um ponteiro apontado para o objeto do tipo Interface

    dados[i].valor = "NULL";    // Para a primeira chamada, o valor do nome será "NULL"

    leituraDados.open("myData.txt", ifstream::in);      // Abrindo o arquivo de leitura

    leituraDados >> dados[i].parametro;     // Acessando o primeiro parâmetro (Do nome)
    leituraDados >> dados[i].valor;         // Salvando o valor do nome


    // INSTANCIANDO UM NOVO OBJETO:
        // No C++, é preciso identificar o novo Objeto da Classe como *ponteiro*. Portanto, como exemplo:
    if(dados[i].valor == "NULL")    // Caso o nome não tenha sido salvo ou
        MAFIA = new Interacao();        // Alocando memória para a MAFIA - Melhor Amiga Feita com Inteligência Artificial
    else
        MAFIA = new Interacao(dados[i].valor);        // Alocando memória para a MAFIA - Melhor Amiga Feita com Inteligência Artificial


    delete MAFIA;

    return 0;
}
