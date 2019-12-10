#include <iostream>         // Para utilizar os objetos de stream (cin, cout, endl, etc)
#include <string>           // Para utilizar a classe string. (Para "operações com string" (vetores char), utilizar <cstring>)
#include <fstream>          // Para salvar as informações em arquivos
#include "Interacao.h"      // Incluindo a classe e os cabeçalhos dos métodos

using namespace std;        // Para utilizar cin e cout

char opcao;         // Para sempre testar a opção digitada do usuário

    // MÉTODO CONSTRUTOR (Constructor)

// Caso o nome do usuário NÃO tenha sido salvo ou seja a primeira vez no programa
Interacao :: Interacao(){

    introducao();

}

// Caso o nome do usuário TENHA sido salvo
Interacao :: Interacao(string nomeUsuario){     // Criando um método "Overload" (ou "Sobrecarregando" um método), para poder passar um parâmetro para ele

    cout << "Seja bem-vindo de volta, " << nomeUsuario << "! Eu senti muito a sua falta :(" << endl;
    cout << "Vamos retornar com nossas atividades?! Abaixo deixarei o menu disponível para você escolher alguma de minhas inúmeras funções..." << endl;
    setNomeUsuario(nomeUsuario);
    menu();


}


    // MÉTODO DESTRUTOR (Destructor)

// É chamado toda vez que se usa "delete <nome do objeto> "
Interacao :: ~Interacao(){

    cout << endl;
    cout << "É uma pena que queira ir embora. Mas, sempre que quiser, pode voltar para mim que estarei te esperando!" << endl;
    cout << "Sentirei sua falta, " << getNomeUsuario() << "." << endl;

    return;

}

    // MÉTODOS ACESSORES E MODIFICADORES (Getters e Setters)


// Retorna o nome do usuário
string Interacao :: getNomeUsuario(){

    return nomeUsuario;

}


// Seta o nome do usuário
void Interacao :: setNomeUsuario(string nomeUsuario){

    this->nomeUsuario = nomeUsuario;        // ("this" significa que o nomeUsuario DESSE OBJETO QUE ESTOU MEXENDO (this)...
                                            // ... receberá o valor do parâmetro nomeUsuario passado para o método)
    return;

}

    // MÉTODOS EXCLUSIVOS

// Método para introduzir o usuário no universo do AtuaSensor
void Interacao :: introducao(){

    string nome;                 // Nome do usuário
    //char opcao;                  // Para testar a opção digitada pelo usuário
    ofstream gravacaoDados;      // Definindo uma variável de arquivo para salvar dados importantes (nesse caso, o nome do usuário)

    cout << "Olá! Seja muito Bem-Vindo ao AtuaSensor, seu melhor Assistente Industrial!" << endl;
    cout << "Primeiramente, eu gostaria de criar uma maior intimidade com você mas, para isso, precisarei que me informe como você gostaria de ser chamado(a): ";

    getline(cin, nome);     // Utilizando getline para poder captar nomes com espaço
    setNomeUsuario(nome);

    cout << endl;
    cout << "Perfeito, " << getNomeUsuario() << "! Gostaria que eu salve seu nome para poder sempre me referir à você dessa forma? Digite \"s\" para \"sim\" ou \"n\" para \"não\" : ";

    cin >> opcao;

    gravacaoDados.open("myData.txt", ofstream::out);    // Abrindo o arquivo de escrita (para salvar os dados)
    gravacaoDados << "Nome: ";                          // Salvando "Nome:" para salvar ou não o nome do usuário

    if(opcao == 's'){
        cout << "Pronto! Já gravei seu nome com carinho, pode deixar que nunca mais vou me esquecer :)" << endl;

        gravacaoDados << getNomeUsuario() << endl;     // Salvando o nome do usuário

    }
    else if(opcao == 'n'){
        cout << "Sem problemas! Sempre que você entrar no aplicativo, eu farei essa pergunta novamente, caso você deseje gravar o nome eventualmente" << endl;

        gravacaoDados << "NULL" << endl;     // Não salvando o nome do usuário

    }

    cout << endl;
    cout << "Nossa! Acabei de me lembrar... Eu fiquei tão preocupada com você que acabei esquecendo de ME apresentar..." << endl;
    cout << "       Eu sou a MAFIA - sua Melhor Amiga Feita com Inteligência Artificial" << endl;
    cout << "Mas agora, deixa eu te mostar o que eu posso fazer por você e pelo seu negócio:" << endl << endl;

    gravacaoDados.close();  // Para fechar o arquivo de escrita
    menu();                 // Mostrando o menu de opções

}

// Método para exibir o menu de opções
void Interacao :: menu(){

    //char opcao;         // Para receber a opção desejada

    cout << endl;
    cout << "| ----------------------------------------------------------------------------------------------------------------------------------------------- |" << endl;
    cout << "|  1 - Adicionar um novo componente     2 - Adicionar um componente a partir de um modelo já existente     3 - Exibir todos os componentes        |" << endl;
    cout << "|           4 - Consultar o histórico de um componente         5 - Editar o nome ou tipo de um componente         6 - Editar o seu nome           |" << endl;
    cout << "|  7 - DoSomething                              8 - Excluir um componente                              9 - Sair do programa                       |" << endl;
    cout << "| ----------------------------------------------------------------------------------------------------------------------------------------------- |" << endl;

    cout << "O que você gostaria que eu fizesse por você? ";
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


// Método para adicionar um novo componente
void Interacao :: adicionarComponente(){

    cout << "Atualmente, os componentes que conheço são: Sensores, Atuadores e Controladores. Qual desses você gostaria de adicionar? Digite \"s\" para \"Sensor\", \"a\" para \"Atuador\" ou  \"c\" para \"Controlador\": ";
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


// Método para adicionar um novo componente a partir de um modelo já existente
void Interacao :: adicionarComponenteModelo(){


    return;
}


// Método para exibir todos os componentes
void Interacao :: exibirComponentes(){



    return;
}


// Método para exibir o histórico do componente
void Interacao :: historicoComponente(){


    return;
}


// Método para remover um componente que já foi adicionado
void Interacao :: removerComponente(){


    return;
}


// Método para encerrar o programa
void Interacao :: encerrar(){

    return;

}
