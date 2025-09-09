// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería de Telecomunicaciones
// Fecha creación: 09/09/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;

int main() {
    int contador = 0; //  semilla
    contador++;       // en cada ejecución cambia el número
    if (contador > 10) contador = 1;

    int num = contador; // número entre 1 y 10
    cout << "Numero generado: " << num << endl;

    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    cout << "Factorial de " << num << " es: " << factorial << endl;

    return 0;
}
