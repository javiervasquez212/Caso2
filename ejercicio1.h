#include <iostream>
#include <string>

using namespace std;

void sortBySelectionSort(int *arreglo, int tamanyoArreglo){

    for(int i = 0; i < tamanyoArreglo-1; i++){

        int numeroMenor = arreglo[i];

        for(int x = i+1; x < tamanyoArreglo; x ++){

            int numeroMayor = arreglo[x];

            if (numeroMenor > numeroMayor){

                swap(arreglo[i],arreglo[x]);

            }
        }
    }
    for(int i = 0; i < tamanyoArreglo; i++){

        cout << arreglo[i] << endl;
        }
}





