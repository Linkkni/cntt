#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void XoauongDong(char x[]){
	size_t len = strlen(x);
	for(int i=0;i<len;i++){
		if(x[len-1]=='\n')
		x[len-1]='\0';
		}
	}	
struct CacSo{
	int a;
	int b;
	int AmuB;
};
int main(){
	CacSo CS;
	FILE *q;
	char tenfile[30];
	printf("Nhap ten file hoac duong dan cua file:");
	fflush(stdin);
	fgets(tenfile,sizeof(tenfile),stdin);
	XoauongDong(tenfile);
	q=fopen(tenfile,"rb");
	if(q==NULL){
		printf("loi tao hoac mo file");
		exit(1);
		}
	fread(&CS,sizeof(CS),1,q);
	printf("%d^%d=%d",CS.a,CS.b,CS.AmuB);
	fclose(q);
	}

 
