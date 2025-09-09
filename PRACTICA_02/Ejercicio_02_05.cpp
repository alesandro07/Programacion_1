// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería de Telecomunicaciones
// Fecha creación: 09/09/2025
// Número de ejercicio: 5
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> numero;

    int numeros[100];  // arreglo con espacio suficiente
    int suma = 0;
    int mayor, menor;

    cout << "Ingrese los " << numero << " numeros:" << endl;

    for (int i = 0; i < numero; i++) {
        cin >> numeros[i];
        suma += numeros[i];

        if (i == 0) {  // inicializamos mayor y menor con el primer número
            mayor = numeros[i];
            menor = numeros[i];
        } else {
            if (numeros[i] > mayor) mayor = numeros[i];
            if (numeros[i] < menor) menor = numeros[i];
        }
    }

    cout << "Resultados:" << endl;
    cout << "a. Sumatoria: " << suma << endl;
    cout << "b. Promedio: " << (suma / (double)numero) << endl;
    cout << "c. Mayor valor: " << mayor << endl;
    cout << "d. Menor valor: " << menor << endl;

    return 0;
}