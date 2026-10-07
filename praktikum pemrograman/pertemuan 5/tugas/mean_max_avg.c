#include <stdio.h>

int main(void) {
    int n, i;
    float nilai, minimum, maksimum, jumlah = 0, rata_rata;
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("Masukkan nilai ke-%d: ", i);
        scanf("%f", &nilai);

        if (i == 1) {
            minimum = nilai;
            maksimum = nilai;
        } else {
            if (nilai < minimum)
                minimum = nilai;

            if (nilai > maksimum)
                maksimum = nilai;
        }
        jumlah += nilai;
    }
    rata_rata = jumlah / n;
    printf("\nNilai Minimum = %.2f\n", minimum);
    printf("Nilai Maksimum = %.2f\n", maksimum);
    printf("Rata-rata = %.2f\n", rata_rata);
    return 0;
}