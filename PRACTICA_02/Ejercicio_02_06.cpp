// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería de Telecomunicaciones
// Fecha creación: 09/09/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> numero;

    int num, contadorPrimos = 0;

    for (int i = 0; i < numero; i++) {
        cout << "Numero " << i+1 << ": ";
        cin >> num;

        // Verificar si es primo junto con sus comprabaciones 
        bool primo = true;
        if (num <= 1) {
            primo = false;
        } else {
            for (int j = 2; j <= num / 2; j++) {
                if (num % j == 0) {
                    primo = false;
                    break;
                }
            }
        }

        if (primo) {
            contadorPrimos++;
        }
    }

    cout << "Cantidad de numeros primos: " << contadorPrimos << endl;

    return 0;
}
