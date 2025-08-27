
// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería en Telecomunicaciones
// Fecha creación: 27/08/2025
// Número de ejercicio: 5

#include<iostream>
using namespace std;
int main()
{
    double celsius , kelvin;
    cout<<"Ingrese la temperatura en grados Celsius: ";
    cin>>celsius;
    kelvin = celsius + 273.15;  // Se utiliza la formula de conversión
    cout<<"La temperatura en grados Kelvin es: "<<kelvin<<endl;

    return 0;
}