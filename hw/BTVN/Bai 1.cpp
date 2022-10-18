#include<stdio.h>
#include <conio.h>
 int main(){
   
   long int a;
   scanf("%d",&a);
   	 
   	 if(a<=100){
   	 int b=(a*5/100);
   	 	  printf("Voi doanh so la %d trieu thi tien hoa hong la %d trieu ",a,b);
		}else{
			if(a<=300){
			int b=(a*10/100);
				printf("Voi doanh so la %d trieu thi tien hoa hong la %d trieu ",a,b);
			}else{
				if(a>300){
				int b=(a*20/100);
					printf("Voi doanh so la %d trieu thi tien hoa hong la %d trieu ",a,b);
				}
			}
		}
 }
