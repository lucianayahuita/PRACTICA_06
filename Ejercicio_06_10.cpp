// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 23/10/2023
// Fecha modificaci�n: 23/10/2023
// N�mero de ejericio: 10
// Problema planteado: Realizar un algoritmo recursivo para calcular el coeficiente binomial a partir de
//la lectura de dos n�meros enteros, a partir de la relaci�n:
#include <iostream>
using namespace std;
unsigned int factorial(unsigned int);
int main(){
    unsigned int n,m;
    cout<<"Ingrese el primer valor: "<<endl;
    cin>>n;
    cout<<"Ingrese el segundo valor: "<<endl;
    cin>>m;
    cout << "El coeficiente binomial es: " << factorial(n) / (factorial(n - m) * factorial(m));
    return 0;
}
//funcion para calcular el factorial recursivamente
unsigned int factorial(unsigned int x){
    int n;
    if (x==0)
        x=1;
    else
        x=x*factorial(x-1);
    return x;
}
