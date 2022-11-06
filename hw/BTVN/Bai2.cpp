#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char a[10];
	printf("Nhap mang:");
	scanf("%s",a);
	int Tong =0;
    int t=0;
		for(int i=0;i<strlen(a);i++){
        	if(a[i] > 0) { 
	           Tong += a[i];  
	           for(int k=i;k<strlen(a);k++){
	           	if (a[k]>0){
	           		t+=a[k];
	           		if(t>Tong){
	           		t==Tong;
					   }
				   }
			   }
	   } 

	printf("Tong cac phan tu duong lien tiep trong mang la %d\n",Tong);
}
}

