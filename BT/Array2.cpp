#include<stdio.h>
int timMax(int arr[],int n){
	int h =arr[0];
	for(int i =0;i<n;i++){
		if(arr[i]>h){
		}
	}
	return h;
}
int main(){
	int ary[10];
	//ary[0];
	//ary[9];
	for(int i=0;i<10;i++){   //duyet mang
		scanf("%d",&ary[i]);
	}
int	high = ary[0];               // int high=timMax(ary,10);
    for(int i=0; i<10; i++)
    {
        if(ary[i] > high){
        	high = ary[i];
        	}
            
    }
    printf("Max :%d\n",high);
//tim so gan Max
     int So2 = ary[0];
     int So2=high;
     for(int i=0; i<10; i++){
     	if()
	 }
     for(int i=0; i<10; i++)
    {
     if(ary[i]<high&&So2<ary[i]){
     	printf("So2:%d",So2);
	 }
   } 
}


