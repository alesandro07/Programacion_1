// Materia: Programación I, Paralelo 4 
// Autor: Alesandro Raul Santander Fernandez
// Fecha creación: 15/09/2025 
// Número de ejercicio: 1

#include <iostream>
using namespace std;

// Función que intercambia dos valores por referencia
void IntercambiarValores(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;

    cout << "Ingrese el primer valor: ";
    cin >> x;
    cout << "Ingrese el segundo valor: ";
    cin >> y;

    cout << "\nAntes de intercambiar: x = " << x << ", y = " << y << endl;

    // Llamada a la función
    IntercambiarValores(x, y);

    cout << "Despues de intercambiar: x = " << x << ", y = " << y << endl;

    return 0;
}
