#include <stdio.h>

int main() {
    float nilai, jumlah = 0, rataRata;
    int banyak = 0;

    do {
        printf("Masukkan nilai (-1 untuk berhenti): ");
        scanf("%f", &nilai);

        if (nilai != -1) {
            jumlah = jumlah + nilai;
            banyak++;
        }

    } while (nilai != -1);

    if (banyak > 0) {
        rataRata = jumlah / banyak;
        printf("Rata-rata = %.2f\n", rataRata);
    } else {
        printf("Tidak ada nilai yang dimasukkan.\n");
    }

    return 0;
}