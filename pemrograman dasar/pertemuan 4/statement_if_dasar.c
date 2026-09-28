#include <stdio.h>
int main()
{
    int bil,ab;
printf("Masukkan bilangan bulat: ");
scanf("%d", &bil);
ab = bil;
if(bil < 0) ab = -bil;
printf("Nilai absolut dari %d adalah %d\n", bil, ab);
}