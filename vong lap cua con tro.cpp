#include<stdio.h>
	const int Mang=4;
int main(){
	int mang[]={5,15,150,1500};
	int *contro=mang;
	for(int i=0;i<Mang;i++){
		printf("Dia chi cua mang [%d] la:%x\n",i,contro);
		printf("Gia tri cua mang [%d] la:%d\n",i,*contro);
		contro++;	
		}
		return 0;
	}	
	
	
