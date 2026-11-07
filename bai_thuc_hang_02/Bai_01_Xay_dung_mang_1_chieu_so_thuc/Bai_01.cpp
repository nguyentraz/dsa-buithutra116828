//Xay dung chuong trinh su dung con tro de nhap va in mang 1 chieu so thuc

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void nhap (float *x, int n)
{
	int i;
	for(int i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
	}
}

void in(float *x,int n)
{
	int i;
	for(int i=0;i<n;i++)
	{
		printf("%.2f ",*(x+i));
	}
}

int main()
{
	float *x;
	int n;
	scanf("%d",&n);
	x=(float*)malloc(n*sizeof(float));
	nhap(x,n);
	in(x,n);
	free (x);
	x=NULL;
}
