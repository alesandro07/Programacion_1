// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería en Telecomunicaciones
// Fecha creación: 4/09/2025
// Número de ejercicio: 23

#include <iostream>
using namespace std;

int main() {
    int numero, invertido = 0;

    cout << "Ingrese un numero entero: ";
    cin >> numero;
    int signo = 1; // Se guarda se es numero negativo
    if (numero < 0) {
        signo = -1;
        numero = -numero; //  el valor absoluto
    }

    while (numero > 0) {
        int digito = numero % 10;       
        invertido = invertido * 10 + digito; // construir el número al revés
        numero /= 10;
    }

    cout << "Numero invertido: " << invertido * signo << endl;

    return 0;
}
