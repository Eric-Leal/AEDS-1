#include <iostream>

using namespace std;

class pessoa{
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
    void imprimeDados(){
        cout <<"Nome:" << nome << endl;
        cout <<"Idade:" << idade << endl;
        cout <<"altura:"<< altura << endl;
    };
};

int main() {

    pessoa pessoa1;
    pessoa pessoa2;

    pessoa1.setNome("Jorge");
    pessoa1.setIdade(30);   
    pessoa1.setAltura(1.75);

    pessoa2.setNome("Carlos");
    pessoa2.setIdade(23);   
    pessoa2.setAltura(1.80);

    pessoa1.imprimeDados();    

    return 0;
}
