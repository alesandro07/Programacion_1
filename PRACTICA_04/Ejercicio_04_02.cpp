// Materia: Programación I, Paralelo 4 
// Autor: Alesandro Raul Santander Fernandez
// Fecha creación: 15/09/2025 
// Número de ejercicio: 2
#include <iostream>
#include <cmath>  // Para usar M_PI y pow()
using namespace std;

// Función para calcular el volumen de un cilindro
double CalcularVolumen(double radio, double altura = 10) {
    return M_PI * pow(radio, 2) * altura; // Volumen = π * r^2 * h
}

int main() {
    double radio, altura;

    cout << "Ingrese el radio: ";
    cin >> radio;

    cout << "Ingrese la altura (si no desea, presione 0): ";
    cin >> altura;

    if (altura == 0) {
        cout << "Volumen del cilindro (altura por defecto = 10): " 
             << CalcularVolumen(radio) << endl;
    } else {
        cout << "Volumen del cilindro: " << CalcularVolumen(radio, altura) << endl;
    }

    return 0;
}
