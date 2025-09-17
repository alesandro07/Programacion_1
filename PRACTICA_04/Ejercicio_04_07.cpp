// Materia: Programación I, Paralelo 4 
// Autor: Alesandro Raul Santander Fernandez
// Fecha creación: 17/09/2025 
// Número de ejercicio: 7
#include <iostream>
using namespace std;

// Funcion para calcular el MCD usando el algoritmo de Euclides
int calcularMCD(int m, int n) {
    while (n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }
    return m; // Aqui m es el MCD
}

// Funcion para calcular el MCM
int calcularMCM(int m, int n) {
    return (m * n) / calcularMCD(m, n);
}

int main() {
    int m, n;
    cout << "Ingrese dos numeros enteros positivos: ";
    cin >> m >> n;

    int mcd = calcularMCD(m, n);
    int mcm = calcularMCM(m, n);

    cout << "El MCD de " << m << " y " << n << " es: " << mcd << endl;
    cout << "El MCM de " << m << " y " << n << " es: " << mcm << endl;

    return 0;
}
