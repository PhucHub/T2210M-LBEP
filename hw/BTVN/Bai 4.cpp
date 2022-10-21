#include<stdio.h>
#include<math.h>
int main(){
   int n;
   scanf("%d",&n);
    printf("So nhap vao la %d\n",n);
    int i = 0; 
   	while (n > 0) {
    i = i * 10 + n % 10;
    n /= 10;
   
  } 
  printf("So nghich dao la %d\n",i);
  
 
}


 
 
