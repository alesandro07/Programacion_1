// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería en Telecomunicaciones
// Fecha creación: 28/08/2025
// Número de ejercicio: 15
#include <iostream>
using namespace std;

int main() {
    int N;
    float nota, suma = 0;

    cout << "Ingrese la cantidad de notas: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << "Nota #" << i << ": ";
        cin >> nota;
        suma += nota;  // Sumar todas las notas
    }

    cout << "Promedio: " << suma / N << endl;// Calcula promedio (suma / N) y lo muestra  

    return 0;
}

