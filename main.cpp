#include <iostream>
#include <fstream>      // Para salvar todos os dados importantes em arquivos para uso posterior
#include "Interacao.h"  // Para poder utilizar toda a interface

using namespace std;

struct data_type{       // Uma struct para a leitura de dados (Estilo JSON)

    string parametro;   // O par�metro do dado a ser lido (Ex: "Nome:", "Sensores salvos:", etc)
    string valor;       // O valor desse respectivo par�metro (Ex: "Carol", "Temperatura", etc)

};


int main(){

    setlocale(LC_ALL, "Portuguese");        // Para utilizar estrutura gr�fica em portugu�s (Acentua��o, cedilha, etc).

    ifstream leituraDados;      // leituraDados � uma vari�vel que representa o arquivo de Leitura de Dados
    data_type dados[1000];      // Vetor da struct dados, para salvar as informa��es lidas no arquivo, com seus respectivos valores e par�metros
    int i = 0;                  // Contador
    Interacao* MAFIA = NULL;    // MAFIA � um ponteiro apontado para o objeto do tipo Interface

    dados[i].valor = "NULL";    // Para a primeira chamada, o valor do nome ser� "NULL"

    leituraDados.open("myData.txt", ifstream::in);      // Abrindo o arquivo de leitura

    leituraDados >> dados[i].parametro;     // Acessando o primeiro par�metro (Do nome)
    leituraDados >> dados[i].valor;         // Salvando o valor do nome


    // INSTANCIANDO UM NOVO OBJETO:
        // No C++, � preciso identificar o novo Objeto da Classe como *ponteiro*. Portanto, como exemplo:
    if(dados[i].valor == "NULL")    // Caso o nome n�o tenha sido salvo ou
        MAFIA = new Interacao();        // Alocando mem�ria para a MAFIA - Melhor Amiga Feita com Intelig�ncia Artificial
    else
        MAFIA = new Interacao(dados[i].valor);        // Alocando mem�ria para a MAFIA - Melhor Amiga Feita com Intelig�ncia Artificial


    delete MAFIA;

    return 0;
}
