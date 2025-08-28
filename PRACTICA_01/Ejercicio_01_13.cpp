// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería en Telecomunicaciones
// Fecha creación: 28/08/2025
// Número de ejercicio: 13

#include <iostream>
using namespace std;
int main() {
    int N, suma = 0;

    cout << "Ingrese un numero entero N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        suma += i;  //i empieza en 1, se suma a "suma", i aumenta hasta N
    }
    cout << "La suma de los enteros de 1 hasta " << N << " es: " << suma << endl;
    return 0; 
}