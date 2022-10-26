#include<stdio.h>

bool Sogiamdan(int n){
	for(int i;i==n%10;){
		n=n/10;
		if(i<n%10){
			return true;
		}else{
			return false;
		}
	}
}
int main(){
	int n=4321;
	if(Sogiamdan(n)){
		printf("%d ko la so giam dan",n);
	}else{
		printf("%d la so giam dan",n);
	}
}
