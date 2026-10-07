#include <stdio.h>

int main() {
    int i;

    printf("Data angka 1 sampai 10:\n");

    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;
        }

        printf("%d ", i);
    }

    return 0;
}