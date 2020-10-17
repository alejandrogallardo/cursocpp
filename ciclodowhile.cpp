/*  Sentencia do while
    do {
        conjunto de instrucciones;
    }
    while ( logica );

    Se ejecuta al menos una vez
*/

#include<iostream>
#include<stdlib.h>
// conio.h evita que se cierre el ejecutable.exe

using namespace std;

int main(){

    int i;

    i = 1; // se debe inicializar antes del bule

    do{
        cout<< i <<endl;
        i++;
    } while( i<=10 );

    system("pause"); // para ejecutar el exe
    return 0;
}
