#include <stdio.h>
#define pi 3.14

void main()
{
   float r=7,L,V;
   L = 4*pi*r*r;
   V = 4*pi*r*r*r/3;
   printf("Jari-jari = 14\nPi = 3.14\n\n");
   printf("Luas Permukaan\nL=4*pi*r*r\n");
   printf("L=4*3.14*7*7=%f\n\n",L);
   printf("Volume\nV=4/3*pi*r*r*r\n");
   printf("V=4/3*3.14*7*7*7=%f\n\n",V);

}
