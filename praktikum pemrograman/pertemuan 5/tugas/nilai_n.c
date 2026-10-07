#include <stdio.h>

int main(void) {
    int n, i;
    float nilai, jumlah = 0, rata_rata;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Masukkan nilai ke-%d: ", i);
        scanf("%f", &nilai);
        jumlah += nilai;
    }

    rata_rata = jumlah / n;

    printf("Jumlah = %.2f\n", jumlah);
    printf("Rata-rata = %.2f\n", rata_rata);

    return 0;
}