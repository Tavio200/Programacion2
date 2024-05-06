#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float cuadrado, cubo, zeta;

    cout << "Se calculan los valores de la ecuacion z = x^2 + x^3" << endl;
    
    cout << fixed << setprecision(2);

    cout << "x\tcuadrado\tcubo\t\tzeta" << "\n";

    for (int x = 1; x <= 50; x++) {
        cuadrado = x * x;
        cubo = x * x * x;
        zeta = cuadrado + cubo;
        cout << x << "\t" << cuadrado << "\t\t" << cubo << "\t\t" << zeta << "\n";
    }

    return 0;
}

