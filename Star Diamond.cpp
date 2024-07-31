void nStarDiamond(int n) {
    // Write your code here.
    int i,j,k;
	for(i=1;i<=n;i++){
        for(k=n-1;k>=i;k--){
            cout<<" ";
        }
        for(j = 1; j <=2*i-1; j++){
            cout<<"*";
        }
        cout<< "\n";
    }
    
	for(i=n;i>=1;i--){
        for(k=0;k<n-i;k++){
            cout<<" ";
        }
        for(j = 1; j <=2*i-1; j++){
            cout<<"*";
        }
        cout<< "\n";
    }
}
