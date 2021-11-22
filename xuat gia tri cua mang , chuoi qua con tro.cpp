#include<stdio.h>
int main(){
//	int x[5]={2,4,6,8,10};
//	int *q;
//	q=&x[2]; // luu dia chi cua x[2] vao con tro
//	printf("\n*q=%d",*q); //xuat gia tri cua x[2]
//	printf("\n*q=%d",*(q+2)); //xuat gia tri cua x[4]
//	printf("\n*q=%d",*(q-2)); //xuat gia tri x[0]
char *welcome=(char*)"xin chao";
	char tenban[50];
	printf("Nhap ten ban:");
	gets(tenban);
	printf("%s ",welcome);
	puts(tenban);
}

