// Materia: Programación I, Paralelo 4 
// Autor: Alesandro Raul Santander Fernández
// Fecha creación: 10/09/2025 
// Número de ejercicio: 5
#include <iostream>
using namespace std;

// FunciOn para calcular el promedio ponderado
float promedioPonderado(int nota1, int nota2, int nota3, int nota4) {
    int peso1 = 10, peso2 = 20, peso3 = 30, peso4 = 40;
    int sumaPesos = peso1 + peso2 + peso3 + peso4;

    float sumaPonderada = (nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3) + (nota4 * peso4);

    return sumaPonderada / sumaPesos;
}

int main() {
    int nota1, nota2, nota3, nota4;

    cout << "Ingrese la primera nota (1 a 100): ";
    cin >> nota1;
    cout << "Ingrese la segunda nota (1 a 100): ";
    cin >> nota2;
    cout << "Ingrese la tercera nota (1 a 100): ";
    cin >> nota3;
    cout << "Ingrese la cuarta nota (1 a 100): ";
    cin >> nota4;

    float promedio = promedioPonderado(nota1, nota2, nota3, nota4);

    cout << "El promedio ponderado es: " << promedio << endl;

    return 0;
}
