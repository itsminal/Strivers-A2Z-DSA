void alphaHill(int n) {
    // Write your code here.
    int i,j,k,l,temp,temp2;
    temp=n,temp2=65;
    for(i=65;i<(65+n);i++){
        temp2=i;
        for(k=temp-1;k>=1;k--){
            cout<<"  ";
        }
        for(j=65;j<=i;j++){
            
            cout<<char(j)<<" ";
            
        }
        for(l=65;l<i;l++){
            cout<<char(temp2-1)<<" ";
            temp2--;
        }
        temp--;
        cout<<endl;
    }   
}
