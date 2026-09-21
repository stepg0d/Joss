#include <stdio.h>
int main ()
{
    int a, b, c, d;
    int max1, max2, max_total;
    printf("Masukkan nilai a=");scanf("%d",&a);
    printf("Masukkan nilai b=");scanf("%d",&b);
    printf("Masukkan nilai c=");scanf("%d",&c);
    printf("Masukkan nilai d=");scanf("%d",&d);

    max1 = (a > b) ? a : b;
    printf("nilai a lebih");
    printf(" %s dari pada b",(a>b)?"besar":"kecil");
    max2 = (c > d) ? c : d;
    printf("\nnilai C lebih");
    printf(" %s dari pada d",(c<d)?"kecil":"besar");
    max_total = (max1 > max2) ? max1 : max2;
    printf("\njadi nilai maksimum adalah = %d", max_total  );
    
    
}