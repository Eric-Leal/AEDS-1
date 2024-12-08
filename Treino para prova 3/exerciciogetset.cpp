#include <iostream>
#include <string.h>
using namespace std;

class Cliente{
    private:
    string nome;
    string datanasc;
    string endereco;
    string telefone;
    int notas[3];

    public:
        string getDatanasc(){
            return datanasc;
        }
        string getEndereco(){
            return endereco;
        }
        string getTelefone(){
            return telefone;
        }
        string getNome(){
            return nome;
        }
        int getNotas(){
            return notas[3];
        }
        void setNotas(int notas[3]){
            for(int i =0; i< 3; i++){
            this->notas[i] = notas[i];
            }
        }

        void setNome( string nome){
            this->nome = nome;
        }

        void setDatanasc( string datanasc){
            this->datanasc = datanasc;
        }

        void setEndereco( string endereco){
            this->endereco = endereco;
        }

        void setTelefone( string telefone){
            this->telefone = telefone;
        }
        void imprimirdados(){
            cout << nome <<endl;
            cout << endereco<<endl;
            cout << telefone<<endl;
            cout << datanasc<<endl;
            for(int i =0; i < 3; i++){
                cout << notas[i]<<endl;
            }
        }
};

int main(){

    Cliente clientes[2];
    string nome, telefone, endereco, datanasc;
    int notas[3];
    for(int i = 0; i<2; i++){
        cout << "nome:" << endl;
        getline(cin, nome);
        clientes[i].setNome(nome);

        cout << "datanasc:" << endl;
        getline(cin, datanasc);
        clientes[i].setDatanasc(datanasc);

        cout << "endereco:" << endl;
        getline(cin, endereco);
        clientes[i].setEndereco(endereco);

        cout << "telefone:" << endl;
        getline(cin, telefone);
        clientes[i].setTelefone(telefone);

        for(int j = 0; j< 3; j++){
        cout << "notas:" << endl;
        cin>>notas[j];
        cin.ignore();
        clientes[i].setNotas(notas);

        }

    }
    for(int i =0; i<2; i++){
        clientes[i].imprimirdados();

    }




    return 0;
}
