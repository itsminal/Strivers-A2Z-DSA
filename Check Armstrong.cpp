bool checkArmstrong(int n){
	//Write your code here
	if(n==1){
		return true;
	}

	int temp,digits=0,temp2,sum=0;
	temp=n;
	temp2=n;
	while(temp>0){
		temp=temp/10;
		digits++;

	}
	// digits=log10(n)+1;
	while(temp2>0){
		sum=pow((temp2%10),digits)+sum;
		temp2=temp2/10;
	}
	if(sum==n){
		return true;
	}else{
		return false;
	}

}
