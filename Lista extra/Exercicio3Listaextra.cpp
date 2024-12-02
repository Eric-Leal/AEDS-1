#include <iostream>
#include <vector>
#include <string>

using namespace std;

    class Loja{
        private:
        string nome;
        string telefone;
        float preco;

        public:

        Loja(string nome, string telefone){
            this-> nome = nome;
            this-> telefone = telefone;
        }

        float getPreco(){
            return preco;
        }
        void setPreco(float preco){
            this->preco = preco;
        }
        void exibirLoja(){
            cout << "Nome:" << nome << endl;
            cout << "Telefone:" << telefone << endl;
        }
        void exibirPreco(){
            cout << "Preco:" << preco << endl;
        }

    };
int main(){

     vetor[5];
    string nome, telefone;
    float preco;
    cout << "Digite o nome da loja:"<<endl;
    getline(cin, nome);

    cout << "Digite o telefone:" << endl;
    getline(cin, telefone);

    Loja loja(nome, telefone);

    loja.exibirLoja();


    for(int i = 0; i<5; i++){

        cout << "Digite o preco do eletrodomestico." << endl;
        cin >> preco;
        loja.setPreco(preco);

        loja.exibirPreco();
    }

    for(int i = 0; i<5; i++){

       loja.exibirPreco();

    }


    return 0;
}


