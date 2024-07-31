void nBinaryTriangle(int n) {
    // Write your code here.
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<< "\n";
    }
}
