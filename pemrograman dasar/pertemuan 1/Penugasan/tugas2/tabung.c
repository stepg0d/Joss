#include <stdio.h>
#define pi 3.14

void main()
{
    float r=7,t=15,La,Ls,L,V;
    La=pi*r*r;
    Ls=2*pi*r*t;
    L=2*pi*r*(r+t);
    V=pi*r*2*t;
    printf("Jari Jari=7\nTinggi=15\nphi=3.14\n\n");
    printf("L alas=pi*r*r\nL alas=pi*7*7=%f\n\n",La);
    printf("L selimut=2*pi*r*t\nL selimut=2*3.14*7*15=%f\n\n",Ls);
    printf("L permukaan=2*pi*r*(r+t)\nL permukaan=2*pi*7*(7+15)=%f\n\n",L);
    printf("Volume=pi*r*2*t\nVolume=pi*7*2*15=%f",V);
}
