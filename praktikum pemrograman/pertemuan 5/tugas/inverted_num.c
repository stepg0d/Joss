#include <stdio.h>

int main(void) {
    int angka, balik = 0, digit;

    printf("Masukkan angka: ");
    scanf("%d", &angka);

    while (angka > 0) {
        digit = angka % 10;
        balik = balik * 10 + digit;
        angka = angka / 10;
    }

    printf("Hasil pembalikan = %d\n", balik);

    return 0;
}