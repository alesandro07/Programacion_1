// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería de Telecomunicaciones
// Fecha creación: 09/09/2025
// Número de ejercicio: 7
#include <iostream>
using namespace std;

int main() {
    int ninos;
    cout << "Ingrese la cantidad total de ninos: ";
    cin >> ninos;

    // Simulamos "aleatorio" dividiendo a los niños
    int n1 = ninos / 3;           // parte para niños de 1 año
    int n2 = (ninos/ 2) - n1;    // parte para niños de 2 años
    int n3 = ninos - (n1 + n2);   // el resto para niños de 3 años

    // Consumo de pañales
    int consumo = (n1 * 6) + (n2 * 3) + (n3 * 2);

    cout << "\nDistribucion de ninos:" << endl;
    cout << "Niños de 1 año: " << n1 << endl;
    cout << "Niños de 2 años: " << n2 << endl;
    cout << "Niños de 3 años: " << n3 << endl;

    cout << "\nConsumo total de panales por dia: " << consumo << endl;

    return 0;
}
