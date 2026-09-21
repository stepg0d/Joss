    #include <stdio.h>
    int main ()
    {
        int angka;
        printf("Masukkan bilangan integer = ");
        scanf("%d",&angka);

        if (angka % 2 ==0){
            printf("%d adalah bilangan genap",angka);
        } else {
            printf("%d adalah bilangan ganjil",angka);
        }
        return 0;
    }