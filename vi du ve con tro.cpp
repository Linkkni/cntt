//vi du ve con tro
#include<stdio.h>
int main(){
	int *q,c;
	c=20;
	printf("Dia chi cua c : %x",&c);
	printf("\nGia tri cua c:%d",c);
	// gan dia chi cua c vao con tro q
	q=&c;
	printf("\nDia chi cua contro q:%s",q);
	printf("\nGia tri cua con tro q:%d",*q);	
	c=16;
	printf("\nDia chi cua c :%s",&c);
	printf("\nGia tri cua c:%d",c);
	*q=11;
	printf("\nDia chi cua contro q:%s",q);
	printf("\nGia tri cua con tro q:%d",*q);
	}
	
	
