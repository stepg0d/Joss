#include <stdio.h>
void main()
{
    int f, c;
    printf("Masukkan derajat fahrenheit :");
    scanf("%d",&f);
    c=(f-32)*5/9;
    printf("%d derajat fahrenheit adalah = %d derajat celcius", f, c);
}