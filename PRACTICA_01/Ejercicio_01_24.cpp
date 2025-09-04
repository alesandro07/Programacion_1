// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería en Telecomunicaciones
// Fecha creación: 4/09/2025
// Número de ejercicio: 24

#include <iostream>
using namespace std;

int main() {
    int opcion = -1;

    while (opcion != 0) { // Bucle que se repite mientras el usuario no elija salir
        cout << "\nMenu:" << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Opcion 3" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) cout << "Has seleccionado la Opcion 1" << endl;
        if (opcion == 2) cout << "Has seleccionado la Opcion 2" << endl;
        if (opcion == 3) cout << "Has seleccionado la Opcion 3" << endl;
        if (opcion == 0) cout << "Saliendo..." << endl;
        if (opcion != 0 && opcion != 1 && opcion != 2 && opcion != 3)
            cout << "Opcion invalida" << endl;
    }

    return 0;
}

