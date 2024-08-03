void nLetterTriangle(int n) {
    // Write your code here.
    int i,j,temp=65;    

    for(i=1;i<=+n;i++){
        temp=65;
        for(j=n;j>=i;j--){
            
            cout<<char(temp)<<" ";
            temp++;
            
        }
        cout<<endl;
    }
}
