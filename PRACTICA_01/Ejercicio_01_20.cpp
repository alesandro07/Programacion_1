// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería en Telecomunicaciones
// Fecha creación: 4/09/2025
// Número de ejercicio: 20
#include <iostream>
using namespace std;

int main() {
    int numero;
    int contador = 0;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    // Si el número es 0, tiene 1 dígito
    if (numero == 0) {
        contador = 1;
    } else {  // Para números negativos, se toma su valor absoluto
        if (numero < 0) numero = -numero;
        while (numero > 0) {
            numero /= 10;     // Elimina el último dígito
            contador++;  // Aumenta el contador de dígitos
        }
    }

    cout << "La cantidad de digitos es: " << contador << endl;

    return 0;
}
