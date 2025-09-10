// Materia: Programación I, Paralelo 4 
// Autor: Alesandro Raul Santander Fernández
// Fecha creación: 10/09/2025 
// Número de ejercicio: 9
#include <iostream>
using namespace std;

// Funcion que calcula el tiempo extra o faltante
void calcularTiempo(int minutosTrabajados) {
    const int jornada = 8 * 60; // 8 horas = 480 minutos

    if (minutosTrabajados > jornada) {
        int extra = minutosTrabajados - jornada;
        cout << "Tiempo extra trabajado: " << extra << " minutos (" << extra / 60 << " h " << extra % 60 << " min)" << endl;
    } 
    else if (minutosTrabajados < jornada) {
        int faltante = jornada - minutosTrabajados;
        cout << "Tiempo que se debe a la empresa: " << faltante << " minutos (" << faltante / 60 << " h " << faltante % 60 << " min)" << endl;
    } 
    else {
        cout << "Ha cumplido exactamente la jornada laboral de 8 horas." << endl;
    }
}

int main() {
    int tiempo;
    cout << "Ingrese el tiempo trabajado en minutos: ";
    cin >> tiempo;

    calcularTiempo(tiempo); // Llamamos a la funcion

    return 0;
}

