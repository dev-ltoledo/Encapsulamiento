#include <iostream>
#include "Circulo.cpp" // Incluye la implementación de Circulo
#include "Estudiante.cpp" // Incluye la implementación de Estudiante
#include "Gestion-Vehiculo.cpp" // Incluye la implementación de Gestion-Vehiculo
#include "SistemaNotificacion.cpp" // Incluye la implementación de SistemaNotificacion

using namespace std;

// Creación de instancias de los objetos
Circulo circulo(8.0f);
Estudiante estudiante("Luis Toledo", 12345, 95.5f);
Coche coche("BMW", "E90", 2012);
Motocicleta moto("KAWASAKI", "R1", 2022);
vector<Notificador*> notificadores;

int main() {
    int opcion;

    // Menú de selección de ejercicio
    cout << "Ingrese el ejercicio a ver" << endl;
    cout << "1. Circulo" << endl;
    cout << "2. Estudiante" << endl;
    cout << "3. Gestion de vehiculos" << endl;
    cout << "4. Sistema de notificacion" << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;

    // Manejo del menú
    switch (opcion) {
        case 1:
            // Ejercicio de Circulo
            cout << "Radio: " << circulo.getRadio() << endl;
            cout << "Área: " << circulo.getArea() << endl;
            break;
        case 2:
            // Ejercicio de Estudiante
            cout << "Nombre: " << estudiante.getNombre() << endl;
            cout << "Número de cuenta: " << estudiante.getNumeroCuenta() << endl;
            cout << "Promedio: " << estudiante.getPromedio() << endl;
            cout << "Calificación: " << estudiante.getCalificacion() << endl;

            // Modificación del promedio y visualización de la calificación actualizada
            estudiante.setPromedio(55.0f);
            cout << "Calificación después de modificar el promedio: " << estudiante.getCalificacion() << endl;
            break;
        case 3:
            // Ejercicio de Gestion de vehiculos
            coche.encender();
            moto.encender();
            coche.apagar();
            moto.apagar();
            break;
        case 4:
            // Ejercicio de Sistema de notificacion

            // Creación de instancias de notificadores
            notificadores.push_back(new NotificadorEmail());
            notificadores.push_back(new NotificadorSMS());
            notificadores.push_back(new NotificadorApp());

            // Envío de mensajes de prueba utilizando los notificadores
            string mensaje = "Hola, este es un mensaje de prueba";
            for (Notificador* notificador : notificadores) {
                notificador->enviarMensaje(mensaje);
            }

            break;
    }
}
