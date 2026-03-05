#include <iostream>

using namespace std;

int main() {
    int senhas_atendimento[5];

    for (int i = 0; i < 5; i++) {
        senhas_atendimento[i] = 101 + i;
    }

    cout << "Endereco da primeira posicao: " << &senhas_atendimento[0] << endl;
    cout << "Endereco da segunda posicao: " << &senhas_atendimento[1] << endl;

    long diferenca = (char*)&senhas_atendimento[1] - (char*)&senhas_atendimento[0];
    cout << "Diferenca em bytes: " << diferenca << endl;

    return 0;
}