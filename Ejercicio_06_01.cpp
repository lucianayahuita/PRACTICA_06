// Materia: Programación I, Paralelo 1
// Autor: Luciana Yahuita Lazarte
// Fecha creación: 23/10/2023
// Fecha modificación: 23/10/2023
// Número de ejericio: 1
// Problema planteado: Realizar un algoritmo recursivo para calcular el máximo común divisor de dos
//números enteros aplicando el algoritmo de Euclides.
#include<iostream>
using namespace std;
int mcd (int, int);
int main(){
    int num1,num2;
    //validamos que los numeros sean enteros y positivos
    do{
        cout<<"Ingrese un primer numero: "<<endl;
        cin>>num1;
        if (num1<0){
            cout<<"Ingrese un primer numero ENTERO Y POSITIVO"<<endl;
        }
    }while(num1<0);
     do{
        cout<<"Ingrese un segundo numero: "<<endl;
        cin>>num2;
        if (num2<0){
            cout<<"Ingrese un segundo numero ENTERO Y POSITIVO"<<endl;
        }
    }while(num2<0);
    if (num1>num2) cout<<"El maximo comun divisor de los dos numeros mcd(a,b) es:"<<mcd(num1,num2);
    else if(num1<num2) cout<<"El maximo comun divisor de los dos numeros mcd(b,a) es:"<<mcd(num2,num1);
    return 0;
}
int mcd (int a, int b){
    if (b==0)
        return a;
    else mcd(b,a%b);
}
