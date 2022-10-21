#include<stdio.h>
int main(){
	int s=4000;
	int y=0;
	int n;
	scanf("%d",&n);
	while(y<n){
		int l =s*8/100;
		s+=l;
		y++;
		
	}
		printf("sau %d nam se co so tien la %d",n,s);
	}

