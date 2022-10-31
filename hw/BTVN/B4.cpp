#include<stdio.h>
int LeCuoi(int a[], int n){
     for(int i=n-1 ; i<n ; i-- ){
     	if( a[i]%2!=0){
            return a[i];           
            break;           
           }
       }
}
int main(){
	int n;
	scanf("%d",&n);
	int ary[n];
    int d=LeCuoi(ary,n);
	printf("\nSo le cuoi cung trong mang la:%d",d);
}
