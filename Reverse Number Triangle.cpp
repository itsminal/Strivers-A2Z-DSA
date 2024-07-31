void nNumberTriangle(int n) {
    // Write your code here.
    int i,j;
	for(i=n;i>=1;i--){
        for(j = i; j >=1; j--){
            cout<<i-j+1<<" ";
        }
        cout<< "\n";
    }
}
