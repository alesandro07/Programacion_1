// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería en Telecomunicaciones
// Fecha creación: 3/09/2025
// Número de ejercicio: 18

#include <iostream>
using namespace std;

int main() {
    int contador = 0;  

    for (int n = 2; contador < 100; n++) {  // Recorremos números desde 2
        int divisores = 0;

        // Contar divisores de n
        for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                divisores++;
        }

        // Si tiene solo 2 divisores → es primo
        if (divisores == 2) {
            cout << n << " "; // las " " son para separar los números primos
            contador++;
        }
    }

    cout << endl;
    return 0;
}



