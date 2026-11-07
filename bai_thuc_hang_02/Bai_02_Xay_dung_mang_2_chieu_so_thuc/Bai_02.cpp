#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int hang,cot;
	printf("Nhap so hang va cot: ");
	scanf("%d %d",&hang,&cot);
	
	float**ma=(float**)malloc(hang*sizeof(float*));
	if(ma==NULL){
		printf("Khong du bo nho\n");
		return 1;
	}
	for(int i=0;i<hang;i++){
		ma[i]=(float*)malloc(cot*sizeof(float*));
		if(ma==NULL){
			printf("Khong du bo nho tai dong %d\n",i);
			return 1;
		}
	}
	//Nhap du lieu
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++)
			scanf("%f",&ma[i][j]);
		}

	//In du lieu
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			printf("%.2f ",ma[i][j]);
		}
		printf("\n");
	}
	//Giai phong ma tran
	for(int i=0;i<hang;i++)
	{
		free(ma[i]);
	}
	free(ma);
	return 0;
}
