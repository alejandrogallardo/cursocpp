/*
    cin>>nombre; Al momento de detectar un espacio en blaco deja de guardar
    gets(nombre);
*/
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){

    char palabra[] = "Alejandro";
    char palabra2[] = {'A','l','e','j','a','n','d','r','o'};
    char nombre[30];
    char nombre2[30];
    int longitud = 0;

    cout<<"Digite su nombre: ";
    cin.getline(nombre, 30, '\n');

    cout<<nombre<<endl;

    longitud = strlen(nombre);
    cout<<"El numero de elemtnos es: "<<longitud<<endl;

    strcpy(nombre2, palabra);

    cout<<nombre2<<endl;

    getch();
    return 0;
}
