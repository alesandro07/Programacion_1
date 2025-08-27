// Materia: Programación I, Paralelo 4
// Autor: Alesandro Raul Santander Fernandez
// Carnet: 13552698 L.P.
// Carrera del estudiante: Ingeniería en Telecomunicaciones
// Fecha creación: 27/08/2025
// Número de ejercicio: 7
#include <iostream>
using namespace std;
int main(){
    char letra;  //  esta funcion se usa para utilizar letras 
    cout << "Ingrese una letra: ";
    cin >> letra;
    if ((letra >= 'a' && letra <= 'z') ) {  // se utiliza  los operadores logicos  && y || que siginifican "y" y "o" 
        if ((letra == 'a') || (letra == 'e') || (letra == 'i') || (letra == 'o') || (letra == 'u') ) {         
            cout << "Es una vocal" << endl;
        } else {
            cout << "Es una consonante" << endl;
        }
    } else {
        cout<< "Es un caracter especial" << endl;

    }

        
            
}


