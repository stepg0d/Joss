#include <stdio.h>

int main() {
    int baris, kolom, hasil;
    printf("masukkan baris = ");
    scanf("%d",&baris);
    printf("masukkan kolom = ");
    scanf("%d",&kolom);
    printf("\n");

    for (int i = 1; i <= baris; i++) {
        for (int j = 1; j <= kolom; j++) {
            hasil = 1;
            for (int k = 1; k <= i; k++) {
                hasil *= j;
            }
            printf("%9d", hasil);
        }
        printf("\n");
    }
    return 0;
}