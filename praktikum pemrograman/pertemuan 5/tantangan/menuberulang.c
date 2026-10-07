#include <stdio.h>

int main() {
    int pilihan;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Pilihan Satu\n");
        printf("2. Pilihan Dua\n");
        printf("3. Pilihan Tiga\n");
        printf("0. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        if (pilihan == 1) {
            printf("Anda memilih Pilihan Satu\n");
        } else if (pilihan == 2) {
            printf("Anda memilih Pilihan Dua\n");
        } else if (pilihan == 3) {
            printf("Anda memilih Pilihan Tiga\n");
        } else if (pilihan == 0) {
            printf("Program selesai.\n");
        } else {
            printf("Pilihan tidak tersedia.\n");
        }

    } while (pilihan != 0);

    return 0;
}