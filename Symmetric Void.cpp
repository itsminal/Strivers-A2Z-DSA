void symmetry(int n) {
    // Write your code here.
    int i,j,k;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        for(k=n-i+1;k>1;k--){
            cout<<"  ";
        }
        for(k=n-i+1;k>1;k--){
            cout<<"  ";
        }
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        
        cout<<endl;
    }
    i=0;
    j=0;
    k=0;
    for(i=n;i>=1;i--){
        for(k=n-i+1;k>=1;k--){
            cout<<"* ";
        }
        for(j=1;j<i;j++){
            cout<<"  ";
        }
        for(j=1;j<i;j++){
            cout<<"  ";
        }
        for(k=n-i+1;k>=1;k--){
            cout<<"* ";
        }
        
        
        cout<<endl;
    }
}
