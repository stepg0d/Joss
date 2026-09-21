#include <stdio.h>
#define pi 3.14
int main ()
{
    int r = 7, t = 10, v, lp;
    v = pi*r*r*t;
    lp = 2*pi*r*(r+t);
    printf("Volume tabung adalah = %d\n", v);
    printf("Luas permukaan tabung adalah = %d\n", lp);    
}