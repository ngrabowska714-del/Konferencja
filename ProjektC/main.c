#include <stdio.h>
#include <stdlib.h>
#include "konferencja.h"
#include "pliki.h"

#define MAX_PRELEKCJI 100

int main() {
    int wybor;
    Prelekcja wszystkiePrelekcje[MAX_PRELEKCJI];
    int aktualnaLiczba = 0;

    const char* nazwaPliku = "prelekcje.txt";

    do {
        printf("\nKONFERENCJA\n");
        printf("Aktualna liczba prelekcji w pamieci: %d\n", aktualnaLiczba);
        printf("1. Dodaj prelekcje recznie\n");
        printf("2. Wczytaj prelekcje z pliku\n");
        printf("3. Oblicz wymagana liczbe sal\n");
        printf("4. Zapisz prelekcje do pliku\n");
        printf("5. Wyjdz z programu\n");
        printf("Wybierz opcje: ");

        scanf("%d", &wybor);

        switch (wybor) {
        case 1:
            printf("\nOpcja: Dodawanie prelekcji\n");
            dodajPrelekcje(wszystkiePrelekcje, &aktualnaLiczba, MAX_PRELEKCJI);
            break;
        case 2:
            printf("\nOpcja: Wczytywanie z pliku\n");
            wczytajZPliku(nazwaPliku, wszystkiePrelekcje, &aktualnaLiczba, MAX_PRELEKCJI);
            break;
        case 3:
            printf("\nOpcja: Obliczanie sal\n");
            obliczSale(wszystkiePrelekcje, aktualnaLiczba);
            break;
        case 4:
            printf("\nOpcja: Zapis do pliku\n");
            zapiszDoPliku(nazwaPliku, wszystkiePrelekcje, aktualnaLiczba);
            break;
        case 5:
            printf("\nZamykanie programu...\n");
            break;
        default:
            printf("\nNieprawidlowy wybor! Wybierz liczbe od 1 do 5.\n");
        }
    } while (wybor != 5);

    return 0;
}
