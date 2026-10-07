#include <stdio.h>

int main(void) {
    int n, i;
    int faktorial = 1;

    printf("n   n!       Hasil\n");

    for (n = 1; n <= 10; n++) {
        faktorial = 1;

        for (i = 1; i <= n; i++) {
            faktorial *= i;
        }

        printf("%d   %d!       %d\n", n, n, faktorial);
    }

    return 0;
}