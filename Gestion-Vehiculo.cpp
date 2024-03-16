#include <iostream>
using namespace std;

// Definición de la clase Vehiculo
class Vehiculo {
protected:
    string marca;
    string modelo;
    int año;

public:
    // Constructor de la clase Vehiculo
    Vehiculo(string marca, string modelo, int año) {
        // Inicialización de los atributos con los valores proporcionados
        this->marca = marca;
        this->modelo = modelo;
        this->año = año;
    }

    // Método virtual puro para encender el vehículo
    virtual void encender() = 0;

    // Método virtual puro para apagar el vehículo
    virtual void apagar() = 0;

    // Destructor virtual para la clase base
    virtual ~Vehiculo() {}
};

// Definición de la clase Coche que hereda de Vehiculo
class Coche : public Vehiculo {
public:
    // Constructor de la clase Coche
    Coche(string marca, string modelo, int año) : Vehiculo(marca, modelo, año) {}

    // Implementación del método encender para un coche
    void encender() override {
        cout << "Encendiendo el coche " << marca << " " << modelo << " (" << año << ")" << endl;
    }

    // Implementación del método apagar para un coche
    void apagar() override {
        cout << "Apagando el coche " << marca << " " << modelo << " (" << año << ")" << endl;
    }
};

// Definición de la clase Motocicleta que hereda de Vehiculo
class Motocicleta : public Vehiculo {
public:
    // Constructor de la clase Motocicleta
    Motocicleta(string marca, string modelo, int año) : Vehiculo(marca, modelo, año) {}

    // Implementación del método encender para una motocicleta
    void encender() override {
        cout << "Encendiendo la motocicleta " << marca << " " << modelo << " (" << año << ")" << endl;
    }

    // Implementación del método apagar para una motocicleta
    void apagar() override {
        cout << "Apagando la motocicleta " << marca << " " << modelo << " (" << año << ")" << endl;
    }
};
