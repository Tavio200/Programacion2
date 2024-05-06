#include <iostream>

unsigned long long factorial(int n) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;
    std::cout << "Ingrese un numero entero para calcular su factorial: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cerr << "El factorial no esta definido para numeros negativos." << std::endl;
        return 1;
    }

    unsigned long long resultado = factorial(numero);
    std::cout << "El factorial de " << numero << " es: " << resultado << std::endl;

    return 0;
}

