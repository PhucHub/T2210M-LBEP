#include<stdio.h>
int main(){
	int n;
	printf("So da nhap  ");
	scanf("%d",&n);
	int i=2;
	
	if(n<2){
		printf("%d khong phai so nguyen to",n);
	}else{
	     if ((i<=n)&&(n%i!=0)){
	     printf("%d la so nguyen to",n);
		}else{
			printf("%dkhong phai so nguyen to",n);	
		}
	      
	}
	
}
