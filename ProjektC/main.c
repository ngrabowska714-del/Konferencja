#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "konferencja.h"
#include "pliki.h"

int main() {
    int wybor;

    do {
        // Wyœwietlanie opcji
        printf("\nPROJEKT KONFERENCJA\n");
        printf("1. Dodaj prelekcje recznie\n");
        printf("2. Wczytaj prelekcje z pliku\n");
        printf("3. Oblicz wymagana liczbe sal\n");
        printf("4. Zapisz prelekcje do pliku\n");
        printf("5. Wyjdz z programu\n");
        printf("Wybierz opcje: ");
        scanf("%d", &wybor);

        switch (wybor) {
        case 1:
            printf("\n Opcja: Dodawanie prelekcji \n");
            // dodajPrelekcje(); <- funkcja Igora
            break;
        case 2:
            printf("\n Opcja: Wczytywanie z pliku \n");
            break;
        case 3:
            printf("\n Opcja: Obliczanie sal \n");
            // obliczSale(); <- funkcja Igora
            break;
        case 4:
            printf("\n Opcja: Zapis do pliku \n");
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
