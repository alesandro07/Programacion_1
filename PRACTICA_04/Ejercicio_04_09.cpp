// Materia: Programación I, Paralelo 4 
// Autor: Alesandro Raul Santander Fernandez
// Fecha creación: 17/09/2025 
// Número de ejercicio: 9
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese el numero de vendedoras: ";
    cin >> numero;

    double precioProducto;
    cout << "Ingrese el precio unitario del producto: ";
    cin >> precioProducto;

    for (int i = 1; i <= numero; i++) {
        double sueldoBasico, ventas, comision, sueldoTotal;
        int cantidadVendida;

        cout << "Vendedora " << i << " ---" << endl;
        cout << "Ingrese el sueldo basico: ";
        cin >> sueldoBasico;
        cout << "Ingrese la cantidad de productos vendidos: ";
        cin >> cantidadVendida;

        ventas = cantidadVendida * precioProducto;
        comision = ventas * 0.10;        // 10% de comision
        sueldoTotal = sueldoBasico + comision;

        cout << "Comision: " << comision << " Bs" << endl;
        cout << "Sueldo Total: " << sueldoTotal << " Bs" << endl;
    }

    return 0;
}
