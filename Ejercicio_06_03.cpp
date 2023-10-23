// Materia: Programación I, Paralelo 1
// Autor: Luciana Yahuita Lazarte
// Fecha creación: 23/10/2023
// Fecha modificación: 23/10/2023
// Número de ejericio: 3
// Problema planteado: Realizar un algoritmo recursivo, dado un vector de números enteros, retorne la
//suma de sus elementos.
#include<iostream>
using namespace std;
int sumaelementos(int[], int);
int main(){
    int tam;
    cout<<"Ingrese el tamaño de su vector: "<<endl;
    cin>>tam;
    int v[tam];
    for(int i=0;i<tam;i++){
        cout<<"Ingrese el: "<<i+1<<" elemento de su vector"<<endl;
        cin>>v[i];
    }
    cout<<"La suma de los elementos es: "<<sumaelementos(v,tam-1)<<endl;
    return 0;
}
int sumaelementos(int a[], int b){
    if (b==0){
        return a[b];
    }else{
        return a[b]+sumaelementos(a,b-1);
    }
}
