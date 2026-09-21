#include <stdio.h>
int main()
{
 int x, y, n, m;
 printf("Masukkan nilai x = "); scanf("%d",&x);
 printf("Masukkan nilai y = "); scanf("%d",&y);
 n=(x < 10) && (y > 10);
 m=(x > 30) || (y < 70);
 printf("\nNilai dari %d < 10 && %d > 10 = %d",x,y,n);
 printf("\nNilai dari %d > 30 || %d < 70 = %d\n",x,y,m);
}