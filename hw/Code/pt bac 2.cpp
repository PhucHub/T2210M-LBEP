#include <stdio.h>
#include <math.h>
int main(){
	  int a;
	  scanf("%d",&a);
	  int b;
	  scanf("%d",&b);
	  int c;
	  scanf("%d",&c);
	  
	  if(a==0){
	  	  if (b==0){
	  	  	 if(c==0){
	  	  	 	  printf("pt vo so nghiem");
				 }else{
				 	 printf("pt vo nghiem");
				 }
			}else{
			 float x = -(float)c / b;
				printf("x=%d",x);
		    }
	  	  
	  }else{
	  	int d= (b*b-4*a*c);
	  	if(d<0){
	  		printf("pt vo nghiem");
		  }else{
		  	 if(d==0){
		  	 	float x=-(float)b/(2*a);
		  	 	printf("x=%d",x);
			   }else{
			   	  double x1=(-b+sqrt(d))/(2*a);
			      double x2=(-b-sqrt(d))/(2*a);
				  //printf("x1=%lf\n",x1);
				 //printf("x2=%lf\n",x2);
				  // x1=...va x2=....
				  printf("x1=%f  x2=%f",x1,x2);    
			   }
		  }
	  }
}
