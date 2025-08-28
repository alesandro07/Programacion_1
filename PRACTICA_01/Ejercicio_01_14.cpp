
// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería en Telecomunicaciones
// Fecha creación: 28/08/2025
// Número de ejercicio: 14
#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Ingrese la altura del triángulo: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {          // Bucle para cada fila
        for (int j = 1; j <= i; j++) {      // Bucle para imprimir asteriscos en cada fila
            cout << "*";
        }
        cout << endl;                       
    }

    return 0;
}
