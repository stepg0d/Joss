#include <stdio.h>
 int main (void)
 {
    int bil1, bil2;

    printf("masukkan angka 1 = ");
    scanf("%d",&bil1);

    printf("masukkan angka 2 = ");
    scanf("%d",&bil2);

    if (bil1 > bil2) {
        printf("angka yang lebih besar adalah angka %d\n",bil1);
    } else if (bil2> bil1) {
        printf("angka yang lebih besar adalah angka %d\n",bil2);
    } else {
        printf("kedua bilangan bernilai sama (%d)",bil1);
    }
 }