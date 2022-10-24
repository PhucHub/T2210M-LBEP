#include<stdio.h>
	int N(int n){
		int x0=0;
	    int x1=1;
	    int x2=1;
		
		for(int i=3;i<=n;i++){
		x0=x1;
		x1=x2;
		x2=x0+x1;
	}
	printf("La so %d trong day Fibonaci ",x2);
}
 int main(){
 	int n;
 	int d;
 	printf("So da nhap  ");
	scanf("%d",&n);
	d=N(n);
 }
	
	

