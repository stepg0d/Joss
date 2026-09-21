#include <stdio.h>
#define pi 3.14
int main ()
{
    float k, l, r;
    printf("Masukkan jari-jari ligkaran :");
    scanf("%f", &r );
    k=2*pi*r;
    l=pi*r*r;
    printf("Keliling lingkaran adalah = %.2f\n",k);
    printf("Luas lingkaran dengan jari jari %.0f adalah = %.2f",r, l);
    
    return 0;
}