#include <iostream>         // Para utilizar os objetos de stream (cin, cout, endl, etc)
#include <string>           // Para utilizar a classe string. (Para "opera��es com string" (vetores char), utilizar <cstring>)
#include <fstream>          // Para salvar as informa��es em arquivos
#include "Interacao.h"      // Incluindo a classe e os cabe�alhos dos m�todos

using namespace std;        // Para utilizar cin e cout

char opcao;         // Para sempre testar a op��o digitada do usu�rio

    // M�TODO CONSTRUTOR (Constructor)

// Caso o nome do usu�rio N�O tenha sido salvo ou seja a primeira vez no programa
Interacao :: Interacao(){

    introducao();

}

// Caso o nome do usu�rio TENHA sido salvo
Interacao :: Interacao(string nomeUsuario){     // Criando um m�todo "Overload" (ou "Sobrecarregando" um m�todo), para poder passar um par�metro para ele

    cout << "Seja bem-vindo de volta, " << nomeUsuario << "! Eu senti muito a sua falta :(" << endl;
    cout << "Vamos retornar com nossas atividades?! Abaixo deixarei o menu dispon�vel para voc� escolher alguma de minhas in�meras fun��es..." << endl;
    setNomeUsuario(nomeUsuario);
    menu();


}


    // M�TODO DESTRUTOR (Destructor)

// � chamado toda vez que se usa "delete <nome do objeto> "
Interacao :: ~Interacao(){

    cout << endl;
    cout << "� uma pena que queira ir embora. Mas, sempre que quiser, pode voltar para mim que estarei te esperando!" << endl;
    cout << "Sentirei sua falta, " << getNomeUsuario() << "." << endl;

    return;

}

    // M�TODOS ACESSORES E MODIFICADORES (Getters e Setters)


// Retorna o nome do usu�rio
string Interacao :: getNomeUsuario(){

    return nomeUsuario;

}


// Seta o nome do usu�rio
void Interacao :: setNomeUsuario(string nomeUsuario){

    this->nomeUsuario = nomeUsuario;        // ("this" significa que o nomeUsuario DESSE OBJETO QUE ESTOU MEXENDO (this)...
                                            // ... receber� o valor do par�metro nomeUsuario passado para o m�todo)
    return;

}

    // M�TODOS EXCLUSIVOS

// M�todo para introduzir o usu�rio no universo do AtuaSensor
void Interacao :: introducao(){

    string nome;                 // Nome do usu�rio
    //char opcao;                  // Para testar a op��o digitada pelo usu�rio
    ofstream gravacaoDados;      // Definindo uma vari�vel de arquivo para salvar dados importantes (nesse caso, o nome do usu�rio)

    cout << "Ol�! Seja muito Bem-Vindo ao AtuaSensor, seu melhor Assistente Industrial!" << endl;
    cout << "Primeiramente, eu gostaria de criar uma maior intimidade com voc� mas, para isso, precisarei que me informe como voc� gostaria de ser chamado(a): ";

    getline(cin, nome);     // Utilizando getline para poder captar nomes com espa�o
    setNomeUsuario(nome);

    cout << endl;
    cout << "Perfeito, " << getNomeUsuario() << "! Gostaria que eu salve seu nome para poder sempre me referir � voc� dessa forma? Digite \"s\" para \"sim\" ou \"n\" para \"n�o\" : ";

    cin >> opcao;

    gravacaoDados.open("myData.txt", ofstream::out);    // Abrindo o arquivo de escrita (para salvar os dados)
    gravacaoDados << "Nome: ";                          // Salvando "Nome:" para salvar ou n�o o nome do usu�rio

    if(opcao == 's'){
        cout << "Pronto! J� gravei seu nome com carinho, pode deixar que nunca mais vou me esquecer :)" << endl;

        gravacaoDados << getNomeUsuario() << endl;     // Salvando o nome do usu�rio

    }
    else if(opcao == 'n'){
        cout << "Sem problemas! Sempre que voc� entrar no aplicativo, eu farei essa pergunta novamente, caso voc� deseje gravar o nome eventualmente" << endl;

        gravacaoDados << "NULL" << endl;     // N�o salvando o nome do usu�rio

    }

    cout << endl;
    cout << "Nossa! Acabei de me lembrar... Eu fiquei t�o preocupada com voc� que acabei esquecendo de ME apresentar..." << endl;
    cout << "       Eu sou a MAFIA - sua Melhor Amiga Feita com Intelig�ncia Artificial" << endl;
    cout << "Mas agora, deixa eu te mostar o que eu posso fazer por voc� e pelo seu neg�cio:" << endl << endl;

    gravacaoDados.close();  // Para fechar o arquivo de escrita
    menu();                 // Mostrando o menu de op��es

}

// M�todo para exibir o menu de op��es
void Interacao :: menu(){

    //char opcao;         // Para receber a op��o desejada

    cout << endl;
    cout << "| ----------------------------------------------------------------------------------------------------------------------------------------------- |" << endl;
    cout << "|  1 - Adicionar um novo componente     2 - Adicionar um componente a partir de um modelo j� existente     3 - Exibir todos os componentes        |" << endl;
    cout << "|           4 - Consultar o hist�rico de um componente         5 - Editar o nome ou tipo de um componente         6 - Editar o seu nome           |" << endl;
    cout << "|  7 - DoSomething                              8 - Excluir um componente                              9 - Sair do programa                       |" << endl;
    cout << "| ----------------------------------------------------------------------------------------------------------------------------------------------- |" << endl;

    cout << "O que voc� gostaria que eu fizesse por voc�? ";
    cin >> opcao;

    switch(opcao){
        case '1':
            //adicionarComponente();
            break;

        case '2':
            //adicionarComponenteModelo();
            break;

        case '3':
            //exibirComponentes();
            break;

        case '4':
            //historicoComponente();
            break;

        case '5':
            //editarNomeComponente();
            break;

        case '6':
            //editarNomeUsuario();
            break;

        case '7':
            //doSomething();
            break;

        case '8':
            //removerComponente(/*...*/);
            break;

        case '9':
            encerrar();
            break;



    }

}


// M�todo para adicionar um novo componente
void Interacao :: adicionarComponente(){

    cout << "Atualmente, os componentes que conhe�o s�o: Sensores, Atuadores e Controladores. Qual desses voc� gostaria de adicionar? Digite \"s\" para \"Sensor\", \"a\" para \"Atuador\" ou  \"c\" para \"Controlador\": ";
    cin >> opcao;

    switch(opcao){
        case 's':
            //adicionarSensor();
            break;

        case 'a':
            //adicionarAtuador();
            break;

        case 'c':
            //adicionarControlador();
            break;


    }

}


// M�todo para adicionar um novo componente a partir de um modelo j� existente
void Interacao :: adicionarComponenteModelo(){


    return;
}


// M�todo para exibir todos os componentes
void Interacao :: exibirComponentes(){



    return;
}


// M�todo para exibir o hist�rico do componente
void Interacao :: historicoComponente(){


    return;
}


// M�todo para remover um componente que j� foi adicionado
void Interacao :: removerComponente(){


    return;
}


// M�todo para encerrar o programa
void Interacao :: encerrar(){

    return;

}
