#include <stdio.h>
#include <stdlib.h>

void main ()
{
    float harga, jumlah, total, hasil;
    system("cls");

    harga=1000.55;
    jumlah=30;
    total=harga * jumlah;
    hasil=total / jumlah;
    printf("harga total=%f\n\n",total);
    printf("hasil pembagian=%f\n\n",hasil); 
}