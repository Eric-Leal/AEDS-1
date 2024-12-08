#include <iostream>
#include <string.h>
using namespace std;

class Idioma{
    public:
        void saudar(){};

};
class Portugues : public Idioma{
    public:
        void saudar(){
            cout << "Ola" <<endl;
        }

};

class Ingles : public Idioma{
    public:
        void saudar(){
            cout << "Hello" <<endl;
        }

};

class Espanhol : public Idioma{
    public:
        void saudar(){
            cout << "Hola" <<endl;
        }

};

int main(){

    Portugues pessoa1;
    Ingles pessoa2;
    Espanhol pessoa3;

    pessoa1.saudar();
    pessoa2.saudar();
    pessoa3.saudar();
    return 0;
}
