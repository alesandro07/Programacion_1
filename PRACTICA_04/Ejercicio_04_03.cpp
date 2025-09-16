// Materia: Programación I, Paralelo 4 
// Autor: Alesandro Raul Santander Fernandez
// Fecha creación: 15/09/2025 
// Número de ejercicio: 3

#include <iostream>
using namespace std;

// Funcion que recibe un entero por valor y otro por referencia
void ModificarValores(int valor, int &referencia) {
    valor = valor * 2;        // Se modifica solo dentro de la funcion (por valor)
    referencia = referencia + 10;  // Se modifica fuera (por referencia)

    cout << "Dentro de la funcion:" << endl;
    cout << "Valor (por valor) = " << valor << endl;
    cout << "Referencia (por referencia) = " << referencia << endl;
}

int main() {
    int a = 5;
    int b = 20;

    cout << "Antes de llamar a la funcion:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Llamada a la funcion
    ModificarValores(a, b);

    cout << "Despues de llamar a la funcion:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
  
