void nLetterTriangle(int n) {
    // Write your code here.
    int i,j;    

    for(i=65;i<(65+n);i++){
        
        for(j=65;j<=i;j++){
            
            cout<<char(j)<<" ";
            
        }
        cout<<endl;
    }
}
