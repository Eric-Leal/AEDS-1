#include <iostream>

using namespace std;

class Elevador {
private:
    int andarAtual;
    int totalAndares;
    int capacidadeElevador;
    int pessoasPresentes;

public:

    void inicializa(int capacidade, int andares) {
        capacidadeElevador = capacidade;
        totalAndares = andares;
        andarAtual = 0;
        pessoasPresentes = 0; 
    }

    void entra() {
        if (pessoasPresentes < capacidadeElevador) {
            pessoasPresentes++;
            cout << "Uma pessoa entrou no elevador. Pessoas no elevador: " << pessoasPresentes << endl;
        } else {
            cout << "Capacidade maxima atingida." << endl;
        }
    }

    void sai() {
        if (pessoasPresentes > 0) {
            pessoasPresentes--;
            cout << "Uma pessoa saiu do elevador. Pessoas no elevador: " << pessoasPresentes << endl;
        } else {
            cout << "O elevador esta vazio." << endl;
        }
    }

    void sobe() {
        if (andarAtual < totalAndares) {
            andarAtual++;
            cout << "Elevador subiu para o andar " << andarAtual << endl;
        } else {
            cout << "O elevador ja esta no ultimo andar." << endl;
        }
    }

    void desce() {
        if (andarAtual > 0) {
            andarAtual--;
            cout << "Elevador desceu para o andar " << andarAtual << endl;
        } else {
            cout << "O elevador ja esta no Terreo." << endl;
        }
    }

    int getAndarAtual() {
        return andarAtual;
    }

    int getTotalAndares() {
        return totalAndares;
    }

    int getCapacidadeElevador() {
        return capacidadeElevador;
    }

    int getPessoasPresentes() {
        return pessoasPresentes;
    }
};

int main() {
    Elevador elevador;

    elevador.inicializa(6, 9); 

    elevador.entra();
    elevador.entra();
    elevador.entra();
    elevador.sobe();
    elevador.sobe();
    elevador.sai();
    elevador.desce();
    elevador.desce();

    cout << "\nStatus final do elevador:" << endl;
    cout << "Andar atual: " << elevador.getAndarAtual() << endl;
    cout << "Pessoas presentes: " << elevador.getPessoasPresentes() << endl;
    cout << "Capacidade total: " << elevador.getCapacidadeElevador() << endl;
    cout << "Total de andares: " << elevador.getTotalAndares() << endl;

    return 0;
}
