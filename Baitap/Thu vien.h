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
