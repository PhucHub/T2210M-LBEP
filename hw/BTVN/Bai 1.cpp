#include<stdio.h>
int main(){
	int n;
	printf("So da nhap  ");
	scanf("%d",&n);
	int S=0;
	printf("Cac uoc so cua %d là: ",n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
		S=S+i;
		printf("%4d",i);
	}
	}
     printf("\nTong cac uoc cua %d la %d",n,S);
}
