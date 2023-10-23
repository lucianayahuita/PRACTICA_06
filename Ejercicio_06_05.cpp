// Materia: Programación I, Paralelo 1
// Autor: Luciana Yahuita Lazarte
// Fecha creación: 23/10/2023
// Fecha modificación: 23/10/2023
// Número de ejericio: 5
// Problema planteado: Realizar un algoritmo recursivo para comparar si dos vectores son iguales
#include <iostream>
using namespace std;
bool sonIguales(int* vector1, int* vector2, int longitud, int indice = 0) {
    // Caso base: hemos comparado todos los elementos
    if (indice == longitud) {
        return true;
    }
    // Compara los elementos en el índice actual
    if (vector1[indice] != vector2[indice]) {
        return false;
    }
    return sonIguales(vector1, vector2, longitud, indice + 1);
}
int main() {
    int n;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;
    int vector1[n], vector2[n];
    cout << "Ingrese los elementos del primer vector: ";
    for (int i = 0; i < n; i++) {
        cin >> vector1[i];
    }
    cout << "Ingrese los elementos del segundo vector: ";
    for (int i = 0; i < n; i++) {
        cin >> vector2[i];
    }
    if (sonIguales(vector1, vector2, n)) {
        cout << "Los vectores son iguales." << std::endl;
    } else {
        cout << "Los vectores no son iguales." << std::endl;
    }
    return 0;
}

