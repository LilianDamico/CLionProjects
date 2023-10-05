#include <iostream>

using namespace std;

int main() {
    int valor;
    cin >> valor;

    cout << valor << endl;

    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int quantidadeNotas;

    for (int i = 0; i < 7; i++) {
        quantidadeNotas = valor / notas[i];
        valor %= notas[i];
        cout << quantidadeNotas << " nota(s) de R$ " << notas[i] << ",00" << endl;
    }

    return 0;
}
