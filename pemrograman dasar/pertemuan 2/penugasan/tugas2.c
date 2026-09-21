#include <stdio.h>
int main ()
{
    float x, y, z;
    printf("Formula 1:\n");
    printf("Masukkan nilai x :");
    scanf("%f", &x );
    y=3*x*x+6*x+9;
    z=(2*y*y+5*x*x)/(9*y);
    printf("Didapatkan nilai y = %.2f dan nilai z= %f",y,z);

    return 0;
}