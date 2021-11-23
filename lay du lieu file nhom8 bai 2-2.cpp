#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void XoaXuongDong(char tenfile[]){
	size_t len=strlen(tenfile);
	for(int i=0;i<len;i++){
		if(tenfile[len-1]=='\n');
		tenfile[len-1]='\0';
		}
	}	
int main(){
	FILE *q;
	int n;
	char tenfile[30];
	printf("Nhap ten file: ");
	fflush(stdin);
	fgets(tenfile,sizeof(tenfile),stdin);
	XoaXuongDong(tenfile);
	q=fopen(tenfile,"rb");
	if(q==NULL){
		printf("\nLoi mo file!");
		exit(1);
		}
	 int *a=(int*)malloc(n*sizeof(int));	
	if(a==NULL){
		printf("\nLoi!");
		exit(1);
		}
	fread(&n,sizeof(n),1,q);		
		//Xuat Mang
	printf("Mang cua ban: ");
	for(int i=0;i<n;i++){
		fread(&a[i],sizeof(a),1,q);
		printf("%d ",*(a+i));
	}
	//Tim mang %5==0
	printf("\nphan tu chia het cho 5:");
		for(int i=0;i<n;i++){
		if( *(a+i) %5 ==0){
		fread(&a[i],sizeof(a),1,q);
		printf("%d ",*(a+i));	
		}
	}
	free(a);
	fclose(q);
}
	
