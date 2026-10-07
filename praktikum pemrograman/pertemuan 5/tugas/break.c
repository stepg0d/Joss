#include <stdio.h>

int main(void) {
    int data[] = {10, 25, 30, 45, 50};
    int n = 5;
    int target, i;
    int ditemukan = 0;

    printf("Masukkan nilai target: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (data[i] == target) {
            ditemukan = 1;
            printf("Target ditemukan pada data ke-%d.\n", i + 1);
            break;
        }
    }

    if (ditemukan == 0) {
        printf("Target tidak ditemukan.\n");
    }

    return 0;
}