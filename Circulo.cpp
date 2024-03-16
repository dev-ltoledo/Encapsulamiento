#include <iostream>
using namespace std;

// Definición de la clase Circulo
class Circulo {
private:
    float radio;
    float M_PI = 3.1416; // Definición de la constante PI

public:
    // Constructor de la clase Circulo
    Circulo(float radio = 0.0f) {
        // Inicializa el radio asegurándose de que no sea negativo
        this->radio = radio < 0.0f ? 0.0f : radio;
    }

    // Método para establecer el radio del círculo
    void setRadio(float radio) {
        // Asigna el radio asegurándose de que no sea negativo
        this->radio = radio < 0.0f ? 0.0f : radio;
    }

    // Método para obtener el radio del círculo
    float getRadio() const {
        return radio;
    }

    // Método para calcular el área del círculo
    float getArea() const {
        return M_PI * radio * radio; // Fórmula del área del círculo: PI * radio^2
    }
};
