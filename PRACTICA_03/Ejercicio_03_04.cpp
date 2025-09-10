// Materia: Programación I, Paralelo 4 
// Autor: Alesandro Raul Santander Fernández
// Fecha creación: 10/09/2025 
// Número de ejercicio: 4

#include <iostream>
using namespace std;

// Función para calcular el IMC
float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);//formula del IMC
}

int main() {
    float peso, altura;

    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;

    cout << "Ingrese su altura en metros: ";
    cin >> altura;

    float imc = calcularIMC(peso, altura);

    cout << "Su IMC es: " << imc << endl;

    // Clasificación sin else if
    if (imc < 18.5) {
        cout << "Clasificacion: Bajo peso" << endl;
    }
    if (imc >= 18.5 && imc < 25) {
        cout << "Clasificacion: Normal" << endl;
    }
    if (imc >= 25 && imc < 30) {
        cout << "Clasificacion: Sobrepeso" << endl;
    }
    if (imc >= 30) {
        cout << "Clasificacion: Obesidad" << endl;
    }

    return 0;
}

