#include<stdio.h>
int main(){
long int n;
	int d =0;	
	printf("So da nhap  ");
	scanf("%d",&n);
    for(;n>0;){
    int x =n%10;
	    n/=10;
	    if(x>d){
	    d+=x;
		}
		}
		printf("Chu so lon nhat la %d",d);
	}


