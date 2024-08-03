void alphaTriangle(int n) {
    // Write your code here.
    int i,j,temp;
    for(i=1;i<=n;i++){
        temp=j=65+n-1;
        for(j=1;j<=i;j++){
            cout<<char(temp)<<" ";
            temp--;
        }
        cout<<endl;
    }
}
