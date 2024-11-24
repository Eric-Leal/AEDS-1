#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

class loja{
private:
    string nomeLoja;
    string telefone;
    int preco;

public:
    loja(string nomeLoja,string telefone,int preco){
    this -> nomeLoja = nomeLoja;
    this -> telefone = telefone;
    this -> preco = preco;
    }
};

int main(){
    vector<loja>Loja;
    
    string loja, telefone;
    int preco = 0;
    int precomin, precomax;
    int media;
    int quantidade = 0;
    precomin = 1000000;
    precomax = preco;
    int somapreco = 0;

    for(int i = 0; i<5 ; i++ ){
    cout << "Digite o nome da loja:";
    cin >> loja;
    cout << "Digite o telefone:";
    cin >> telefone;
    cout << "Digite o preco do prodouto:";
    cin >> preco;

    if(preco < precomin){
        precomin = preco;
    }
    if(preco > precomax){
        precomax = preco;
    }
    somapreco += preco;
    quantidade++;
    }

    media = somapreco/quantidade;

    cout << "Maior preco:" << precomax << endl;
    cout << "Menor preco:" << precomin << endl;
    cout << "Media:" << media << endl;

    return 0;
}

