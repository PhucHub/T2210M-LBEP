#include<stdio.h>
#include<string.h>
int main(){
	char a[10];
	printf("Nhap mang:");
	scanf("%s",a);
	int dem=0;
	int kyluc;
		for(int i=0;i<strlen(a);i++){
			if(a[i]>0){
				dem++;
				kyluc==dem;
				dem==0;
				for(int k=i;k<strlen(a);k++){
					if(a[k]>0){
						dem++;
						if(dem>kyluc){
							dem==kyluc;
						}
					}
				}
            }
	}
	printf("So luong so duong lien tiep nhieu nhat la:%d",kyluc);	
}

