#include <stdio.h>
int main ()
{
    char karakter;
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