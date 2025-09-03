
// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería en Telecomunicaciones
// Fecha creación: 3/09/2025
// Número de ejercicio: 19
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    // Bucle para multiplicar del 1 al 10
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
