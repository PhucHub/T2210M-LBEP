#include<stdio.h>
bool ktSonguyento(int n){
	int i=2;
	if(n<2){
	    return false;
	}
	 while((i<=n)&&(n%i!=0)){
	}
	      return true;
}


int main(){
	int n;
	scanf("%d",&n);
	if(ktSonguyento(n)){
		printf("%d khong phai so nguyen to\n ",n);
	}else{
		printf("%d la so nguyen to\n ",n);
	}
}
