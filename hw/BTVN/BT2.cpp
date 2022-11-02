#include<stdio.h>
#include<string.h>
int main(){
    char s[50];
    printf("\nNhap vao mot chuoi:");
    scanf("%s",s);
    int nguyenam=0;
    int kytukhac=0;
    for (int i=0;i<=strlen(s);i++){
    	if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
    		nguyenam++;
		}else{
		    kytukhac++;	
		}		
	}
	  printf("So luong nguyen am trong chuoi la %d va so luong ky tu khac la %d",nguyenam,kytukhac);
} 
