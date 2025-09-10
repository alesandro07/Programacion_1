// Materia: Programación I, Paralelo 4 
// Autor: Alesandro Raul Santander Fernández
// Fecha creación: 10/09/2025 
// Número de ejercicio: 10
#include <iostream>
using namespace std;

// Funcion para calcular la tarifa del taxi
double calcularTarifa(double kmRecorridos) {
    double tarifaBase = 10;
    double precioKm = 2;

    double total = tarifaBase + kmRecorridos * precioKm;

    if (kmRecorridos > 10) {
        total = total * 0.9; // Aplicar 10% de descuento
    }

    return total;
}

int main() {
    double kilometros;
    cout << "Ingrese la distancia recorrida en km: ";
    cin >> kilometros;

    double precio = calcularTarifa(kilometros); // Llamamos a la funcion

    cout << "El precio del viaje es: " << precio << " Bs" << endl;

    return 0;
}
