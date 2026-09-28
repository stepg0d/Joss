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

    while (getchar() !='\n');

    printf("masukkan satu karakter =");
    scanf("%c",&karakter);
    printf("hasil karakter anda (%c) termasuk dalam kelompok ", karakter);

    if(karakter >= 'a' && karakter <= 'z'){
        printf("huruf kecil\n");
    } else if (karakter >='A' && karakter <= 'Z'){
        printf("Huruf besar\n");
    } else if (karakter >= '0' && karakter <= '9'){
        printf("angka");
    } else {
        printf("karakter khusus");
    }
}