#include <stdio.h>
void main()
{
 int a=7, b=9, c=5, d=3;
 int m, n, hasil;
 m=(a>b) ? a: b;
 n=(c<d) ? d: c;
 hasil=(m>n) ? m:n;
 printf("m=%d",m);
 printf("\nn=%d",n);
 printf("\nhasil=%d",hasil);
}