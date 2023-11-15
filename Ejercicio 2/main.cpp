#include <iostream>
#include "triangulo.cpp"
#include "circulo.cpp"
#include "pentagono.cpp"
#include "decagono.cpp"
#include "cuadrado.cpp"

int main() {
    double baseTriangulo = 5.0;
    double alturaTriangulo = 3.0;
    double radioCirculo = 2.5;
    double ladoPentagono = 5.0;
    double apotemaPentagono = 3.0;
    double ladoDecagono = 8.0;
    double ladoCuadrado = 4.0;

    std::cout << "Área del triángulo: " << Geometria::calcularAreaTriangulo(baseTriangulo, alturaTriangulo) << std::endl;
    std::cout << "Área del círculo: " << Geometria::calcularAreaCirculo(radioCirculo) << std::endl;
    std::cout << "Área del pentágono: " << Geometria::calcularAreaPentagono(ladoPentagono, apotemaPentagono) << std::endl;
    std::cout << "Área del decágono: " << Geometria::calcularAreaDecagono(ladoDecagono) << std::endl;
    std::cout << "Área del cuadrado: " << Geometria::calcularAreaCuadrado(ladoCuadrado) << std::endl;

    return 0;
}

