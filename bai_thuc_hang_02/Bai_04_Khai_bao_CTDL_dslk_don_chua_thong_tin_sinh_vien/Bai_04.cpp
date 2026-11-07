#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char hoten[30];
	int msv;
	float d1, d2, d3;
}SV;

typedef struct Node{
	SV infor;
	struct Node*next;
}Node;

typedef struct{
	Node *pHead;
	Node *pTail;
}LList;
