#include<stdio.h>
int main(){
	int c,d;
	int *p1;
	int *p2;
	c=10;
	d=20;
	p1=&c;
	p2=&d;
	printf("truoc khi hoan doi: p1=%d p2=%d",*p1,*p2);
	*p1=*p1+*p2;
	*p2=*p1-*p2;
	*p1=*p1-*p2;
	printf("\nSau khi hoan doi:p1=%d p2=%d",*p1,*p2);
	}
	
