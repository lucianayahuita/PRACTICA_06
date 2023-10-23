// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Yahuita Lazarte
// Fecha creaci�n: 23/10/2023
// Fecha modificaci�n: 23/10/2023
// N�mero de ejericio: 4
// Problema planteado: Realizar un algoritmo recursivo que escriba al rev�s una cadena
#include <iostream>
#include <string>
using namespace std;
void imprimirAlReves(const string& str, int pos);
int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Cadena al reves: ";
    imprimirAlReves(cadena, 0);
    cout << endl;
    return 0;
}
void imprimirAlReves(const string& str, int pos) {
    if (pos < str.size()) {
        imprimirAlReves(str, pos + 1);
        cout << str[pos];
    }
}
