// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería de Telecomunicaciones
// Fecha creación: 09/09/2025
// Número de ejercicio: 2
#include <iostream>
using namespace std;

int main() {
    int cantidad;
    cout << "Ingrese la cantidad de lanzamientos: ";
    cin >> cantidad;

    int caras = 0, cruces = 0;
    int moneda = 0; // 0 = cara, 1 = cruz

    for (int i = 0; i < cantidad; i++) {
        if (moneda == 0) {
            caras++;
            cout << "Lanzamiento " << i + 1 << ": Cara" << endl;
        } else {
            cruces++;
            cout << "Lanzamiento " << i + 1 << ": Cruz" << endl;
        }

        // Alternar entre cara y cruz
        moneda = 1 - moneda;
    }

    cout << "Resultados:" << endl;
    cout << "Caras: " << (caras * 100 / cantidad) << " %" << endl;
    cout << "Cruces: " << (cruces * 100 / cantidad) << " %" << endl;

    return 0;
}

