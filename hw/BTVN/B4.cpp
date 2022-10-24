#include<stdio.h>
 int TongS (int n){
 	int S=0;
 	int i=1;
 	 for(int i = 1; i <=n; i++){
        S = S + i;
    }
     printf("\nTong 1 + 2 + ... + %d là %d: ", n, S);
 }
 int main(){
 	int n;
 	printf("\nNhap vao so n: ");
     scanf("%d", &n);
     int d;
     d=TongS(n);
    
 }
