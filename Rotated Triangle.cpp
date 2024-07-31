void nStarTriangle(int n) {
    // Write your code here.
    int i,j,k;
	for(i=1;i<=n;i++){
        
          for (k = 1; k <= i; k++) {
            cout << "*";
          }
        
        
        cout<< "\n";
    }
    for(i=n-1;i>=1;i--){
        for(j=i;j>=1;j--){
            cout<<"*";
        }
        cout<< "\n";
    }

}
