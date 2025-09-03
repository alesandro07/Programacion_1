// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería en Telecomunicaciones
// Fecha creación: 3/09/2025
// Número de ejercicio: 17

#include <iostream>
using namespace std;

int main() {
    int numero1, numero2, suma1 = 0, suma2 = 0;

    cout << "Ingresa el primer numero: ";
    cin >> numero1;

    cout << "Ingresa el segundo numero: ";
    cin >> numero2;
    for(int i = 1; i < numero1; i++) { //Se recorre desde 1 hasta numero1-1
        if(numero1 % i == 0) // Si i divide exactamente a numero1
            suma1 += i; // Se suma i a suma1
    }
    for(int i = 1; i < numero2; i++) { //Se recorre desde 1 hasta numero2-1
        if(numero2 % i == 0) // Si i divide exactamente a numero2
            suma2 += i; // Se suma i a suma2
    }

    if(suma1 == numero2 && suma2 == numero1) //Si se cumple esto son numeros amigos
        cout << numero1 << " y " << numero2 << " son numeros amigos" << endl;
    else
        cout << numero1 << " y " << numero2 << " NO son numeros amigos" << endl;

    return 0;
}
