#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

class Cliente{
private:
    string nome;
    string data;
    string endereco;
    string telefone;

    public:
    Cliente(string nome, string data, string endereco, string telefone){
    this -> nome = nome;
    this -> data = data;
    this -> endereco = endereco;
    this -> telefone = telefone;
    }
};
int main(){

    vector<Cliente>cliente;
    int numCliente;

    cout << "Digite o numero de clientes que deseja dicionar";
    cin >> numCliente;


    for( int i =0; i< numCliente; i++){
        string nome, data, endereco, telefone;
        cout << "\nCliente:" << i+1 <<":"<< endl;
        cout << "Nome:";
        cin >> nome;
        cout << "Data de nascimento:";
        cin >> data;
        cout << "Telefone:";
        cin >> telefone;

        Cliente novoCliente(nome, endereco, data, telefone);
        cliente.push_back(novoCliente);
    }
        cout << "\nClientes adicionados" << endl;

    return 0;
}

