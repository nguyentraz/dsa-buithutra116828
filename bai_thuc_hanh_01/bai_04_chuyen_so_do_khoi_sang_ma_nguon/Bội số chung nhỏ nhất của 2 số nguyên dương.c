#include <stdio.h>
int main()
{
    int a,b;
    int tich, BCNN;
    printf("Nhap hai so nguyen duong a va b : ");
    scanf("%d %d", &a, &b);
    tich = a * b;
    while(a!=b)
    {
        if(a>b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    BCNN = tich / a;
    printf("Boi so chung nho nhat cua %d va %d la: %d", a, b, BCNN);
    return 0;
}