#include<stdio.h>
bool ktSonguyento(int n){
	int i=1,c=0;
	while(i<=n){
		if(n%i==0){
			c++;
		}
		i++;
	}
	if(c==2){
		return true;
	}
	   return false;
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

bool ktSonguyento(int n){
if (n<2){
	return false;
}
if(n<4){
	return true;
}
int i=2;
while(i<n-1){
	if(n%i==o){
		return false;
	}
	i++;
}
        return true;

