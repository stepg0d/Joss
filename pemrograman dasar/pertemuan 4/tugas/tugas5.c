#include <stdio.h>

int main() {
    int pilihan;
    printf("=== MENU UTAMA PROGRAM INTEGRASI ===\n");
    printf("1. Cek Bilangan Genap / Ganjil\n");
    printf("2. Hitung Luas Persegi Panjang\n");
    printf("3. Cek Kelulusan Nilai\n");
    printf("4. Tampilkan Kata Menyapa\n");
    printf("Pilih menu (1-4): ");
    if (scanf("%d", &pilihan) != 1) {
        printf("Error: Input harus berupa angka!\n");
        return 1;
    }
    switch (pilihan) {
        case 1: {
            int angka;
            printf("\n--- Cek Bilangan Genap/Ganjil ---\n");
            printf("Masukkan sebuah angka: ");
            scanf("%d", &angka);

            if (angka % 2 == 0) {
                printf("Angka %d adalah bilangan GENAP.\n", angka);
            } else {
                printf("Angka %d adalah bilangan GANJIL.\n", angka);
            }
            break;
        }
        case 2: {
            float panjang, lebar, luas;
            printf("\n--- Hitung Luas Persegi Panjang ---\n");
            printf("Masukkan panjang: ");
            scanf("%f", &panjang);
            printf("Masukkan lebar: ");
            scanf("%f", &lebar);
            luas = panjang * lebar;
            printf("Luas persegi panjang = %.2f\n", luas);
            break;
        }
        case 3: {
            int nilai;
            printf("\n--- Cek Kelulusan Nilai ---\n");
            printf("Masukkan nilai ujian (0-100): ");
            scanf("%d", &nilai);
            if (nilai >= 85 && nilai <= 100) {
                printf("Predikat: A (Lulus dengan Sangat Baik)\n");
            } else if (nilai >= 70 && nilai < 85) {
                printf("Predikat: B (Lulus Baik)\n");
            } else if (nilai >= 55 && nilai < 70) {
                printf("Predikat: C (Cukup)\n");
            } else if (nilai >= 0 && nilai < 55) {
                printf("Predikat: D (Tidak Lulus)\n");
            } else {
                printf("Error: Nilai di luar jangkauan 0-100!\n");
            }
            break;
        }
        case 4: {
            printf("\n--- Pesan Menyapa ---\n");
            printf("Halo! Selamat belajar bahasa C dan sukses selalu!\n");
            break;
        }
        default:
            printf("\nError: Pilihan menu '%d' tidak tersedia! Silakan pilih angka 1-4.\n", pilihan);
            break;
    }
    return 0;
}