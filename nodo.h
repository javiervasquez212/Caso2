#ifndef _PLAYER_
#define _PLAYER_ 1

#include <iostream>
#include <cstring>

using namespace std;

struct player 
{
    int numero;
    string nombre;
    player* next = nullptr;
};

#endif