#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

        int i = 2;
    int count = 0;
    while (i <= sqrt(n))
    {
        if (n % i == 0)
        {
            count++;
        }
        i++;
    }
    if (count == 0 && n > 1)
    {
        printf("%d la so nguyen to", n);
    }
    else
    {
        printf("%d khong phai la so nguyen to", n);
    }
    return 0;
    
}