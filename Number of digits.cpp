int countDigits(int n){
	// Write your code here.	
	int i;
	if(n==0){
		return 0;
	}
	else{
		while(n>0){
			i++;
			n=n/10;
		}
		return i;
	}
}
