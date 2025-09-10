// Materia: Programación I, Paralelo 4 
// Autor: Alesandro Raul Santander Fernández
// Fecha creación: 10/09/2025 
// Número de ejercicio: 7
#include <iostream>
using namespace std;

// Función para calcular y mostrar las estadísticas
void calcularEstadisticas(int numero) {
    int sumaEdades = 0, sumaAlturas = 0;
    int mayores18 = 0, mayores175 = 0;

    for (int i = 0; i < numero; i++) {
        int edad, altura;
        cout << "Alumno " << i + 1 << " - Ingrese edad (1-35): ";
        cin >> edad;
        cout << "Alumno " << i + 1 << " - Ingrese altura en cm (120-200): ";
        cin >> altura;

        sumaEdades += edad;
        sumaAlturas += altura;

        if (edad > 18) mayores18++;
        if (altura > 175) mayores175++;
    }

    cout << "Edad media: " << float(sumaEdades) / numero << endl;
    cout << "Altura media: " << float(sumaAlturas) / numero << " cm" << endl;
    cout << "Cantidad de alumnos mayores de 18: " << mayores18 << endl;
    cout << "Cantidad de alumnos que miden mas de 175 cm: " << mayores175 << endl;
}

int main() {
    int alumno;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> alumno;

    calcularEstadisticas(alumno); // Llamamos a la funcion

    return 0;
}

