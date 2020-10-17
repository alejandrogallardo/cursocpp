#include<iostream>

using namespace std;

int main(){

    int a, b;

    cout<<"Ingrese dos numeros: ";
    cin>>a>>b;

    if( a==b ){
        cout<<"Ambos numeros son iguales";
    } else if ( a>b ){
        cout<<"El numero mayor es: "<<a;
    } else {
        cout<<"El numero mayor es: "<<b;
    }

    return 0;
}
