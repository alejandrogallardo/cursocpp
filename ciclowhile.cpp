/*  Sentencia while
    while ( logica ){
        Conjunto de instrucciones
    }
*/

#include<iostream>
#include<conio.h>
// conio.h evita que se cierre el ejecutable.exe

using namespace std;

int main(){

    int i;

    i = 1; // se debe inicializar antes del bule

    while( i <= 10 ){ // i = 10; (i >= 1) i--; cuenta de 10 a 1
        cout<< i <<endl;
        i++;
    }

    getch(); // para ejecutar el exe
    return 0;
}
