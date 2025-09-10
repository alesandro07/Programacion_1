// Materia: Programación I, Paralelo 4 
// Autor: Alesandro Raul Santander Fernández
// Fecha creación: 10/09/2025 
// Número de ejercicio: 2
#include <iostream>
using namespace std;

// Función para convertir Celsius a Fahrenheit
float celsiusAFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32; // Formula de conversión
}

int main() {
    float celsius;
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;

    float fahrenheit = celsiusAFahrenheit(celsius);
    cout << celsius << " C equivalen a " << fahrenheit << " F" << endl;

    return 0;
}

