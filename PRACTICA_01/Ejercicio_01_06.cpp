// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería en Telecomunicaciones
// Fecha creación: 27/08/2025
// Número de ejercicio: 6

#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero > 0) //Mayor que 0
        cout << "El numero es positivo" <<endl;

    if (numero < 0) //Menor que 0
        cout << "El numero es negativo" <<endl;

    if (numero == 0)//Igual a 0
        cout << "El numero es cero" <<endl;

    return 0;
}
