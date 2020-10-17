#include<iostream>
#include<conio.h>

using namespace std;

// Prototipos de funcion
void pedirDatos();
void multiplicar(float x, float y);

// Variables globales
float num1, num2;

int main()
{
    pedirDatos();
    multiplicar(num1, num2);

    getch();
    return 0;
}

// Definir funcion
void pedirDatos()
{
    cout<<"Digite 2 numeros: ";
    cin>>num1>>num2;
}

void multiplicar(float x, float y)
{
    float multi = x * y;

    cout<<"El resultado de la multiplicacion es: "<<multi<<endl;
}
