// Estructuras de datos grupo #3
// Elaborado por Kenneth Rojas y
// Ultima modificación 11/08/2022
// Quiz 1 y 2

#include <iostream>
#include <conio.h>
using namespace std;

struct Tren
{
    int asientos;
//Los '1' representan asientos ocupado, mientras que '0' reprensentan vacios
}vagon1[] = {0, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1},
vagon2[] =  {1, 0, 0, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1},
vagon3[] =  {1, 0, 0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1};


int main()
{
    int acumulador = 0;
    cout << "Los primeros 10 asientos dispobles estan..." << endl;
    for (int i = 0; i < 17; i++){
        if (acumulador == 10 ){
            continue;
        }if (vagon1[i].asientos == 0){
            cout << "El vagon 1 el asiento " << i+1 << " está disponible" << endl;
            acumulador++;
        }
        
    }

    acumulador = 0;
    cout << endl;
    cout << "Los ultimos 10 asientos dispobles estan..." << endl;
    for (int i = 0; i < 17; i++){
        if (acumulador == 10 ){
            continue;
        }if (vagon3[i].asientos == 0){
            cout << "El vagon 3 el asiento " << i+1 << " está disponible" << endl;
            acumulador++;
        }
        
    }
}