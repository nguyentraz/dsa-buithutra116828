#include <stdio.h>
int main()
{
    int n, i, tong = 0;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);
    for (i = 1; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            tong += i;
        }
    }
    if (tong == n)
    {
        printf("%d la so hoan hao", n);
    }
    else
    {
        printf("%d khong phai la so hoan hao", n);
    }
    return 0;
}