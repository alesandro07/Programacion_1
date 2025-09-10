// Materia: Programación I, Paralelo 4 
// Autor: Alesandro Raul Santander Fernández
// Fecha creación: 10/09/2025 
// Número de ejercicio: 3
#include <iostream>
using namespace std;

// Funcion para verificar si un numero es capicua
bool Capicua(int numero) {
    int original = numero;
    int invertido = 0;

    while (numero > 0) {
        int digito = numero % 10;            // Tomamos el ultimo digito
        invertido = invertido * 10 + digito; // Lo agregamos al numero invertido
        numero = numero / 10;                // Quitamos el ultimo digito
    }

    return original == invertido; // Comparamos original con invertido
}

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (Capicua(numero)) {
        cout << numero << " es capicua." << endl;
    } else {
        cout << numero << " no es capicua." << endl;
    }

    return 0;
}
