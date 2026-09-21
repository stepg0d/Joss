
#include <stdio.h>
int main () 
{
    int a, b, c, d, hasil_a, hasil_b, hasil_c, hasil_d, hasil_e;

    printf("Masukkan nilai a=");scanf("%d",&a);
    printf("Masukkan nilai b=");scanf("%d",&b);
    printf("Masukkan nilai c=");scanf("%d",&c);
    printf("Masukkan nilai d=");scanf("%d",&d);

    hasil_a = (a > b) && (c < d) || (a == b);
    hasil_b = (a == b) || (c == d) && (a < b);
    hasil_c = (a <= c) && (b >= d) || (a == d);
    hasil_d = (a >= d) || (b <= c) && (c == d);
    hasil_e = (a != b) || (c > d) || (a != d);

    printf("\n(a > b) && (c < d) || (a == b)=%d",hasil_a);
    printf("\n(a == b) || (c == d) && (a < b)=%d",hasil_b);
    printf("\n(a <= c) && (b >= d) || (a == d)=%d",hasil_c);
    printf("\n(a >= d) || (b <= c) && (c == d)=%d",hasil_d);
    printf("\n(a != b) || (c > d) || (a != d)=%d",hasil_e);

    return 0;
}