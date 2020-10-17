#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int numeros[5] = {1,2,3,4,5};
    int suma = 0;

    for(int i = 0; i < 5; i++){
        suma = suma + numeros[i];
    }

    cout<<"La suma de los elementos es: "<<suma<<endl;

    // Copiando de un arreglo a otro

    char letras1[] = {'a','b','c','d','e'};
    char letras2[] = {'f','g','h','i','j'};
    char letras3[10];

    //Copiando de 1 a 3
    for(int i = 0; i < 5; i++){
        letras3[i] = letras1[i];
    }

    // copiando de 2 a 3
    for(int i = 5; i < 10; i++){
        letras3[i] = letras2[i-5];
    }

    for(int i = 0; i < 10; i++){
        cout<<"Arreglo letas 3: "<<letras3[i]<<endl;
    }



    getch();
    return 0;
}
