#include<stdio.h>
void NhapMang(int a[],int n) {
    int i;
     for(i=0; i<n; i++) {
     printf("Nhap a[%d]: ",i);
     scanf("%d",&a[i]);
}
}
void XuatMang(int a[],int n) {
    printf("Cac phan tu co trong mang la:\n");
    for(int i=0; i<n; i++) {
    printf("%d\n",a[i]);
    
}
}
int main() {
  int n;
  int a[n];
    do {
    printf("Nhap so phan tu trong mang: ");
    scanf("%d",&n);
    } while(n<2 || n>99);
      NhapMang(a, n);
      XuatMang(a, n);
}

 
