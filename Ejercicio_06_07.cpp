// Materia: Programación I, Paralelo 1
// Autor: Luciana Yahuita Lazarte
// Fecha creación: 23/10/2023
// Fecha modificación: 23/10/2023
// Número de ejericio: 7
// Problema planteado: Realizar un algoritmo recursivo para el siguiente problema: un granjero ha
//comprado una pareja de conejos para criarlos y luego venderlos. Si la pareja de
//conejos produce una nueva pareja cada mes y la nueva pareja tarda un mes
//más en ser también productiva, ¿cuántos pares de conejos podrá poner a la
//venta el granjero al cabo de un año?
#include <iostream>
using namespace std;
int paresDeConejos(int meses) {
    if (meses<=2) {
        return 1;  // En el primer y segundo mes, hay una pareja de conejos.
    }
    return paresDeConejos(meses-1)+paresDeConejos(meses-2);
}
int main() {
    int meses=12; // 12 meses en un año
    int totalParejas=paresDeConejos(meses);
    cout << "Después de " << meses << " meses, el granjero tendra " << totalParejas << " pares de conejos para la venta." << endl;
    return 0;
}
