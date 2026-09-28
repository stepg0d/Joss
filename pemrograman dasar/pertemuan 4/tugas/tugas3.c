#include <stdio.h>

int main() {
    int tahun;

    printf("Masukkan tahun (1900-2400): ");
    if (scanf("%d", &tahun) != 1) {
        printf("Input tidak valid!\n");
        return 1;
    }

    if (tahun < 1900 || tahun > 2400) {
        printf("Tahun diluar jangkauan! Masukkan tahun antara 1900 hingga 2400.\n");
        return 1;
    }

    if ((tahun % 400 == 0) || (tahun % 4 == 0 && tahun % 100 != 0)) {
        printf("Tahun %d adalah Tahun Kabisat.\n", tahun);
    } else {
        printf("Tahun %d BUKAN Tahun Kabisat.\n", tahun);
    }

    return 0;
}