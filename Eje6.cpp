#include <iostream>
#include <string>

int main() {
    int numero;
    std::cout << "Ingrese un numero entero: ";
    std::cin >> numero;

    if (std::cin.fail()) {
        std::cerr << "Por favor, ingrese un numero entero válido." << std::endl;
        return 1; 
    }

    if (numero % 2 == 0) {
        std::cout << numero << " es Par." << std::endl;
    } else {
        std::cout << numero << " es Impar." << std::endl;
    }

    return 0;
}

