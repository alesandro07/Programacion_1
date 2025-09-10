// Materia: Programación I, Paralelo 4 
// Autor: Alesandro Raul Santander Fernández
// Fecha creación: 10/09/2025 
// Número de ejercicio: 1
#include <iostream>
using namespace std;

bool  par(int numero){    // Función para determinar si un número es par
    return numero % 2 == 0;
}
int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (par(numero)){ // uso de la función par
        cout << numero << " es par." << endl;
    } else {
        cout << numero << " es impar." << endl;
    }

    return 0;
}
