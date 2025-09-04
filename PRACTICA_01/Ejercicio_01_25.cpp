// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería en Telecomunicaciones
// Fecha creación: 4/09/2025
// Número de ejercicio: 25

#include <iostream>
using namespace std;

int main() {
    char respuesta; 

    do {
        int numero;
        cout << "Ingrese un numero: ";
        cin >> numero;

        cout << "Tabla de multiplicar del " << numero << ":" << endl;

        // Mostrar la tabla de multiplicar del 1 al 10
        for (int i = 1; i <= 10; i++) {
            cout << numero << " x " << i << " = " << numero * i << endl;
        }

        // Preguntar si quiere calcular otra tabla
        cout << "¿Desea calcular otra tabla? (s/n): ";
        cin >> respuesta;

    } while (respuesta == 's' || respuesta == 'S'); // Repetir mientras la respuesta sea 's' o 'S'

    cout << "Programa terminado." << endl;

    return 0;
}


