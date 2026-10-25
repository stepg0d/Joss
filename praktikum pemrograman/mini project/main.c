#include <stdio.h>
#include <string.h>

int main(void)
{
    char nama1[20], nama2[20], nama3[20], nama4[20], nama5[20];
    char nama6[20], nama7[20], nama8[20], nama9[20], nama10[20];
    int antrean = 0, dilayani = 0, tambah, pilihan, proses, daftar;
    do
    {
        printf("\nSIMULASI ANTRIAN PELAYANAN\n");
        printf("1. Pendaftaran Pelanggan\n");
        printf("2. Proses Antrean\n");
        printf("3. Statistik\n");
        printf("0. Keluar\n");
        do
        {
            printf("Pilihan: ");
            if (scanf("%d", &pilihan) != 1 || (pilihan != 0 && pilihan != 1 && pilihan != 2 && pilihan != 3))
            {
                printf("Input tidak valid!\n");
                while (getchar() != '\n');
                pilihan = -1;
            }
        } while (pilihan != 0 && pilihan != 1 && pilihan != 2 && pilihan != 3);
        if (pilihan == 1)
        {
            do
            {
                printf("\nDaftarkan pelanggan? (1 = Ya, 0 = Tidak): ");
                if (scanf("%d", &daftar) != 1 || (daftar != 0 && daftar != 1))
                {
                    printf("Input tidak valid!");
                    while (getchar() != '\n')
                        ;
                    daftar = -1;
                }
            } while (daftar != 0 && daftar != 1);
            if (daftar == 0)
            {
                break;
            }
            do
            {
                if (antrean == 10)
                {
                    printf("Antrean penuh!\n"); break;
                }
                printf("Masukkan nama pelanggan: ");
                switch (antrean)
                {
                case 0: scanf("%s", nama1); break;
                case 1: scanf("%s", nama2); break;
                case 2: scanf("%s", nama3); break;
                case 3: scanf("%s", nama4); break;
                case 4: scanf("%s", nama5); break;
                case 5: scanf("%s", nama6); break;
                case 6: scanf("%s", nama7); break;
                case 7: scanf("%s", nama8); break;
                case 8: scanf("%s", nama9); break;
                case 9: scanf("%s", nama10); break;
                }
                antrean++;
                printf("Antrean ke-%d\n", antrean);
                if (antrean == 10)
                {
                    printf("Antrean penuh!\n"); break;
                }
                do
                {
                    printf("Tambah antrean? (1 = Ya, 0 = Tidak): ");
                    if (scanf("%d", &tambah) != 1 || (tambah != 0 && tambah != 1))
                    {
                        printf("Input tidak valid!\n");
                        while (getchar() != '\n')
                            ;
                        tambah = -1;
                    }
                } while (tambah != 0 && tambah != 1);
            } while (tambah == 1);
            printf("\nDaftar antrean sukses ditambahkan\n");
        }
        else if (pilihan == 2)
        {
            int layani = 0;
            while (antrean > 0)
            {
                printf("\nDAFTAR ANTREAN:\n");
                if (antrean >= 1)
                    printf("1. %s\n", nama1);
                if (antrean >= 2)
                    printf("2. %s\n", nama2);
                if (antrean >= 3)
                    printf("3. %s\n", nama3);
                if (antrean >= 4)
                    printf("4. %s\n", nama4);
                if (antrean >= 5)
                    printf("5. %s\n", nama5);
                if (antrean >= 6)
                    printf("6. %s\n", nama6);
                if (antrean >= 7)
                    printf("7. %s\n", nama7);
                if (antrean >= 8)
                    printf("8. %s\n", nama8);
                if (antrean >= 9)
                    printf("9. %s\n", nama9);
                if (antrean >= 10)
                    printf("10. %s\n", nama10);
                printf("\nAntrean berikutnya: %s\n", nama1);
                do
                {
                    printf("\nProses antrean? (1 = Ya, 0 = Tidak): ");
                    if (scanf("%d", &proses) != 1 || (proses != 0 && proses != 1))
                    {
                        printf("Input tidak valid!");
                        while (getchar() != '\n');
                        proses = -1;
                    }
                } while (proses != 0 && proses != 1);
                if (proses == 0)
                {
                    break;}
                dilayani++;
                layani++;
                printf("Melayani: %s\n", nama1);
                strcpy(nama1, nama2);
                strcpy(nama2, nama3);
                strcpy(nama3, nama4);
                strcpy(nama4, nama5);
                strcpy(nama5, nama6);
                strcpy(nama6, nama7);
                strcpy(nama7, nama8);
                strcpy(nama8, nama9);
                strcpy(nama9, nama10); antrean--;
                printf("Antrean berhasil diproses!\n");
                printf("\nJumlah pelanggan yang telah dilayani: %d\n", layani);
            }
            if (antrean == 0)
            {
                printf("Semua antrean selesai!\n");
            }
        }
        else if (pilihan == 3)
        {
            printf("\nDAFTAR ANTREAN AKTIF\n");
            if (antrean == 0)
                printf("Antrean kosong.\n");
            if (antrean >= 1)
                printf("1. %s\n", nama1);
            if (antrean >= 2)
                printf("2. %s\n", nama2);
            if (antrean >= 3)
                printf("3. %s\n", nama3);
            if (antrean >= 4)
                printf("4. %s\n", nama4);
            if (antrean >= 5)
                printf("5. %s\n", nama5);
            if (antrean >= 6)
                printf("6. %s\n", nama6);
            if (antrean >= 7)
                printf("7. %s\n", nama7);
            if (antrean >= 8)
                printf("8. %s\n", nama8);
            if (antrean >= 9)
                printf("9. %s\n", nama9);
            if (antrean >= 10)
                printf("10. %s\n", nama10);
            if (antrean == 0)
            {
                printf("\nPELANGGAN YANG SEDANG DILAYANI: -");
            }
            else
            {
                printf("\nPELANGGAN YANG SEDANG DILAYANI: %s\n", nama1);
            }
            printf("\nJUMLAH PELANGGAN YANG TELAH DILAYANI: %d\n", dilayani);
        }
        else if (pilihan != 0)
        {
            printf("Pilihan tidak tersedia.\n");
        }
    } while (pilihan != 0);
    return 0;
}