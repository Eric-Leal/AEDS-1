#include <iostream>
#include <string.h>
using namespace std;

class Usuario{
    private:
        string nome;
        string email;
    public:
        string getNome(){
            return nome;
        }
        string getEmail(){
            return email;
        }
        void setNome(string nome){
            this->nome = nome;
        }
        void setEmail(string email){
            this->email = email;
        }

};

class Personagem : public Usuario{
    private:
        int nivel;
    public:
        int getNivel(){
            return nivel;
        }
        void setNivel(int nivel){
            this->nivel = nivel;
        }

        void aumentaNivel(){
            nivel++;
        }
};

int main(){

    Personagem personagem1;
    personagem1.setNome("Eric");
    personagem1.setEmail("eric@.com");
    personagem1.setNivel(1);
    personagem1.aumentaNivel();
    personagem1.aumentaNivel();

    cout << "Nome:" << personagem1.getNome() << endl;
    cout << "Email:" << personagem1.getEmail() << endl;
    cout << "Nivel: " << personagem1.getNivel() << endl;


    return 0;
}
