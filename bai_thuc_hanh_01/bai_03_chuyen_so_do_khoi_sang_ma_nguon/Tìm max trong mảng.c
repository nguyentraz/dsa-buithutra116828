#include <stdio.h>
int main()
{
    int n, i, max;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Gia tri lon nhat trong mang la: %d", max);
    return 0;
}