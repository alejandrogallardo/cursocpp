#include <iostream>
#include <ctime>

using namespace std;

void sleep(float seconds){
    clock_t startClock = clock();
    float secondsAhead = seconds * CLOCKS_PER_SEC;
    // do nothing until the elapsed time has passed.
    while(clock() < startClock+secondsAhead);
    return;
}
int main(){

    cout << "Procesando archivo..." << endl;
    sleep(5.0);
    cout << "Archivo procesado con exito :)" << endl;

    return 0;
}
