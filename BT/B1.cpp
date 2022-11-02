#include<stdio.h>
int Tongcacsole(int a[],int n){
	int dem;
	int S=0;
	float TBC;
	    for(int i=0;i<n;i++){
	    if(a[i]%2!=0){
		S=S+a[i];
		dem++;
		}
	}
	TBC=float(S/dem);
	return TBC;
}
int main(){
	int n;
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
}
	float h=Tongcacsole(ary,n);
	printf("TBC cac so le la %f",h);

}
