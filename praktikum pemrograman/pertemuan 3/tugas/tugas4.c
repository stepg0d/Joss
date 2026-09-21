#include <stdio.h>
int main(void)
{
    int nilai;

    printf("masukkan nilai = ");
    scanf("%d", &nilai);

    if (nilai >= 85 && nilai <= 100) {
        printf("Grade A\n");
    } else if (nilai >= 75 && nilai <= 84 ){
        printf("Grade B\n");
    } else if (nilai >= 65 && nilai <= 74 ){
        printf("Grade C\n");
    } else if (nilai >= 50 && nilai <= 64){
        printf("Grade D\n");
    } else if (nilai >=0 && nilai <= 49){
        printf("Grade E\n");
    }
}