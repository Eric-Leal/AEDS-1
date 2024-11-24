#include <iostream>

using namespace std;

class ContaCorrente {
private:
    float saldo;

public:
    ContaCorrente() : saldo(0.0) {}

    void depositar(float valor) {
        if (valor > 0) {
            saldo += valor;
            cout << "Depósito de R$ " << valor << " realizado com sucesso!" << endl;
        } else {
            cout << "Valor de depósito inválido!" << endl;
        }
    }

    void sacar(float valor) {
        float taxa = valor * 0.005;
        float total = valor + taxa;

        if (valor > 0 && saldo >= total) {
            saldo -= total;
            cout << "Saque de R$ " << valor << " realizado com sucesso!" << endl;
            cout << "Taxa de operação de R$ " << taxa << " foi debitada." << endl;
        } else {
            cout << "Saldo insuficiente ou valor de saque inválido!" << endl;
        }
    }

    float getSaldo() const {
        return saldo;
    }
};

int main() {
    ContaCorrente conta1;
    ContaCorrente conta2;

    conta1.depositar(1000.00);
    conta2.depositar(500.00);
    conta2.sacar(200.00);

    cout << "\nSaldo final da conta 1: R$ " << conta1.getSaldo() << endl;
    cout << "Saldo final da conta 2: R$ " << conta2.getSaldo() << endl;

    return 0;
}
