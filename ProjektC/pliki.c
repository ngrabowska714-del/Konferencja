#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "pliki.h"

int wczytajZPliku(const char* nazwaPliku, Prelekcja tablica[], int* liczbaPrelekcji, int maxPrelekcji) {
    FILE* plik = fopen(nazwaPliku, "r");
    if (plik == NULL) {
        printf("Blad: Nie udalo sie otworzyc pliku %s do odczytu.\n", nazwaPliku);
        return 0; 
    }

    *liczbaPrelekcji = 0;

    while (*liczbaPrelekcji < maxPrelekcji &&
        fscanf(plik, "%d:%d %d:%d",
            &tablica[*liczbaPrelekcji].start_godzina,
            &tablica[*liczbaPrelekcji].start_minuta,
            &tablica[*liczbaPrelekcji].koniec_godzina,
            &tablica[*liczbaPrelekcji].koniec_minuta) == 4) {

        (*liczbaPrelekcji)++; 
    }

    fclose(plik);
    printf("Sukces: Wczytano %d prelekcji z pliku '%s'.\n", *liczbaPrelekcji, nazwaPliku);
    return 1;
}

int zapiszDoPliku(const char* nazwaPliku, Prelekcja tablica[], int liczbaPrelekcji) {
    FILE* plik = fopen(nazwaPliku, "w");
    if (plik == NULL) {
        printf("Blad: Nie udalo sie otworzyc pliku %s do zapisu.\n", nazwaPliku);
        return 0;
    }

    for (int i = 0; i < liczbaPrelekcji; i++) {
        fprintf(plik, "%02d:%02d %02d:%02d\n",
            tablica[i].start_godzina, tablica[i].start_minuta,
            tablica[i].koniec_godzina, tablica[i].koniec_minuta);
    }

    fclose(plik);
    printf("Zapisano %d prelekcji do pliku '%s'.\n", liczbaPrelekcji, nazwaPliku);
    return 1;
}
