#include <stdio.h>
int main ()
{
    int pembilang, penyebut, sisa;
    printf("masukkan pembilang = ");
    scanf("%d",&pembilang);
    printf("masukkan penyebut = ");
    scanf("%d",&penyebut);
    if (penyebut == 0)
    printf("penyebut tidak boleh 0");
    else {
        sisa = pembilang % penyebut;
        if (sisa)
        printf("%d tidak habis dibagi %d\n",pembilang, penyebut);
        else 
        printf ("%d habis dibagi %d", pembilang, penyebut);
    }
}