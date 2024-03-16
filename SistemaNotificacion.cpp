#include <iostream>
#include <vector>

using namespace std;

// Definición de la clase abstracta Notificador
class Notificador {
public:
    // Método virtual puro para enviar un mensaje
    virtual void enviarMensaje(string mensaje) = 0;

    // Destructor virtual para la clase base
    virtual ~Notificador() {}
};

// Definición de la clase concreta NotificadorEmail que hereda de Notificador
class NotificadorEmail : public Notificador {
public:
    // Implementación del método enviarMensaje para enviar un email
    void enviarMensaje(string mensaje) override {
        cout << "Simulando envío de email: " << mensaje << endl;
    }
};

// Definición de la clase concreta NotificadorSMS que hereda de Notificador
class NotificadorSMS : public Notificador {
public:
    // Implementación del método enviarMensaje para enviar un SMS
    void enviarMensaje(string mensaje) override {
        cout << "Simulando envío de SMS: " << mensaje << endl;
    }
};

// Definición de la clase concreta NotificadorApp que hereda de Notificador
class NotificadorApp : public Notificador {
public:
    // Implementación del método enviarMensaje para enviar un mensaje a través de la app
    void enviarMensaje(string mensaje) override {
        cout << "Simulando envío de mensaje a través de la app: " << mensaje << endl;
    }
};
