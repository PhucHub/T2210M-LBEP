#include<stdio.h>
#include <string.h>
int main(){
	char a[20],b[50];
	printf("Nhap chuoi a: ");
	scanf("%s",a);
	printf("Nhap chuoi b: ");
	scanf("%s",b);
	
	int c=0;
	for(int i=0;i<strlen(a);i++){
		if(a[i]==b[0]){
			for(int j=0;j<strlen(b);j++){
				if(a[i+j]==b[j]){
					c++;
				}
					
		       }
			}
			if(c==strlen(b)){
				break;
			}else{
				c=0;
			}
		}

	if(c==strlen(b)){
		printf("%s nam trong %s",b,a);
	}else{
		printf("%s ko nam trong %s",b,a);
	}
}
