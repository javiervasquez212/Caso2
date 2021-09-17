#include <iostream>
#include <string>
#include "ejercicio1.h"
#include "ejercicio2.h"
#include "nodo.h"

using namespace std;

int main(){

    listasimple milista;

    int arreglo[] = {1,3,2,6,1};
    int *punteroArreglo;

    punteroArreglo = arreglo;
    sortBySelectionSort(punteroArreglo,5);

    cout << "Está vacía la lista: " << milista.isEmpty() << " , " 
    << "Cantida de elementos: " << milista.getQuantity() << endl;
}
