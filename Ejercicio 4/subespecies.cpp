#include <iostream>
#include "biología.cpp"
#include "fisica.cpp"
#include "quimica.cpp"

int main() {
    double masa = 10;
    double energia = Ciencia::Fisica::calcularEnergia(masa);

    std::cout << "Energia para una masa de " << masa << " kg: " << energia << " Julios" << std::endl;

    double particulas = 2.5e23;
    double moles = Ciencia::Quimica::calcularMoles(particulas);

    std::cout << "Moles para " << particulas << " particulas: " << moles << " moles" << std::endl;

    double temperatura_celsius = 25.0;
    double temperatura_fahrenheit = Ciencia::Biologia::convertirCelsiusAFahrenheit(temperatura_celsius);

    std::cout << "25 grados Celsius son " << temperatura_fahrenheit << " grados Fahrenheit" << std::endl;

    return 0;
}

