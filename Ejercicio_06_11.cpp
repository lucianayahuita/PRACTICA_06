// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 23/10/2023
// Fecha modificación: 23/10/2023
// Número de ejericio: 11
// Problema planteado: Realizar un algoritmo recursivo para elaborar un programa en el que dado un
//entero n > 1, calcule e imprima los elementos correspondientes a la conjetura
//de Ullman (en honor al matemático Ullman)
#include <iostream>
using namespace std;
void ullman(int);
int main(){
    int n;
    do{
        cout<<"Ingrese un numero entero y positivo: "<<endl;
        cin>>n;
        if (n<0){
            cout<<"Ingrese un numero ENTERO Y POSITIVO "<<endl;
        }
    }while (n<0);
    cout << "Secuencia de ullman para " << n << ": ";
    ullman(n);
    cout << "1" << endl;
    return 0;
}
// Función que calcula la secuencia de Collatz recursivamente
void ullman(int num) {
    cout<<num<<" ";
    if (num == 1)
        return ;
    else if (num % 2 == 0)
        ullman(num / 2);
    else
        ullman(num * 3 + 1);
}
