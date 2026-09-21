#include <stdio.h>
int main ()
{
    int x, y;

    printf("Masukkan nilai x = "); scanf("%d",&x);
    printf("Masukkan nilai y = "); scanf("%d",&y);
    printf("\nNilai dari %d & %d = %d",x, y, x & y);
    printf("\nNilai dari %d | %d = %d",x, y, x | y);
    printf("\nNilai dari %d && %d = %d",x, y, x && y);
    printf("\nNilai dari %d || %d = %d",x, y, x || y);
    printf("\nNilai dari !0 = %d", !0);
    printf("\nNilai dari !1 = %d", !1);
    printf("\nNilai dari !%d = %d",x, !x);
    printf("\nNilai dari !%d = %d",y, !y);
}