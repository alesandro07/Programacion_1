// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería de Telecomunicaciones
// Fecha creación: 09/09/2025
// Número de ejercicio: 1

#include <iostream>
using namespace std;

int main() {
    int lanzamientos;
    cout << "Ingrese la cantidad de lanzamientos: ";
    cin >> lanzamientos;

    int contadorPares = 0;
    int cara = 1; // Inicia el dado en 1

    for (int i = 0; i < lanzamientos; i++) {
        cout << "Lanzamiento " << i + 1 << ": " << cara << endl;

        if (cara % 2 == 0) {
            contadorPares++;
        }

        cara++;           // Avanza al siguiente numero
        if (cara > 6) {   // Reinicia si pasa de 6 por las 6 caras del dado
            cara = 1;
        }
    }

    cout << "En La cantidad de caras pares obtenidas fue: " << contadorPares << endl;
    cout << "Frecuencia relativa: " << (double)contadorPares / lanzamientos << endl;

    return 0;
}

