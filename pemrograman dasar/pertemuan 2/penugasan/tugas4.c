#include <stdio.h>
void main ()
{
    int j, m, k;
    printf("Masukkan jam dan menit (jj:mm)");
    scanf("%d:%d", &j, &m);
    k=j*60+m;
    printf("Konversi jam ke menit anda adalah=%d",k);
}