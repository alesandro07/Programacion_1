// Materia: Programación I, Paralelo 4 
// Autor: Alesandro Raul Santander Fernández
// Fecha creación: 10/09/2025 
// Número de ejercicio: 6
#include <iostream>
using namespace std;

// Función para verificar si un año es bisiesto
bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

// Función para obtener el número de días de un mes
int diasEnMes(int anio, int mes) {
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if (esBisiesto(anio))
                return 29;
            else
                return 28;
        default:
            return -1; // Mes inválido
    }
}

int main() {
    int anio, mes;
    cout << "Ingrese el anio: ";
    cin >> anio;
    cout << "Ingrese el mes (1-12): ";
    cin >> mes;

    int dias = diasEnMes(anio, mes);

    if (dias == -1)
        cout << "Mes invalido." << endl;
    else
        cout << "El mes " << mes << " del anio " << anio << " tiene " << dias << " dias." << endl;

    return 0;
}
