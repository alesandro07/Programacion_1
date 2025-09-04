
// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería en Telecomunicaciones
// Fecha creación: 4/09/2025
// Número de ejercicio: 21
#include <iostream>
using namespace std;

int main() {
    int variable1, variable2, resultado = 0;

    cout << "Ingrese el primer numero: ";
    cin >> variable1;
    cout << "Ingrese el segundo numero: ";
    cin >> variable2;

    // sumas sucesivas
    for (int i = 0; i < variable2; i++) {
        resultado = resultado + variable1;
    }

    cout << "El resultado es: " << resultado << endl;

    return 0;
}


