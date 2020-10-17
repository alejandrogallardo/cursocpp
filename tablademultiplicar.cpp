/*  Ejercicio: pedir un numero del 1 al 10
    y mostrar la tabla de multiplicar
*/

#include<iostream>
#include<conio.h>
// conio.h evita que se cierre el ejecutable.exe

using namespace std;

int main(){

    int numero;

    do {
        cout<<"Digite un numero del 1 al 10: "<<endl;
        cin>>numero;
    } while ( (numero<1) || (numero>10) );

    for( int i = 1; i<=10; i++ ){
        cout<<numero<<" * "<< i <<" = "<< numero*i<<endl;
    }

    cout<<"\n\n";
    getch(); // para ejecutar el exe
    return 0;
}
