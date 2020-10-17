#include<iostream>
#include<conio.h>

using namespace std;

// Prototipos de funcion
int encontrarMax(int x, int y);

int main()
{
    int n1, n2;

    cout<<"Digite 2 numeros: ";
    cin>>n1>>n2;

    cout<<"El numero mayor es: "<<encontrarMax(n1,n2)<<endl;
    getch();
    return 0;
}

// Definir funcion
int encontrarMax(int x, int y)
{
    int numMax;

    if ( x > y ){
        numMax = x;
    }
    else {
        numMax = y;
    }
}
