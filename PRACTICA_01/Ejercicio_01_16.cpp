// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería en Telecomunicaciones
// Fecha creación: 3/09/2025
// Número de ejercicio: 16

#include<iostream>
using namespace std;
int main(){
    int numero, divisior=0;
    cout<<"Ingrese un numero: ";
    cin>>numero; 
    for (int i=1; i<=numero; i++){
        if (numero%i==0){   // Si el numero es divisible entre i (residuo 0)
            divisior++;
        }
    }
if (divisior==2) // Si tiene exactamente 2 divisores (1 y él mismo) es primo
{
    cout<<numero<<" es un numero primo"<<endl;
}
else{
    cout<<numero<<" no es un numero primo"<<endl;
}

    return 0;
}
