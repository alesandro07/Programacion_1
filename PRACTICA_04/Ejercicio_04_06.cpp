// Materia: Programación I, Paralelo 4 
// Autor: Alesandro Raul Santander Fernandez
// Fecha creación: 17/09/2025 
// Número de ejercicio: 6
#include <iostream>
using namespace std;

// Funcion para verificar si un número es primo
bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    int suma = 0, temp = numero;

    // Calcular la suma de los digitos distintos de 0
    while (temp != 0) {
        int digito = temp % 10;
        if (digito != 0) suma += digito;
        temp /= 10;
    }

    cout << "La suma de los digitos distintos de cero es: " << suma << endl;

    // Verificar si la suma es primo
    if (esPrimo(suma)) {
        cout << "La suma es un numero primo." << endl;
    } else {
        cout << "La suma NO es un numero primo." << endl;
    }

    return 0;
}
