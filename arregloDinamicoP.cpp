#include<iostream>
#include<conio.h>
#include<stdlib.h> // Funcion new y delete

using namespace std;

// Prototipo de funcion
void pedirNotas();
void mostrarNotas();

int numCalif, *calif;

int main (){
    pedirNotas();
    mostrarNotas();
    delete[] calif; // Liberamos el espacio en bytes utilizado anteriomente
    getch();
    return 0;
}

void pedirNotas()
{
    cout<<"Digite el numero de calificacions: ";
    cin>>numCalif;

    calif = new int[numCalif]; // Crea el arreglo

    for(int i = 0; i < numCalif; i++){
        cout<<"Ingrese una nota: ";
        cin>>calif[i];
    }
}

void mostrarNotas()
{
    cout<<"\n\nMostrando notas del Usuario:\n";
    for(int i = 0; i < numCalif; i++){
        cout<<calif[i]<<endl;
    }
}



