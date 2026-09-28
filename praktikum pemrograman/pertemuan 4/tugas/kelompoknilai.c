#include <stdio.h>
int main ()
{
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
}