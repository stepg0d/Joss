#include <stdio.h>
int main ()
{
    int cpu = 4530000, ram = 2796000, motherboard = 4940000;
    int diskoncpu, diskonram, diskonmotherboard,harga_cpu,harga_ram,harga_motherboard, total;

    diskoncpu = cpu*15/100;
    diskonram  = ram*8/100;
    diskonmotherboard = motherboard*10/100;

    harga_cpu=cpu-diskoncpu;
    harga_ram=ram-diskonram;
    harga_motherboard=motherboard-diskonmotherboard;

    total=harga_cpu+harga_motherboard+harga_ram;

    printf ("Besar diskon CPU=%i\n",diskoncpu);
    printf ("Besar diskon RAM=%i\n",diskonram);
    printf ("Besar diskon Motherboard=%i\n\n",diskonmotherboard);

    printf ("Harga CPU setelah diskon=%i\n",harga_cpu);
    printf ("Harga RAM setelah diskon=%i\n",harga_ram);
    printf ("Harga Motherboard setelah diskon=%i\n\n",harga_motherboard);

    printf ("Total harga yang harus dibayar=%i",total);
}