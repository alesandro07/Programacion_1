// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería en Telecomunicaciones
// Fecha creación: 27/08/2025
// Número de ejercicio: 9
#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad; // utilizacion del if para toma de decisiones con los operaqdores logicos
    if (edad <= 12) {
        cout << "Niño" << endl;
    }
    if (edad > 12 && edad <= 18) {
        cout << "Adolescente" << endl;
    }
    if (edad > 18 && edad < 60) {
        cout << "Mayor de edad" << endl;
    }
    if (edad >= 60) {
        cout << "Adulto mayor" << endl;
    }

    return 0;
}

