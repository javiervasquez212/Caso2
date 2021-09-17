#include <stdlib.h>
#include "nodo.h"

struct listasimple {
    int size = 0;

    player* start = nullptr;
    player* end = nullptr;

    bool isEmpty() {
        return size == 0 ;
    }
    int getQuantity() {
        return size;
    }

    void listPlayers(){ // No funciona

        for( player* inicio = start ; inicio != nullptr; inicio = inicio->next){

            cout << inicio->nombre << endl;

        }
    }

    void addPlayer(int pNumber, string pNombre) {
        player* newvalue = (player*)malloc(sizeof(struct player)); // No funciona

        newvalue->nombre = pNombre;
        newvalue->numero = pNumber;

        if (size == 0) {
            start = newvalue;
            end = newvalue;
        } else {
            end->next = newvalue;            
            end = newvalue;      
        }
        size++;
    }

};
