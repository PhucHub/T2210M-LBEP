#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
    printf("Nhap n = %d\n",n);
	int i=6;
	while(i<n&&i%2==0&&i%3==0){
	i+=6;	
	}
	printf("So lon nhat nho hon %d chia het cho 2,3 la %d",n,i );
	

}
