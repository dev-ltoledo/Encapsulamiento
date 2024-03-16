#include <iostream>
using namespace std;

// Definición de la clase Estudiante
class Estudiante {
private:
    string nombre;
    int numeroCuenta;
    float promedio;

public:
    // Constructor de la clase Estudiante
    Estudiante(string nombre = "", int numeroCuenta = 0, float promedio = 0.0f) {
        // Inicializa los atributos con los valores proporcionados o valores predeterminados
        this->nombre = nombre;
        this->numeroCuenta = numeroCuenta;
        this->promedio = promedio;
    }

    // Método para establecer el nombre del estudiante
    void setNombre(string nombre) {
        this->nombre = nombre;
    }

    // Método para obtener el nombre del estudiante
    string getNombre() const {
        return nombre;
    }

    // Método para establecer el número de cuenta del estudiante
    void setNumeroCuenta(int numeroCuenta) {
        this->numeroCuenta = numeroCuenta;
    }

    // Método para obtener el número de cuenta del estudiante
    int getNumeroCuenta() const {
        return numeroCuenta;
    }

    // Método para establecer el promedio del estudiante
    void setPromedio(float promedio) {
        this->promedio = promedio;
    }

    // Método para obtener el promedio del estudiante
    float getPromedio() const {
        return promedio;
    }

    // Método para obtener la calificación del estudiante basada en su promedio
    char getCalificacion() const {
        if (promedio >= 90.0f) {
            return 'A';
        } else if (promedio >= 80.0f) {
            return 'B';
        } else if (promedio >= 70.0f) {
            return 'C';
        } else if (promedio >= 60.0f) {
            return 'D';
        } else {
            return 'F';
        }
    }
};
