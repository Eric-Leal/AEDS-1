#include <iostream>
#include <string.h>
using namespace std;

class Animal{
    private:
        string terreno;

    public:
        string getTerreno(){
            return terreno;
        }
        void setTerreno(string terreno){
            this->terreno = terreno;
        }
};

class Mamifero : public Animal{

    private:
        int mesesGestacao;
    public:
        int getMesesGestacao(){
            return mesesGestacao;
        }
        void setMesesGestacao(int mesesGestacao){
            this->mesesGestacao = mesesGestacao;
        }
};

class Cachorro : public Mamifero{
    private:
        string raca;

    public:
        string getRaca(){
            return raca;
        }

        void setRaca(string raca){
            this->raca = raca;
        }

        void latir(){
            cout << "au au";
        }
};

int main(){

    Cachorro catioro;
    catioro.setTerreno("Terra");
    catioro.setMesesGestacao(4);
    catioro.setRaca("Poodle");

    cout << catioro.getTerreno()<<endl;
    cout << catioro.getRaca()<<endl;
    cout << catioro.getMesesGestacao()<<endl;
    catioro.latir();

    return 0;
}
