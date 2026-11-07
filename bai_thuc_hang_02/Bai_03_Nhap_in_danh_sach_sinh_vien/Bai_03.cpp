#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char hoten[30];
	int msv;
	float d1, d2, d3;
}SV;

void nhap(SV *a, int n){
	for(int i=0;i<n;i++){
		while(getchar() !='\n');
			
		printf("Nhap ho ten sinh vien thu %d: ",i+1);
		fgets((a+i)->hoten,sizeof((a+i)->hoten), stdin);
		(a+i)->hoten[strcspn((a+i)->hoten, "\n")] = '\0';
		
		printf("Nhap ma sinh vien thu %d: ",i+1);
		scanf("%d",&(a+i)->msv);
		
		printf("Nhap diem sinh vien thu %d: ",i+1);
		scanf("%f %f %f", &(a+i)->d1,&(a+i)->d2,&(a+i)->d3);
		 
	}
}

void in(SV *a, int n){
	int i;
	for(int i=0;i<n;i++){
		SV*sv = a+i;
		printf("%s %d %.2f %.2f %.2f",(sv->hoten),(sv->msv),(sv->d1),(sv->d2),(sv->d3));
		printf("\n");
	}
}

int main()
{
	SV *a;
	int n;	
	printf("So luong sinh vien:");
	scanf("%d",&n);


	a = (SV*)malloc(n*sizeof(SV));
	
	if(a==NULL){
		printf("Khong du bo nho\n");
	}
	
	nhap(a,n);
	printf("Danh sach cac sinh vien:\n");
	in(a,n);
	free(a);
	a = NULL;
}
