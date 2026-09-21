#include <stdio.h>
#define pi 3.14
int main ()
{
    float jari_jari = 10;
    float luas, keliling;
    luas = pi*jari_jari*jari_jari;
    keliling = 2*pi*jari_jari;
    printf("jari jari =%.2f\n",jari_jari);
    printf("Luas =%.2f\n", luas);
    printf("keliling=%.2f\n",keliling);
    return 0;
}