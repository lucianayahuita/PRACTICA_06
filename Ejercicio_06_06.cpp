// Materia: Programación I, Paralelo 1
// Autor: Luciana Yahuita Lazarte
// Fecha creación: 23/10/2023
// Fecha modificación: 23/10/2023
// Número de ejericio: 6
// Problema planteado: Realizar un algoritmo recursivo para la siguiente función: Q(n)=1^2+2^2+3^2+.....
#include <iostream>
#include <math.h>
using namespace std;
unsigned int algoritmo(unsigned int);
int main(){
    unsigned int n;
    cout<<"Ingrese el valor de n"<<endl;
    cin>>n;
    cout<<"La suma es: "<<algoritmo(n);
    return 0;
}
unsigned int algoritmo(unsigned int n)
{
    if (n == 0) // Condición de SALIDA - CASO BASE
        n = 1;
    else if(n>1){
        n = algoritmo(n-1)+pow(n,2);
    }
    return n;
}
