#include <stdio.h>
int main ()
{
    int nt, np;
    printf("Masukkan nilai teori = ");scanf("%d",&nt);
    printf("Masukkan nilai praktek = ");scanf("%d",&np);
    printf("\nStatus : %s\n", (nt >= 60 && np >= 60) ? "LULUS" : "TIDAK LULUS");
}