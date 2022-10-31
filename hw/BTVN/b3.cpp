#include<stdio.h>
int Mang(int a[],int n);
int main(){
	int n;
    scanf("%d",&n);

 int k;
 printf("nhap so k: ");
 scanf("%d", &k);
 int ary[n];
 for (int i = 0; i <n; i++){
 	if (k == i){
      printf("%d thuoc mang\n",k);
      
 }else{
     printf("%d khong thuoc mang\n",k);
}
break;
 }

}
