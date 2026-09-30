#include <stdio.h>
#include <math.h>

int main() {
    double n, akar, baru;
    int iterasi = 0;
    printf("Masukkan bilangan: ");
    scanf("%lf", &n);
    if (n < 0) {
        printf("Bilangan tidak boleh negatif.\n");
        return 1;
    }
    if (n == 0) {
        printf("Akar = 0\n");
        return 0;
    }
    akar = n / 2; 
    while (1) {
        baru = (akar + n / akar) / 2;
        iterasi++;
        printf("Iterasi %d: Akar = (%.4f + %.4f/%.4f)/2 = %.4f\n",
               iterasi, akar, n, akar, baru);
        if (round(baru * 10000) == round(akar * 10000)) {
            akar = baru;
            break;
        }
        akar = baru;
    }
    double bulat = round(akar);
    if (bulat * bulat == n) {
        printf("\nHasil akhir: %.0f  (bilangan cantik, kuadrat sempurna)\n", bulat);
    } else {
        printf("\nHasil akhir: %.4f\n", akar);
    }
    return 0;
}