#include <stdio.h>
#include <conio.h>

void hoanvi(int &a , int &b)
{
     a = a + b;
     b = a - b;
     a = a - b;
}
int main()
{
    int a, b, c;

    printf("Nhap a: ");
    scanf("%d", &a);

    printf("Nhap b: ");
    scanf("%d", &b);

    printf("Nhap c: ");
    scanf("%d", &c);

    if( a > b )
    {
       hoanvi(a,b);
    }
    if( a > c)
    {
        hoanvi(a,c);
    }
    if( b > c)
    {
        hoanvi(b,c);
    }

    printf("Day cua ban la %d - %d - %d", a, b, c);
    _getch();
}
