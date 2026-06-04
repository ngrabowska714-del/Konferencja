#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "konferencja.h"

static int naMinuty(int godzina, int minuta) {
    return godzina * 60 + minuta;
}

static int czyPoprawny(int godzina, int minuta) {
    return (godzina >= 0 && godzina <= 23 &&
            minuta >= 0 && minuta <= 59);
}



int dodajPrelekcje(Prelekcja tablica[], int* liczbaPrelekcji, int maxPrelekcji) {
    if (*liczbaPrelekcji >= maxPrelekcji) {
        printf("Blad: osiagnieto maksymalna liczbe prelekcji (%d).\n", maxPrelekcji);
        return 0;
    }
 
    int sg, sm, kg, km;
 
    printf("Podaj czas rozpoczecia (format GG:MM): ");
    if (scanf("%d:%d", &sg, &sm) != 2 || !czyPoprawny(sg, sm)) {
        printf("Blad: nieprawidlowy format lub zakres czasu.\n");
        while (getchar() != '\n');
        return 0;
    }
 
    printf("Podaj czas zakonczenia (format GG:MM): ");
    if (scanf("%d:%d", &kg, &km) != 2 || !czyPoprawny(kg, km)) {
        printf("Blad: nieprawidlowy format lub zakres czasu.\n");
        while (getchar() != '\n');
        return 0;
    }
 
   
    if (naMinuty(kg, km) <= naMinuty(sg, sm)) {
        printf("Blad: czas zakonczenia musi byc pozniejszy niz czas rozpoczecia.\n");
        return 0;
    }
 
    
    tablica[*liczbaPrelekcji].start_godzina  = sg;
    tablica[*liczbaPrelekcji].start_minuta   = sm;
    tablica[*liczbaPrelekcji].koniec_godzina = kg;
    tablica[*liczbaPrelekcji].koniec_minuta  = km;
    (*liczbaPrelekcji)++;
 
    printf("Dodano prelekcje %02d:%02d - %02d:%02d. "
           "Lacznie prelekcji: %d.\n",
           sg, sm, kg, km, *liczbaPrelekcji);
    return 1;
}