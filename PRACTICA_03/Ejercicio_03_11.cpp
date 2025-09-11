// Materia: Programación I, Paralelo 4 
// Autor: Alesandro Raul Santander Fernández
// Fecha creación: 10/09/2025 
// Número de ejercicio: 11
#include <iostream>
using namespace std;

// Función para retirar dinero
double retirarDinero(double saldo, double cantidad) {
    if (cantidad > saldo) {
        cout << "Error: Saldo insuficiente." << endl;
    }

    if (int(cantidad) % 10 != 0) {
        cout << "Error: El monto a retirar debe ser multiplo de 10." << endl;
    }

    if (cantidad <= saldo && int(cantidad) % 10 == 0) { // Retiro exitoso
        saldo -= cantidad;
        cout << "Retiro exitoso. Nuevo saldo: " << saldo << " Bs" << endl;
    }

    return saldo;
}

int main() {
    double saldo = 1000;
    double monto;

    cout << "Ingrese el monto a retirar: ";
    cin >> monto;

    saldo = retirarDinero(saldo, monto); // Llamamos a la funcion

    return 0;
}


