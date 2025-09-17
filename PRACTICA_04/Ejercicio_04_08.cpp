// Materia: Programación I, Paralelo 4 
// Autor: Alesandro Raul Santander Fernandez
// Fecha creación: 17/09/2025 
// Número de ejercicio: 8
#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {
    int numero;
    cout << "Ingrese el numero de productos vendidos en el dia: ";
    cin >> numero;

    srand(time(0)); // Inicializar la semilla aleatoria

    double subtotal = 0;

    cout << "Precios de los productos generados:" << endl;
    for (int i = 0; i < numero; i++) {
        int precio = 20 + rand() % 31; // Genera un numero entre 20 y 50
        cout << "Producto " << i + 1 << ": " << precio << " Bs" << endl;
        subtotal += precio;
    }

    // Calcular IVA
    double iva = subtotal * 0.13;
    double total = subtotal + iva;

    // Aplicar descuento si corresponde
    if (total > 2500) {
        total -= total * 0.05;
    }

    cout << "Subtotal: " << subtotal << " Bs" << endl;
    cout << "IVA (13%): " << iva << " Bs" << endl;
    cout << "Total a pagar (con descuento si aplica): " << total << " Bs" << endl;
    cout << "Pago de IVA al Servicio de Impuestos Nacionales: " << iva << " Bs" << endl;

    return 0;
}
