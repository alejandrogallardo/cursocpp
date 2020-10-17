/*  Sentencia for

    for ( expr1; exprLogica; expr2 ){
        conjunto de instrucciones;
    }
*/

#include<iostream>
#include<conio.h>
// conio.h evita que se cierre el ejecutable.exe

using namespace std;

int main(){

    int i;

    for( i=1; i<=10; i++ ){
        cout<< i <<endl;
    }

    getch(); // para ejecutar el exe
    return 0;
}
