#include<stdio.h>
#include <conio.h>
 int main(){
   
    float a;
   scanf("%f",&a);
   	 
   	 if(a==15){
   float b= (float)a*30/100;
      float c= a-b;
   	 	  printf("Voi muc luong la %f trieu va thue suat %f thi muc luong nhan duoc la %f trieu",a,b,c);
		}else{
			if((a>=7)&&(a<15)){
			float b=(float) a*20/100;
			float c= a-b;
				printf("Voi muc luong la %f trieu va thue suat %lf thi muc luong nhan duoc la %f trieu",a,b,c);
			}else{
				if(a<7){
				float b= (float)a*10/100;
			    float c= a-b;
					printf("Voi muc luong la %f trieu va thue suat %lf thi muc luong nhan duoc la %f trieu",a,b,c);
				}
			}
		}
 }
