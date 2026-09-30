#include <stdio.h>
int main()
{
    int n , jumlah = 0;
    for (n=1;n <= 99;n++)
    jumlah += n;
    
    printf("jumlah 99 triangular adalah %d\n",jumlah);
    return 0;
}