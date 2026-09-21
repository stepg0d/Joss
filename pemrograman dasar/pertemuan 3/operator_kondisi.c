#include <stdio.h>
int main()
{
 int a, b, c, d;
 printf("Masukkan nilai a = "); scanf("%d",&a);
 printf("Masukkan nilai b = "); scanf("%d",&b);
 printf("Masukkan nilai c = "); scanf("%d",&c);
 printf("Masukkan nilai d = "); scanf("%d",&d);
 printf("\nNilai a dibanding b adalah a lebih");
 printf(" %s dari pada b",(a>b)?"BESAR":"kecil");
 printf("\nNilai c dibanding d adalah c lebih");
 printf(" %s dari pada d\n",(c<d)?"kecil":"BESAR");
 getch();
}