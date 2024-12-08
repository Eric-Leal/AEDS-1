#include <iostream>
#include <string.h>
using namespace std;

class Aluno{
private:
    string nome;
    int matricula;
    double notas[5];

public:
    string getNome(){
        return nome;
    }
    int getMatricula(){
        return matricula;
    }
    void setMatricula(int matricula){
        this->matricula = matricula;
    }
    void setNome(string nome){
        this->nome = nome;
    }

    void setNotas(double notas[5]){
        for(int i = 0 ; i < 5; i++){
            this->notas[i] = notas[i];
        }
    }
    double calcularMedia(){
        double somanotas = 0;
        for(int i = 0; i < 5 ; i++){
            somanotas += notas[i];
        }
        return somanotas/5;
    }
};

int main(){

    Aluno alunos[2];
    string nome;
    int matricula;
    double notas[5];
    for(int i = 0; i< 2; i++){
        cout << "digite o nome do aluno:" << endl;
        getline(cin, nome);
        alunos[i].setNome(nome);

        cout << "digite o numero de matricula:" << endl;
        cin >> matricula;
        cin.ignore();
        alunos[i].setMatricula(matricula);

        for(int j =0; j<5; j++){
            cout << "Digite a nota do aluno:" << i+1 << endl;
            cin >> notas[j];
            cin.ignore();
            alunos[i].setNotas(notas);
        }
    }
    for(int i =0; i <2; i++){
    cout << "media: "<< alunos[i].calcularMedia()<< endl;

    }

    return 0;
}
