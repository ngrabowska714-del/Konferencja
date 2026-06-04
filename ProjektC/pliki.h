#ifndef KONFERENCJA_H
#define KONFERENCJA_H

// Struktura pojedynczej prelekcji
typedef struct {
    int start_godzina;
    int start_minuta;
    int koniec_godzina;
    int koniec_minuta;
} Prelekcja;

 
//Musia³am ju¿ zadeklarowaæ te funkcj, ¿eby Twój main.c zadzia³a³

void dodajPrelekcje();
int obliczSale();

#endif // KONFERENCJA_H
