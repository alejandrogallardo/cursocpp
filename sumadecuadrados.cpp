/* Calcule la suma de los cuadrados de los primeros 10 numeros */

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

    int suma = 0, cuadrado;

    for ( int i = 1; i<=10; i++ ) {
        cuadrado = i * i;
        suma += cuadrado;
    }

    cout<<"El resultado es: "<<suma<<endl;

    getch();

    return 0;
}
