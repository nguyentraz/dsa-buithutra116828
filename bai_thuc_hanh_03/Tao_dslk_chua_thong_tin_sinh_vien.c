#include<stdio.h>
#include<stdlib.h>
typedef struct    {
    	char hoten[30];
    	int masv;
    	float d1, d2, d3;
}Data;
typedef struct tagNode    {
    	Data infor;
    	struct tagNode *link;
}Node;
typedef struct    {
    	Node *pHead;  
    	Node *pTail;
    	int spt;
}LList;
/////////////////////////////////////
void initList(LList *L)
    {
    	L->pHead = NULL;
    	L->pTail = NULL;
    	L->spt = 0;
    }
/////////////////////////////////////
int emptyList(LList L)
{
    	return (L.spt == 0); 
}
/////////////////////////////////////
void insert_Head(LList *L, Data x)
    {
    	Node *pp;
    	pp = (Node*) malloc(sizeof(Node));
    	pp->infor = x;
    	pp->link = NULL;
    	if(emptyList(*L)){
    			L->pHead = pp;
    			L->pTail = pp;
    		}  	
        else {
    		pp->link = L->pHead;
    		L->pHead = pp;
    		}
    	L->spt++;
    }
///////////////////////////////////////
void insert_Tail(LList *L, Data x)
{
	Node *pp;
    	pp = (Node*)malloc(sizeof(Node));
    	pp->infor = x;
    	pp->link = NULL;
    	if(emptyList(*L)){
    			L->pHead = pp;
    			L->pTail = pp;
    		}  	
        else {
    		L->pTail->link = pp;
    		L->pTail = pp;
    		}
    	L->spt++;
}
///////////////////////////////////////
Node *searchNode(LList L, int masv){
	Node *pp = L.pHead;
	while(pp != NULL){
		if(pp->infor.masv == masv)
			return pp;
		pp = pp->link;
	}
	return NULL;
}
///////////////////////////////////////
void insert_After(LList *L, Node *q, Data x)
    {
    	if(q == NULL) return;
    	Node *pp;
    	pp = (Node*) malloc(sizeof(Node));
    	pp->infor = x;
    	pp->link = q->link;
    	q->link == pp;
    	if(L->pTail==q){
		L->pTail == pp;
    	}
    	L->spt++;
    }
///////////////////////////////////////
void nhap(Data *x){
	
    printf("Nhap ma sv: ");
    scanf("%d", &(x->masv));
    if(x->masv > 0){
        printf("Nhap ho ten sinh vien: ");
        scanf(" %[^\n]", (x->hoten));
        printf("Nhap diem mon 1: ");
        scanf("%f", &(x->d1));
        printf("Nhap diem mon 2: ");
        scanf("%f", &(x->d2));
        printf("Nhap diem mon 3: ");
        scanf("%f", &(x->d3));
    }
}
///////////////////////////////////////
void in(Data x){
    printf("Ten: %s, Ma: %d, Diem 1: %.2f, Diem 2: %.2f, Diem 2: %.2f\n", 
            x.hoten, x.masv, x.d1, x.d2, x.d3);
}
/////////////////////////////////////////
void processList(LList L){
    Node *pp = L.pHead;
    if(pp!=NULL){
    	return;
	}
    while( pp != NULL ){
        	in(pp->infor); //in du lieu trong node 
        	pp = pp->link;
    	}
}
/////////////////////////////////////////
int main(){
    LList L;
	int kt = 0;
	Data x;
	initList(&L); //tao ra 1 ds rong
	do{
	    printf("\nChuong trinh lam viec voi DSLK don SV\n");
	    printf("\n1: Them nut vao dau danh sach");
	    printf("\n2: Them nut vao cuoi danh sach");
	    printf("\n3: Them nut vao sau mot nut khac trong danh sach");
	    printf("\n9: Duyet ds");
	    printf("\n0: Thoat");
	    printf("\nMoi ban chon: ");
	    int chon;
	    scanf("%d", &chon);
	    
	    switch(chon)
		{
	        case 1: 
	            printf("Nhap so thong tin sv can them vao dau danh sach: \n");
	            nhap(&x);
	            if(x.masv > 0) 
                	insert_Head(&L, x);
            	break;
            	
            case 2:	
	            printf("Nhap so thong tin sv can them vao cuoi danh sach: \n");
	            nhap(&x);
	            if(x.masv > 0)
	                insert_Tail(&L, x);
            	break;
            	
            case 3:
            	{
            		if(emptyList(L)){
	            	printf("Danh sach dang trong\n");
	            	break;
				}
				int msv;
				printf("Nhap ma sinh vien ma ban muon them vao sau: ");
				scanf("%d",&msv);
				Node *q = searchNode(L, msv);
				if( q != NULL ){
					printf("Nhap thong tin sinh vien muon them: \n");
				nhap(&x);
				if(x.masv > 0)
				insert_After(&L, q, x);
				}
				else{
					printf("Khong tim thay thay sinh vien co ma sinh vien can tim.\n", msv);
		    	}
				}
	            break;
            	
            case 9: 
            printf("Danh sach sinh vien la:\n");
                processList(L);
                break;    
                
            case 0: 
                printf("Bye bye\n");
                while(L.pHead != NULL){
                	Node *temp = L.pHead;
                	L.pHead = L.pHead->link;
                	free(temp);
				}
	            kt = 1;
	            break;
	            
	        default:
	        	printf("Lua chon dang khong hop le! Vui long chon lai.\n");
	        	break;
        }
	}
	while(kt==0); 
	return 0;
}
