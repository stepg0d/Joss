#include <stdio.h>

int main() {
    int n, i, jumlah = 0;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        jumlah = jumlah + i;
    }

    printf("Jumlah triangular = %d\n", jumlah);

    return 0;
}