/*  Ejercicio: pedir un numero del 1 al 10
    y mostrar la tabla de multiplicar
*/

#include<iostream>
#include<conio.h>
// conio.h evita que se cierre el ejecutable.exe

using namespace std;

int main(){

    int i = 0, numero;

    do {
        cout<<"Digite un numero: "<<endl;
        cin>>numero;

        if ( numero != 0 ){
            i++;
        }
    } while ( numero != 0 );

    cout<<"Veces que se ingreso un numero distinto de 0: "<< i;

    getch(); // para ejecutar el exe
    return 0;
}
