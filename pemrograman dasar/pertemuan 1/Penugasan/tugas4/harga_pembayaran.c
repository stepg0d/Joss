#include <stdio.h>
void main ()
{
    float hnormal_cpu, hnormal_ram, hnormal_mainboard;
    float harga_cpu, harga_ram, harga_mainboard;

    hnormal_cpu=4530000;
    hnormal_ram=2795000;
    hnormal_mainboard=4940000;

    harga_cpu=hnormal_cpu-hnormal_cpu*0.15;
    harga_ram=hnormal_ram-hnormal_ram*0.08;
    harga_mainboard=hnormal_mainboard-hnormal_mainboard*0.10;

    printf("No.\tNama Barang\t\t\t\tHarga Normal\tDiskon\t\t\tHarga Diskon\n");
    printf("==============================================================================\n");
    printf("1.\tCPU Intel Core Ultra 7\t%f\t15%%\t\t\t\t%f\n",hnormal_cpu,harga_cpu);
    printf("2.\tRAM DDR5 16GB\t\t\t%f\t8%%\t\t\t\t%f\n",hnormal_ram,harga_ram);
    printf("3.\tMainboard  Asus\t\t\t%f\t10%%\t\t\t\t%f\n",hnormal_mainboard,harga_mainboard);

}
