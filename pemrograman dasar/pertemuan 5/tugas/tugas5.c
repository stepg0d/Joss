#include <stdio.h> 

int main() {
    int max;
    int count_prima = 0;
    int total_sum = 0;
    
    printf("input nilai maksimum: ");
    scanf("%d", &max);
    printf("Output: ");
    for (int i = 2; i <= max; i++) {
        int is_prime = 1; 
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0; 
                break;
            }
        }
        if (is_prime) {
            if (count_prima > 0) {
                printf(", ");
            }
            printf("%d", i);
            count_prima++;    
            total_sum += i;  
        }
    }
    printf("\n");
    printf("Jumlah bilangan Prima = %d\n", count_prima);
    printf("Jumlah seluruh bilangan Prima = %d\n", total_sum);
    return 0;
}