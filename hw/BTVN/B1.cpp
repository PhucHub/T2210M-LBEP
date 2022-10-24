#include <stdio.h>
int Sodaonguoc(int n){ 
  int A = 0; 
  while (n > 0) {
    A= A * 10 + n % 10;
    n /= 10;
  }
  return A;
  
}
int main(){
    int n;
 
    printf("Nhap mot so nguyen duong: ");
    scanf("%d",&n);
     int b = Sodaonguoc(n) ;
       printf("So dao nguoc: %d\n",b );
	 return 0;
}

