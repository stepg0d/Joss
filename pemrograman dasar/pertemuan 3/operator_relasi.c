#include <stdio.h>
int main ()
{
    int x, y;

    printf("masukkan nilai x = "); scanf("%d",&x);
    printf("masukkan nilai y = "); scanf("%d",&y);
    printf("\nnilai %d < %d adalah %d\n",x,y,x<y);
    printf("\nnilai %d > %d adalah %d\n",x,y,x>y);
    printf("\nnilai %d == %d adalah %d\n",x,y,x==y);
    printf("\nilai %d <= %d adalah %d\n", x,y,x<=y);
    printf("\nnilai %d >= %d adalah %d\n",x, y, x >= y);
    printf("\nnilai %d != %d adalah %d\n",x,y,x!=y);
}