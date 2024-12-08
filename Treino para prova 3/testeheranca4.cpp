#include <iostream>
#include <string.h>
using namespace std;

class Animal{
    public:
        virtual void som(){
            cout << "som generico" << endl;
        };

};

class Cachorro : public Animal{
    public:
        void som() override{
            cout << "Au Au" <<endl;
        }

};

class Gato : public Animal{
    public:
        void som() override{
            cout << "Miau" <<endl;
        }

};


int main(){

    Animal generico;
    Cachorro Cachorro1;
    Gato Gato1;

    generico.som();
    Cachorro1.som();
    Gato1.som();


    return 0;
}
