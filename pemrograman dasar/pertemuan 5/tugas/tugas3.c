#include <stdio.h>

int main() {
    int n;
    printf("Masukkan jumlah suku (n): ");
    scanf("%d", &n);
    printf("1) Pola 2^n: ");
    int pola1 = 1;
    for (int i = 1; i <= n; i++) {
        pola1 *= 2; 
        printf("%d", pola1);
        if (i < n) printf(", ");
    }
    printf("\n");
    printf("2) Pola n^2: ");
    for (int i = 1; i <= n; i++) {
        printf("%d", i * i);
        if (i < n) printf(", ");
    }
    printf("\n");
    printf("3) Pola n^3: ");
    for (int i = 1; i <= n; i++) {
        printf("%d", i * i * i);
        if (i < n) printf(", ");
    }
    printf("\n");
    return 0;
}