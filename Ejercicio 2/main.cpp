#include <iostream>
#include "triangulo.cpp"
#include "circulo.cpp"
#include "pentagono.cpp"

int main() {
    double base = 5.0;
    double altura = 3.0;
    double radio = 2.5;

    std::cout << "Área del triángulo: " << Geometria::calcularAreaTriangulo(base, altura) << std::endl;
    std::cout << "Área del círculo: " << Geometria::calcularAreaCirculo(radio) << std::endl;
    std::cout << "Área del pentágono: " << Geometria::calcularAreaPentagono(base, altura) << std::endl;

    return 0;
}
