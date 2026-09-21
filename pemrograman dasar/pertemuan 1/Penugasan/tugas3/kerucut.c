#include <stdio.h>
#define pi 3.14

void main()
{
    float r=7,t=24,s=25,La,Ls,L,V;
    La=pi*r*r;
    Ls=pi*r*s;
    L=pi*r*(r+s);
    V=pi*r*r*t/3;
    printf("Jari-Jari=7\nTinggi=24\nGaris Pelukis=25\nPi=3.14\n\n");
    printf("L alas=pi*r*s\nL alas=3.14*7*24=%f\n\n",La);
    printf("L selimut=pi*r*s\nL selimut=3.14*7*25=%f\n\n",Ls);
    printf("L permukaan=pi*r*(r+s)\nL permukaan=3.14*7*(7+25)=%f\n\n",L);
    printf("Volume=1/3*pi*r*r*t\nVolume=1/3*3.14*7*7*24=%f",V);
}
