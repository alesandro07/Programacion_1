// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería en Telecomunicaciones
// Fecha creación: 27/08/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;
int main() {
        double base ,altura, area; // double se coloca  entre variables con decimales y sea mas preciso el resultado, tambien se puede colocar int pero solo admite valores sin decimales 
        cout << "Ingrese la base del triangulo: ";
        cin >> base;
        cout << "Ingrese la altura del triangulo: ";
        cin >> altura;
        area = (base * altura) / 2;
        cout << "El area del triangulo es: " << area << endl;
        return 0;

}
