#include <stdio.h>
# include <conio.h>
# include <graphics.h>

void drawCircle(int xc, int yc, int x, int y)
{
    printf("(%d, %d) \n",xc+x, yc+y);
    printf("(%d, %d) \n",xc-x, yc+y);
    printf("(%d, %d) \n",xc+x, yc-y);
    printf("(%d, %d) \n",xc-x, yc-y);
    printf("(%d, %d) \n",xc+y, yc+x);
    printf("(%d, %d) \n",xc-y, yc+x);
    printf("(%d, %d) \n",xc+y, yc-x);
    printf("(%d, %d) \n",xc-y, yc-x);

        putpixel(xc+x,yc-y,WHITE);
        putpixel(xc-x,yc-y,WHITE);
        putpixel(xc+x,yc+y,WHITE);
        putpixel(xc-x,yc+y,WHITE);
        putpixel(xc+y,yc-x,WHITE);
        putpixel(xc-y,yc-x,WHITE);
        putpixel(xc+y,yc+x,WHITE);
        putpixel(xc-y,yc+x,WHITE);

}

void circleMid(int xc, int yc, int r)
{
    int x = 0, y = r;
    int d = 3 - 2 * r;
    drawCircle(xc, yc, x, y);
    while (y >= x)
    {

        x++;

        if (d > 0)
        {
            y--;
            d = d + 4 * (x - y) + 10;
        }
        else
            d = d + 4 * x + 6;
        drawCircle(xc, yc, x, y);

    }
    getch();
    closegraph();
}


int main()
{
    int x,y,r, gd=DETECT,gm;
    initgraph(&gd,&gm,"C:/TURBOC3/BGI");
    printf("\n\n\tEnter the co-ordinates of center : ");
    scanf("%d %d",&x,&y);
    printf("\n\n\tEnter the radius: ");
    scanf("%d",&r);

    circleMid(x, y, r);
    return 0;
}
