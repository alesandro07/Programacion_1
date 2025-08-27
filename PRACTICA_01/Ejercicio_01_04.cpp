// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería en Telecomunicaciones
// Fecha creación: 27/08/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;
int main()
{
    double radio , volumen;
    const double PI = 3.14159 ; // Utilizacion de una constante para el calculo del volumen
    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;
    volumen=(4/3)*PI*radio*radio*radio;
    cout <<"El volumen de la esfera es:"<<volumen <<endl;

    return 0;



}



