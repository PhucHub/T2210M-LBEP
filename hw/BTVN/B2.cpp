#include <stdio.h>
 int Max(int a,int b,int c){
 	int d;
 	d=a;
 	if(d<b){
 		d=b;
	 }
	if(d<c){
	    d=c;
		 }
		 return d;
}
 int main(){
 	int a,b,c;
 	int d;
 	printf("Nhap vao 3 so  ");
 	scanf("%d%d%d",&a,&b,&c);
 	
 	d=Max(a,b,c);
 	printf("Gia tri lon nhat trong 3 so la %d",d);
 }
 
