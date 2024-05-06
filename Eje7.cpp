#include <iostream>
using namespace std;

int main() {
    int inicio, final, suma = 0;

    cout << "Ingrese el numero de inicio del rango: ";
    cin >> inicio;
    cout << "Ingrese el numero final del rango: ";
    cin >> final;

    if (inicio > final) {
        cout << "Error: el inicio del rango debe ser menor o igual al final." << endl;
        return 1;
    }

    cout << "Números en el rango (" << inicio << " - " << final << "): ";
    for (int i = inicio; i <= final; i++) {
        cout << i << " ";
        suma += i;
    }
    cout << endl;

    cout << "La suma de los números en el rango es: " << suma << endl;

    return 0;
}

