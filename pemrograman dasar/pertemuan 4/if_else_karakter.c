#include <stdio.h>
int main ()
{
    char ch;
    printf("masukkan karakter = ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    printf("%c merupakan huruf kecil",ch);
    else{
    printf("%c bukan huruf kecil",ch);
    }
}