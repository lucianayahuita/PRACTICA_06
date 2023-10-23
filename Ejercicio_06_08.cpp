// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Yahuita Lazarte
// Fecha creaci�n: 23/10/2023
// Fecha modificaci�n: 23/10/2023
// N�mero de ejericio: 8
// Problema planteado: Realizar un algoritmo recursivo que nos diga si una cadena de caracteres es
//sim�trica
#include <iostream>
#include <string>
using namespace std;
int esSimetrica(const string& str, int inicio, int fin) {
    // Caso base: si la cadena es de longitud 0 o 1, es sim�trica
    if (inicio >= fin) {
        return 1;
    }
    // Verifica si el primer y el �ltimo car�cter son iguales
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
