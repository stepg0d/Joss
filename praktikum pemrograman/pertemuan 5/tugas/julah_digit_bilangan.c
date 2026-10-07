#include <stdio.h>

int main(void) {
    int angka, digit, jumlah = 0;

    printf("Masukkan bilangan: ");
    scanf("%d", &angka);

    while (angka > 0) {
        digit = angka % 10;
        jumlah += digit;
        angka = angka / 10;
    }

    printf("Jumlah digit = %d\n", jumlah);

    return 0;
}