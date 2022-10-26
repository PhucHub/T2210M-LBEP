bool ktSonguyento(int n){
    if (n<2){
	return false;
   }
     if(n<4){
	return true;
   }
    int i=2;
    while(i<n-1){
	if(n%i==0){
		return false;
	}
	i++;
}
        return true;
}
int Maxtrong3so(int a,int b,int c){
	if(a>b&&a>c){
		return a;
	}else{
		if(b>c&&b>a){
			return b;
		}else{
			return c;
		}
	}
}

int timsofibonaci(int n){
	if(n<=0){
		return 0;
	}
	if(n<3){
		return 1;
	}
	    int x0=0;
	    int x1=1;
	    int x2=1;
	    
	    for(int i=3;i<=n;i++){
		x0=x1;
		x1=x2;
		x2=x0+x1;
	}
      return x2;
}
