// Materia: Programación I, Paralelo 4 
// Autor: Alesandro Raul Santander Fernández
// Fecha creación: 10/09/2025 
// Número de ejercicio: 8
#include <iostream>
using namespace std;

// Funcion para calcular y mostrar la cantidad de billetes/monedas
void convertirDinero(int monto) {
    int denominaciones[] = {200, 100, 50, 20, 10, 5, 2, 1};
    int cantidad;

    for (int i = 0; i < 8; i++) {
        cantidad = monto / denominaciones[i];  // Cuantos billetes/monedas de esta denominacion
        monto = monto % denominaciones[i];     // Lo que queda

        if (cantidad > 0) {
            if (denominaciones[i] >= 10)
                cout << cantidad << " billetes de " << denominaciones[i] << " Bs" << endl;
            else
                cout << cantidad << " monedas de " << denominaciones[i] << " Bs" << endl;
        }
    }
}

int main() {
    int monto;
    cout << "Ingrese el monto en Bs: ";
    cin >> monto;

    convertirDinero(monto); // Llamamos a la funcion

    return 0;
}                                                
