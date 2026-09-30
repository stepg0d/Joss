#include <stdio.h>
int main()
{
 int i, n, angka, jumlah, total;
 total=0;
 for (i=1; i<=5; i++) {
 printf("Masukkan nilai dasar triangular-%d: ",i);
 scanf("%d", &angka);
 jumlah=0;
 for (n=1; n<=angka; n++)
 jumlah=jumlah + n;
 total=total + jumlah;
 }
 printf("Jumlah %d triangular adalah %d\n",i-1,total);
}