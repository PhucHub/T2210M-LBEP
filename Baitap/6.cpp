#include<stdio.h>
int main(){
	int n;
	printf("So da nhap  ");
	scanf("%d",&n);
	int x0=0;
	int x1=1;
	int x2=1;
	
	for(int i=3;i<=n;i++){
		x0=x1;
		x1=x2;
		x2=x0+x1;
	}
	printf("%d",x2);
}
