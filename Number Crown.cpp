void numberCrown(int n) {
    // Write your code here.
    int i,j,k,l,temp;
    temp=2*n-2;
    for (i = 1; i <= n; i++) {
        
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(k=temp;k>0;k--){
            cout<<"  ";
            
        }
        for(l=i;l>=1;l--){
            cout<<l<<" ";

        }
        cout<< "\n";
        temp=temp-2;
        
    }
}
