// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería en Telecomunicaciones
// Fecha creación: 27/08/2025
// Número de ejercicio: 8

#include <iostream>
using namespace std;
int main() {
    int numero;  
    cout << "Ingrese un numero: ";
    cin >> numero;
    if (numero % 2 == 0) {  // se usa el operador matematico % que significa "modulo" y sirve para obtener el residuo de una division
        cout << "El numero es par" << endl;
    } else {
        cout << "El numero es impar" << endl;
    }


    return 0;
}
