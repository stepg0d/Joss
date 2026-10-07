#include <stdio.h>

int main(void) {
    float celsius, fahrenheit, reamur, kelvin;

    printf("Masukkan suhu Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    reamur = celsius * 4 / 5;
    kelvin = celsius + 273.15;

    printf("Celsius    : %.2f C\n", celsius);
    printf("Fahrenheit : %.2f F\n", fahrenheit);
    printf("Reamur     : %.2f R\n", reamur);
    printf("Kelvin     : %.2f K\n", kelvin);

    return 0;
}