
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

