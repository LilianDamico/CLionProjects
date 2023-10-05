#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

void shellSort(vector<int>& arr) {
    int n = arr.size();
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main() {
    vector<int> arr;
    string input;
    int element;

    cout << "Digite os elementos do array (pressione Enter para encerrar a inserção):\n";

    // Ler elementos até que o usuário pressione Enter sem inserir nada
    while (getline(cin, input) && !input.empty()) {
        stringstream ss(input);
        while (ss >> element) {
            arr.push_back(element);
        }
    }

    int n = arr.size();

    cout << "Array original: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    shellSort(arr);

    cout << "Array ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}



/*
 *As primeiras linhas incluem as bibliotecas necessárias, incluindo <iostream> para entrada e saída de dados,
 * <vector> para usar um vetor dinâmico, <string> para manipulação de strings e <sstream> para converter
 * uma linha de entrada em números.
 *
 * void shellSort(vector<int>& arr) {
    int n = arr.size();
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

    Esta é a função shellSort que ordena um vetor de inteiros usando o algoritmo Shell Sort. O funcionamento do
    algoritmo Shell Sort foi explicado anteriormente.



int main() {
    vector<int> arr;
    string input;
    int element;

    cout << "Digite os elementos do array (pressione Enter para encerrar a inserção):\n";

    Aqui, começamos a função main(). Declaramos um vetor dinâmico chamado arr para armazenar os elementos
    inseridos pelo usuário. string input é usada para armazenar a linha de entrada do usuário e int element
    para armazenar cada número separadamente.

    A linha cout << "Digite os elementos do array (pressione Enter para encerrar a inserção):\n";
    exibe uma mensagem para o usuário, indicando que eles devem pressionar Enter para encerrar a inserção de dados.



    while (getline(cin, input) && !input.empty()) {

    Este loop while permite que o programa leia as linhas de entrada do usuário até que o usuário pressione
    Enter sem inserir nada (input.empty()). Ele usa getline(cin, input) para ler uma linha de entrada e armazená-la
    na variável input.


        stringstream ss(input);

    Aqui, criamos um objeto stringstream chamado ss para processar a linha de entrada. Isso nos permite extrair
    números da linha de entrada.



        while (ss >> element) {
            arr.push_back(element);
        }
    }

    Este loop while aninhado lê os números da linha de entrada usando ss >> element e os adiciona ao vetor arr
    usando arr.push_back(element).


    int n = arr.size();

    cout << "Array original: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    shellSort(arr);

    cout << "Array ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

    Finalmente, calculamos o tamanho do vetor arr usando arr.size() e exibimos o vetor original. Em seguida,
    chamamos a função shellSort para ordenar o vetor. Após a ordenação, exibimos o vetor ordenado e encerramos
    o programa com return 0;.


 */