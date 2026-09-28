#include <stdio.h>

int main() {
    int bilangan;
    char operator;
    int accumulator = 0;
    printf("Mulai perhitungan\n");
    while (1) {
        if (scanf("%d %c", &bilangan, &operator) != 2) {
            break;
        }  switch (operator) {
            case 's':
            case 'S':
                accumulator = bilangan;
                printf("= %d\n", accumulator);
                break;
            case '+':
                accumulator += bilangan;
                printf("= %d\n", accumulator);
                break;
            case '-':
                accumulator -= bilangan;
                printf("= %d\n", accumulator);
                break;
            case '*':
                accumulator *= bilangan;
                printf("= %d\n", accumulator);
                break;
            case '/':
                if (bilangan == 0) {
                    printf("Error: Pembagian dengan nol tidak diperbolehkan!\n");
                } else {
                    accumulator /= bilangan;
                    printf("= %d\n", accumulator);
                } break;
            case '%':
                if (bilangan == 0) {
                    printf("Error: Modulo dengan nol tidak diperbolehkan!\n");
                } else {
                    accumulator %= bilangan;
                    printf("= %d\n", accumulator);
                } break;
            case '&':
                accumulator &= bilangan;
                printf("= %d\n", accumulator);
                break;
            case '|':
                accumulator |= bilangan;
                printf("= %d\n", accumulator);
                break;
            case 'e':
            case 'E':
                printf("Akhir perhitungan\n");
                return 0;
            default:
                printf("Error: Operator tidak valid!\n");
                break;
        }
    }
    return 0;
}