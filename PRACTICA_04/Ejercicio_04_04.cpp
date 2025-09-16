// Materia: Programación I, Paralelo 4 
// Autor: Alesandro Raul Santander Fernandez
// Fecha creación: 16/09/2025 
// Número de ejercicio: 4
#include <iostream>
using namespace std;

// Convierte Celsius a Fahrenheit
double ConvertirCelsiusAFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Devuelve la mayor de dos temperaturas
double MayorTemperatura(double temp1, double temp2) {
    if (temp1 > temp2)
        return temp1;
    else
        return temp2;
}

int main() {
    double celsius1, celsius2;

    cout << "Ingrese la primera temperatura en Celsius: ";
    cin >> celsius1;

    cout << "Ingrese la segunda temperatura en Celsius: ";
    cin >> celsius2;

    // Convertimos ambas temperaturas a Fahrenheit
    double fahrenheit1 = ConvertirCelsiusAFahrenheit(celsius1);
    double fahrenheit2 = ConvertirCelsiusAFahrenheit(celsius2);

    cout << "Temperatura 1 en Fahrenheit: " << fahrenheit1 << endl;
    cout << "Temperatura 2 en Fahrenheit: " << fahrenheit2 << endl;

    // Obtenemos la mayor temperatura en Fahrenheit
    double mayor = MayorTemperatura(fahrenheit1, fahrenheit2);
    cout << "La mayor temperatura en Fahrenheit es: " << mayor << endl;

    return 0;
}
