// Materia: Programación I, Paralelo 4 
// Autor: Alesandro Raul Santander Fernandez
// Fecha creación: 17/09/2025 
// Número de ejercicio: 5
#include <iostream>
using namespace std;

int main() {
    double horas, tarifa, salario = 0, bonificacion = 0;

    cout << "Ingrese las horas trabajadas: ";
    cin >> horas;

    cout << "Ingrese la tarifa por hora: ";
    cin >> tarifa;

    // Si trabajo más de 8 horas
    if (horas > 8) {
        double horasExtra = horas - 8;
        salario = 8 * tarifa;                  // pago normal por 8 horas
        bonificacion = horasExtra * tarifa * 1.5; // pago extra con 50% de bonificacion
    } else {
        salario = horas * tarifa; // si no trabajo más de 8 horas, no hay bonificacion
    }

    cout << "--- RESULTADOS ---" << endl;
    cout << "Salario base: " << salario << endl;
    cout << "Bonificacion por horas extra: " << bonificacion << endl;
    cout << "Salario total: " << salario + bonificacion << endl;

    return 0;
}

