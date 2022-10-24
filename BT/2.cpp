#include <stdio.h>
int main(){
	
	for(int x=0;x<5;x++){
		for(int y=0;y<4;y++){
			printf("* ");
		}
		if(x%2==0){
			printf("* ");
		}
		printf("\n");
	}
	
}
