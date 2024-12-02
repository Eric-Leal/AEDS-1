#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Pessoa{
    private:
    string nome;
    int idade;
    float altura;

    public:
    string getNome(){
        return nome;
    }
    int getIdade(){
        return idade;
    }
    float getAltura(){
        return altura;
    }
    void setNome(string nome){
        this->nome = nome;
    }
    void setIdade(int idade){
        this->idade = idade;
    }
    void setAltura(float altura){
        this->altura = altura;
    }
    void exibirDados(){
        cout << "Nome:" << nome << endl;
        cout << "Idade:" << idade << endl;
        cout << "Altura:" << altura << endl;
    }
};
int main(){

    Pessoa pessoa;

    string nome;
    int idade;
    float altura;

    cout << "Digite o nome:" << endl;
    getline (cin, nome);
    pessoa.setNome(nome);

    cout << "Digite a idade:" << endl;
    cin >> idade;
    pessoa.setIdade(idade);

    cout << "Digite a altura:" << endl;
    cin >> altura;
    pessoa.setAltura(altura);

    pessoa.exibirDados();
    return 0;
}


