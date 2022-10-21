#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int S=0;
	if(n <= 0){
		printf("\n n phai > 0. Xin nhap lai !");
	}
	int i=1;
	while(i<=n-1){  
		if(n%i==0){
	     S+=i;
		}
	     i++;
		
	}
	 if(S==n){
	 	printf("%d la so hoan hao",n);
	 }else{
	 	 printf("%d khong phai la so hoan hao",n);
	 }
}

