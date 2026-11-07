//dung 1 con tro
#include <stdio.h>
#include <stdlib.h>

int main(){
	int hang,cot;
	printf("Nhap so hang va cot: ");
	scanf("%d %d",&hang,&cot);
	
	float *ma=(float*)malloc(hang*cot*sizeof(float));
	if(ma==NULL){
		printf("Khong du bo nho\n");
		return 1;
	}

	//Nhap du lieu
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++)
			scanf("%f",&ma[i*cot+j]);
		}

	//In du lieu
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			printf("%.2f ",ma[i*cot+j]);
		}
		printf("\n");
	}
	//Giai phong ma tran
	free(ma);
	return 0;
}
