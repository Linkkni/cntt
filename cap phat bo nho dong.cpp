#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int *q=(int*)malloc(n*sizeof(int)); // truyen so vua nhap vao n
	if(q==NULL){
		printf("khong cap phaat duoc vung nho");
		return 0;
	}
	// nhap mang
	for(int i=0;i<n;i++){
		printf("x[%d]=",i);
		scanf("%d",q+i);
	}
	// xuat mang
	for(int i=0;i<n;i++){
		printf("%d ",*(q+i));
		}
	//thay doi kich co mang
	int x;
	printf("\nNhap kich co mang muon thay doi:");
	scanf("%d",&x);
	realloc(q,x);
	//nhap mang moi
	for(int i=0;i<x;i++){
	printf("x[%d]=",i);
		scanf("%d",q+i);
	}
	// xuat mang moi
		for(int i=0;i<x;i++){
			printf("%d ",*(q+i));
		}
	}
	

