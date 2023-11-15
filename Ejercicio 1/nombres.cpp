#include <iostream>

namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }
    int resta(int a, int b) {
        return a - b;
    }
    int multiplicacion(int a, int b) {
        return a * b;
    }
    int division(int a, int b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cout << "Error: ¡División por cero!" << std::endl;
            return 0;
        }
    }
    int cuadrado(int a) {
        return a * a;
    }
}

int main() {
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;
    std::cout << "Multiplicacion: " << Matematicas::multiplicacion(5, 3) << std::endl;
    std::cout << "Division: " << Matematicas::division(6, 2) << std::endl;
    std::cout << "Cuadrado de 5: " << Matematicas::cuadrado(5) << std::endl;
    return 0;
}
