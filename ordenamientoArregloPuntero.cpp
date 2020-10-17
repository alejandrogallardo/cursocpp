/* Pedir N numeros almacenarlo en arreglo dinamico, orden ascedete */

#include<iostream>
#include<conio.h>
#include<stdlib.h> // para que funcione el new y delete

using namespace std;

// prototipo de funcion
void pedirDatos();
void ordenarArreglo(int *,int);
void mostrarArreglo(int *,int);

int nElementos, *elemento;

int main()
{
    pedirDatos();
    ordenarArreglo(elemento, nElementos);
    mostrarArreglo(elemento, nElementos);
    delete[] elemento; // libere la memoroa itulizasa paara el erreglo diamico
    getch();
    return 0;
}

void pedirDatos()
{
    cout<<"Digite el numero de elementos del Arreglo: ";
    cin>>nElementos;

    elemento = new int[nElementos]; // se reserva la memoria dinamica

    for(int i = 0; i < nElementos; i++)
    {
        cout<<"Digite un numero["<<i<<"]: ";
        cin>>*(elemento+i);
    }

}

void ordenarArreglo(int *elemento, int nElementos)
{
    int aux;

    // ordenamieto burbuja
    for(int i=0; i < nElementos; i++)
    {
        for(int j = 0; j < nElementos - 1; j++)
        {
            if(*(elemento + j) > *(elemento + j + 1))
            {
                aux = *(elemento + j);
                *(elemento + j) = *(elemento + j + 1);
                *(elemento + j + 1) = aux;
            }
        }
    }
}

void mostrarArreglo(int *,int)
{
    cout<<"\n\nMostrando arreglo ordenado: ";
    for(int i = 0; i < nElementos; i++)
    {
        cout<<*(elemento + i)<<" ";
    }
}
