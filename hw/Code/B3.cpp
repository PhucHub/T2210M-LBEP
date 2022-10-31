#include<stdio.h>
#include<conio.h>
 int Mang(int a[],int n);
int main(){
	int n;
    scanf("%d",&n);
 int dem = 0;
 int k;
 printf("nhap so k: ");
 scanf("%d", &k);
 int ary[n];
 for (int i = 0; i <n; i++){
 	if (k == ary[i]){
      printf("k thuoc mang\n");
      dem++;
 }else{
 	 if (dem == 0){
 	  printf("k khong thuoc mang\n");
   }
 }
break;
}
}
