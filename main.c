#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <math.h>

void fractal(int x, int y, int r, int n)
{
    if (n!=0)
    {
        circle(x, y, r);
        fractal(x+r/2, y, r/2, n-1);
        fractal(x-r/2, y, r/2, n-1);
        fractal(x, y+r/2, r/2, n-1);
        fractal(x, y-r/2, r/2, n-1);
    }
}

int main()
{
    int gd = DETECT;
    int gm;
    int n;
    printf("vvedite n\n");
    scanf("%d", &n);
    initgraph(&gd, &gm,"");
    setcolor(GREEN);
    fractal(256, 256, 256, n);
    readkey();
    closegraph();
    return 0;
}
