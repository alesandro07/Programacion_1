// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería de Telecomunicaciones
// Fecha creación: 09/09/2025
// Número de ejercicio: 4
#include <iostream>
using namespace std;

int main() {
    int numero = 42;   // Número fijo
    int intento;
    int min = 0, max = 50;

    cout << "Estoy pensando un numero entre 0 y 50" << endl; // numero para adivinar

    for (int i = 1; i <= 5; i++) {
        cout << "Intento " << i << endl;
        cout << "? ";
        cin >> intento;

        if (intento == numero) {
            cout << "Felicitaciones adivinaste el numero" << endl;
            return 0;
        }

        if (intento < numero) {
            min = intento;
        } else {
            max = intento;
        }

        if (i < 5) {
            cout << "El numero esta entre " << min << " y " << max << endl;
        }
    }

    cout << "Lo siento, no adivinaste el numero. Era: " << numero << endl;
    return 0;
}
