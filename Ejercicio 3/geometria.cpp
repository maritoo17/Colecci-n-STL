#include <iostream>
#include "heptagono.cpp"
#include "circunferencia.cpp"
#include "rectangulo.cpp"

int main() {
    Geometria::Circulo c(5);
    std::cout << "Area: " << c.calcularArea() << std::endl;
    std::cout << "Perimetro: " << c.calcularPerimetro() << std::endl;

    Geometria :: Heptagono h(5);
    std::cout << "Area: " << h.calcularArea() << std::endl;
    std::cout << "Perimetro: " << h.calcularPerimetro() << std::endl;

    Geometria :: Rectangulo r(5,3);
    std::cout << "Area: " << r.calcularArea() << std::endl;
    std::cout << "Perimetro: " << r.calcularPerimetro() << std::endl;

    return 0;

}