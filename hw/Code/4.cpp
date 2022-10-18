#include<stdio.h>
int main(){
	int a;
	int b;
	int c;
	
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	if(a>b){
	   if(a>c){
	   	printf("max la %d",a);
	   }else{
	   	 printf("max la %d",c);
	   }
	}else{
	    if(b<c){
	    	printf("max la %d",c);
		}else{
			printf("max la %d",b);
		}
	}
	

}
