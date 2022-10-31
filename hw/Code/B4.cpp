#include<stdio.h>
int main(){
   int n;
   int a[n];
    do{
        printf("Nhap so phan tu mang:");
        scanf("%d", &n);
    }while(n<1);
    for(int i=0; i<n; i++)
    {
        printf("Nhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    printf("Mang sau khi nhap la:\n");
    for(int i=0; i< n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nSo le cuoi cung trong mang la:\n");
    for(int i= n-1 ; i>=0 ; i--)
    {
        if(a[i]%2!=0)
        {
            printf("%d",a[i]);
            break;
        }    
    }
}
