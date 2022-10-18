#include <stdio.h>
 int main(){
 	
 	float a;
 	scanf("%f",&a);
 	float b;
 	scanf("%f",&b);
    float c;
 	scanf("%f",&c);
 	
 	float d=(a+b+c)/3;
	  	if(d>=9){
	  		printf("Hoc luc hoc sinh hang A");
		  }else{
		  	if(d>=7){
		  		printf("Hoc luc hoc sinh hang B");
			  }else{
			  	if(d>=5){
			  		printf("Hoc luc hoc sinh hang C");
				  }else{
				  	if(d<5){
				  		printf("Hoc luc hoc sinh hang F");
					  }
				  }
			  }
		  }
 	
  } 
