#include <stdio.h>
int main ()
{
    int a=20 , b=5, penjumlahan, pengurangan, perkalian, pembagian, sisa_pembagian;
    penjumlahan= a+b;
    pengurangan = a-b;
    perkalian= a*b;
    pembagian= a/b;
    sisa_pembagian= a%b;
    printf("penjumlahan=%i\n",penjumlahan);
    printf("pengurangan=%i\n",pengurangan);
    printf("perkalian=%i\n",perkalian);
    printf("pembagian=%i\n",pembagian);
    printf("sisa pembagian=%i",sisa_pembagian);
}