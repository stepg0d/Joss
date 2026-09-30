#include <stdio.h>
int main()
{
 int n, jumlah;
 printf("TABEL JUMLAH TRIANGULAR\n\n");
 printf(" n jumlah\n");
 printf("--------------\n");

 jumlah=0;
 for (n=1; n<=10; ++n) {
 jumlah=jumlah + n;
 printf(" %d %d\n", n, jumlah);
 }
}