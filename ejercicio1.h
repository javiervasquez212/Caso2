#include <iostream>
#include <string>

using namespace std;

void sortBySelectionSort(int *array, int sizeArray){

    for(int i = 0; i < sizeArray-1; i++){

        int smallerNumber = array[i];

        for(int x = i+1; x < sizeArray; x ++){

            int biggerNumber = array[x];

            if (smallerNumber > biggerNumber){

                swap(array[i],array[x]);

            }
        }
    }
    for(int i = 0; i < sizeArray; i++){

        cout << array[i] << endl;
        }
}





