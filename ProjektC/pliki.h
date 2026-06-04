#ifndef KONFERENCJA_H
#define KONFERENCJA_H

// Struktura pojedynczej prelekcji
typedef struct {
    int start_godzina;
    int start_minuta;
    int koniec_godzina;
    int koniec_minuta;
} Prelekcja;

 
//Musiałam już zadeklarować te funkcj, żeby main.c zadziałał

void dodajPrelekcje();
int obliczSale();

#endif // KONFERENCJA_H
