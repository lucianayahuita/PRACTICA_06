// Materia: Programación I, Paralelo 1
// Autor: Luciana Yahuita Lazarte
// Fecha creación: 23/10/2023
// Fecha modificación: 23/10/2023
// Número de ejericio: 8
// Problema planteado: Realizar un algoritmo recursivo que nos diga si una cadena de caracteres es
//simétrica
#include <iostream>
#include <string>
using namespace std;
int esSimetrica(const string& str, int inicio, int fin) {
    // Caso base: si la cadena es de longitud 0 o 1, es simétrica
    if (inicio >= fin) {
        return 1;
    }
    // Verifica si el primer y el último carácter son iguales
    if (str[inicio]!=str[fin]) {
        return 0;
    }
    return esSimetrica(str,inicio + 1,fin - 1);
}
int main() {
    string cadena;
    cout <<"Ingrese una cadena de caracteres: ";
    cin >>cadena;

    if(esSimetrica(cadena,0,cadena.length()-1)==1){ //la funcion length se usa para obtener la longitud de la cadena
        cout << "La cadena es simetrica." << endl;
    } else {
        cout << "La cadena no es simetrica." << endl;
    }
    return 0;
}
