#include<stdio.h>
#include<math.h>
 int TongS(int n){
 float S=0;
 	for(int i = 1; i <= n; i++){
    S+= 1.0 / i;
  }
 	printf("\nTong 1 +1/2 + ... + 1/%d là %f: ", n, S);
 }
 int main(){
 	int n;
 	printf("So da nhap  ");
 	scanf("%d",&n);
 	int x;
 	x=TongS(n);
 }
