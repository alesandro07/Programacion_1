// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería en Telecomunicaciones
// Fecha creación: 28/08/2025
// Número de ejercicio: 12
#include <iostream>
using namespace std;
int main() {
        int numero;

    do {
        cout << "Ingrese un numero entre 1 y 5: ";
        cin >> numero;
    } while (numero < 1 || numero > 5);  // Se repetira hasta que el numero este entre 1 y 5

    cout << "El numero ingresado es valido: " << numero << endl;

    return 0; 
}