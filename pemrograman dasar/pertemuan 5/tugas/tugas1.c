#include <stdio.h>

int main() {
    int baris, kolom;

    printf("masukkan baris =");
    scanf("%d",&baris);
    printf("masukkan kolom = ");
    scanf("%d",&kolom);
    printf("\n");

    for (int i = 1; i < baris; i++) {
        for (int j = 1; j <= kolom; j++) {
            printf("%d\t", j);
        }
        printf("\n");
    }

    return 0;
}