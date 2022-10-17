#include <stdio.h>
#include <math.h>
 int main(){
 	 int a;
 	 scanf("%d",&a);
 	 int b;
 	 scanf("%d",&b);
 	 int c;
 	 scanf("%d",&c);
 	 
 	 if(a+b==c){
 	 	    printf("Cac canh khong phai la canh tam giac");
 	 	
	  }else{
	  	if(a+b>c){
	  		int i=(a+b+c);
	  		int h=(sqrt(i*(i-a)*(i-b)*(i-c)));
	  		printf("Chu vi tam giac la %d\n",i);
	  		printf("Dien tich tam giac la %d\n",h);
	  	
		  }else{
		  	printf("Cac canh khong phai la canh tam giac");
		  }
	  }
 }
