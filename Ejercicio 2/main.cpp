#include <iostream>
#include "triangulo.cpp"
#include "circulo.cpp"

int main() {
    double base = 5.0;
    double altura = 3.0;
    double radio = 2.5;

    std::cout << "Área del triángulo: " << Geometria::calcularAreaTriangulo(base, altura) << std::endl;
    std::cout << "Área del círculo: " << Geometria::calcularAreaCirculo(radio) << std::endl;

    return 0;
}
