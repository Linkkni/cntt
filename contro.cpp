#include<stdio.h>
 int main(){
 	int *contro; //goi con tro
 	int bien= 20; //goi bien binh thuong
 	contro=&bien; //luu giu dia chi cua bien trong con tro
 	printf("Dia chi cua bien :%x",&bien);  //%x dung de hien thi dia chi
 	printf("\n dia chi duoc luu giu trong con tro la:%x",contro);
 	printf("\nGia tri duoc luu trong bien con tro la :%d",*contro);
 }
 	
