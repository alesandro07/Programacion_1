// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería en Telecomunicaciones
// Fecha creación: 27/08/2025
// Número de ejercicio: 10
#include <iostream>
using namespace std;
int main(){
   int nota;
    cout << "Ingrese la nota del estudiante (0 - 100): ";
    cin >> nota;

    if (nota >= 51) {
        if (nota < 60) {
            cout << "Aprobado - Calificacion = C" << endl;
        }
        if (nota >= 60 && nota < 70) {
            cout << "Aprobado - Calificacion = C+" << endl;
        }
        if (nota >= 70 && nota < 80) {
            cout << "Aprobado - Calificacion = B" << endl;
        }
        if (nota >= 80 && nota < 90) {
            cout << "Aprobado - Calificacion = B+" << endl;
        }
        if (nota >= 90 && nota < 95) {
            cout << "Aprobado - Calificacion = A" << endl;
        }
        if (nota >= 95 && nota < 100) {
            cout << "Aprobado" << endl;
        }
        if (nota == 100) {
            cout << "Aprobado - Calificacion = A+" << endl;
        }
    } 
    else {
        cout << "Reprobado" << endl; // en caso de poner una nota menor que 51 se activa el else
    }

    return 0;


}