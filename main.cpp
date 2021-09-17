#include <iostream>
#include <string>
#include "ejercicio1.h"
#include "ejercicio2.h"
#include "nodo.h"

using namespace std;

int main(){

    listasimple mylist;

    int array[] = {1,3,2,6,1};
    int *pointerArray;

    pointerArray = array;
    sortBySelectionSort(pointerArray,5);

    cout << "Está vacía la lista: " << mylist.isEmpty() << " , " 
    << "Cantida de elementos: " << mylist.getQuantity() << endl;
}
