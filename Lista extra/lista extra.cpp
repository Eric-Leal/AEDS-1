#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Cliente{
    private:
    string nome;
    string datanasc;
    string telefone;

    public:
    Cliente(string nome, string datanasc, string telefone){
    this->nome = nome;
    this->datanasc = datanasc;
    this->telefone = telefone;
    }
    void exibirCliente(){
        cout << "Nome:"<< nome <<endl;
        cout << "Data de nascimento:" << datanasc<<  endl;
        cout << "Telefone:" << telefone << endl;
    }
};

int main(){

    Cliente* novoCliente[2];
    string telefone, datanasc, nome;

    for( int i = 0; i<2; i++){
    cout<< "Digite o nome do cliente:";
    getline(cin, nome);

    cout << "Digite a data de nascimento:";
    getline(cin, datanasc);
    cout << "Digite o telefone:";
    getline(cin, telefone);

    novoCliente[i] = new Cliente(nome, datanasc,telefone);
    novoCliente[i]->exibirCliente();
    }

    return 0;
}


