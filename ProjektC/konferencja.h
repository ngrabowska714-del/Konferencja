#ifndef KONFERENCJA_H
#define KONFERENCJA_H

// Struktura reprezentująca pojedynczą prelekcję
typedef struct {
    int start_godzina;
    int start_minuta;
    int koniec_godzina;
    int koniec_minuta;
} Prelekcja;

//Tylko zadeklarowałam funkcje żeby main działał
int dodajPrelekcje(Prelekcja tablica[], int* liczbaPrelekcji, int maxPrelekcji);
int obliczSale();

#endif 

