#include<iostream>

using namespace std;

int main(){

    int saldoInicial = 1000, opc;
    float extra, saldo = 0, retiro;

    cout<<"\tBienvenido a su cajero virtual"<<endl;
    cout<<"1- Ingresar dinero en cuenta: "<<endl;
    cout<<"2- Retirar dinero de cuenta"<<endl;
    cout<<"3- Salir"<<endl;
    cout<<"Opciones";
    cin>>opc;

    switch(opc){
        case 1:
            cout<<"Digite la cantidad de dinero a ingresar: ";
            cin>>extra;
            saldo = saldoInicial + extra;
            cout<<"Dinero En cuenta: "<<saldo;
            break;
        case 2:
            cout<<"Digite la cantidad de dinero a retirar: ";
            cin>>retiro;

            if ( retiro > saldoInicial ) {
                cout<<"No tiene suficiente dinero en cuenta";
            } else {
                saldo = saldoInicial - retiro;
                cout<<"Su saldo actual es: "<<saldo;
            }

        case 3:
            break;

    }

    return 0;
}
