#ifndef PLIKI_H
#define PLIKI_H

#include "konferencja.h"
int wczytajZPliku(const char* nazwaPliku, Prelekcja tablica[], int* liczbaPrelekcji, int maxPrelekcji);
int zapiszDoPliku(const char* nazwaPliku, Prelekcja tablica[], int liczbaPrelekcji);

#endif 
