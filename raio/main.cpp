#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    const double pi = 3.14159;
    double raio;

    cin >> raio;

    double area = pi * pow(raio, 2);


    cout << fixed << setprecision(4);

    cout << "A=" << area << endl;

    return 0;
}
