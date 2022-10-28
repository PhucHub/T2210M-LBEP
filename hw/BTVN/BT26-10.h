#include<stdio.h>
int Chuvi(int a,int b,int c){
      int d=a+b+c;
      return d;
}
 int Dientich(int a,int b,int c){
    float s=(1/4*(a+b+c)*(a+b-c)*(b+c-a)*(c+a-b));
 	return s;
 }
 int TongcacchusoN(int n){
 	int S=0;
 	for(;n!=0;){
 	 int d = n%10;
 	 S+=d;
 	 n/=10;
 	}
     return S;
 }
 int Uocchung(int a,int b,int uc){
 	 for (uc=a;uc>=1;uc--){
        if (a%uc==0 && b%uc==0){
        	return uc;
		}
 }
}
 int Boichung(int a,int b,int bc){
 	 for (bc=a;bc<=a*b;bc++){
        if (bc%a==0 && bc%b==0){
        	return bc;
		}
 }
}
bool Sochinhphuong(int a){
	for(int i=0;i*i<=a;i++){
		if(i*i==a){
			return true;
		}else{
			return false;
		}
	}
}
int Somindetongcacsolonhon10000(int n){
float S=0;
 	for(int i = 1; i <= n; i++){
    S+= 1.0 / i;
  }
  if(S<10000){
  	S++;
  }else{
  	return S;
  }
}
bool Sogiamdan(int n){
	for(int i;i=n%10;){
		n=n/10;
		if(i>n%10){
			return false;
		}else{
			return true;
		}
	}
}
