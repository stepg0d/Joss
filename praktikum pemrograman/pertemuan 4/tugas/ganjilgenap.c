#include <stdio.h>
int main ()
{
    int angka;
    char karakter;

    printf("masukkan bilangan =");
    scanf("%d", &angka);
    if (angka % 2 == 0){
        printf("bilangan anda (%d) adalah bilangan genap\n\n",angka);
    } else {
        printf("bilangan anda (%d) adalah bilangan ganjil\n\n",angka);
    }
}