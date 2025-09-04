// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería en Telecomunicaciones
// Fecha creación: 4/09/2025
// Número de ejercicio: 22
#include <iostream>
using namespace std;

int main() {
    int numero1, numero2;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    if (numero1 % numero2 == 0) { //utilizacion de los modulos para determinar si un numero es multiplo de otro
        cout << numero1 << " es multiplo de " << numero2<< endl;
    }
    else if (numero2 % numero1 == 0) {
        cout << numero2 << " es multiplo de " << numero1 << endl;
    }
    else {
        cout << "Ninguno es multiplo del otro." << endl;
    }

    return 0;
}
