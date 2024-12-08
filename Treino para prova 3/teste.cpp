#include <iostream>
#include <string.h>
using namespace std;

class Loja{
private:
    string nome;
    string telefone;
    int preco;

public:
    Loja(string nome, string telefone, int preco){
        this-> nome = nome;
        this-> telefone = telefone;
        this-> preco = preco;
    }
    int getPreco(){
        return preco;
    }

    void imprimeDados(){
        cout << "Nome da loja:" << nome << endl;
        cout << "Telefone:" << telefone << endl;
        cout << "Preco do produto:" << preco << endl;
    }
};

int main(){
    // Para usar sem ponteiro, basta tirar o asterisco depois de loja, e trocar a '->' por '.' exemplo: produtos[i]->imprimeDados(); passa a ser produtos[i].imprimeDados();,
    // alem disso no construtor deve colocar um vlaor vazio para funcionar exemplo:  Loja(string nome = "", string telefone = "", int preco = ""){
    Loja* produtos[3];
    string nome, telefone;
    int preco, menorpreco, maiorpreco , media;
    int somapreco;

    for(int i = 0; i < 3; i++){
        cout << "Digite o nome da loja:" << endl;
        getline(cin, nome);

        cout << "Digite o telefone da loja:" << endl;
        getline(cin, telefone);

        cout << "Digite o preco do produto:" << endl;
        cin >> preco;
        cin.ignore();
        somapreco += preco;
        produtos[i] = new Loja(nome, telefone, preco);
    }

    for(int i = 0; i < 3; i++){
        produtos[i]->imprimeDados();
        cout << "----------------------" << endl;
    }

    for(int i = 0; i < 3; i++){
        menorpreco = produtos[0]->getPreco();
        maiorpreco = produtos[0]->getPreco();

        if (preco < menorpreco){
            menorpreco = preco;
        }
        if(preco > maiorpreco){
            maiorpreco = preco;
        }
        media = somapreco/3;
    }
    cout << "Menor preco:" << menorpreco << endl;
    cout << "Maior preco:" << maiorpreco << endl;
    cout << "Media:" << media << endl;
    return 0;
}
