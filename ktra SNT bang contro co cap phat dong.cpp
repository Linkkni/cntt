#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
int KiemTraSoNguyenTo(int x){
if(x<2)
return 0;
if(x==2)
return 1;
for(int i=2;i<sqrt(x);i++){
if(x%i==0)
return 0;
}
return 1;
}
int giaithua(int x){
if(x==0||x==1){
return 1;
}else{
return x*giaithua(x-1);
}
}
int main(){
int n;
printf("Nhap so luong phan tu mang:");
scanf("%d",&n);
int *p=(int*)malloc(n*sizeof(int));
for(int i=0;i<n;i++){
printf("a[%d]=",i);
scanf("%d",p+i);
}
for(int i=0;i<n;i++){
printf(" %d",*(p+i));
}
int SNTMin=INT_MAX;
for(int i=0;i<n;i++){
if(KiemTraSoNguyenTo(*(p+i))==1){
//SNTMin=KiemTraSoNguyenTo(p+i);
	if(SNTMin>*(p+i)){
		SNTMin=*(p+i);
		}
	}					
}
unsigned long kq=giaithua(SNTMin);
printf("\ngiai thua cua SNT nho nhat:%d",kq);
free(p);
}

