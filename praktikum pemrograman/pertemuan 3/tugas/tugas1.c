#include <stdio.h>
int main ()
{
    int angka;
    printf("Masukkan angka =");
    scanf("%d",&angka);

    if  (angka > 0) {
    printf("angka anda positif\n");}
    else if (angka < 0){ 
    printf("angka anda negatif\n");}
    else {
    printf("angka anda 0\n");}
    return 0;
}   