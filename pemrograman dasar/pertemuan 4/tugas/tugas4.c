#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float d, x1, x2, riil, imajiner;
    printf("Masukkan koefisien a, b, dan c: ");
    if (scanf("%f %f %f", &a, &b, &c) != 3) {
        printf("Input tidak valid!\n");
        return 1;
    }
    if (a == 0) {
        printf("Nilai 'a' tidak boleh nol pada persamaan kuadrat!\n");
        return 1;
    }
    d = (b * b) - (4 * a * c);
    printf("Nilai Determinan (D) = %.2f\n", d);
    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("Akar-akarnya berbeda:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } 
    else if (d == 0) {
        x1 = -b / (2 * a);
        printf("Akar-akarnya kembar:\n");
        printf("x1 = x2 = %.2f\n", x1);
    } 
    else {
        riil = -b / (2 * a);
        imajiner = sqrt(-d) / (2 * a);
        printf("Akar-akarnya imajiner berlainan:\n");
        printf("x1 = %.2f + %.2fj\n", riil, imajiner);
        printf("x2 = %.2f - %.2fj\n", riil, imajiner);
    }
    return 0;
} 