#include<stdio.h>
int main(){
    int n;
    int x;
    printf("Nhap n: ");
    scanf("%d",&n);
    if(n<0){
    	printf("So nhap phai la so duong.Vui long nhap lai");
	}else{
		for(;n>0;){
        x = n % 10;
        n /= 10;
    }   
	printf("Chu so dau la %d",x);
	}
}
