void getNumberPattern(int n) {
    // Write your code here.
    int i, j,k,l, temp,temp2,temp3;
    temp2=n+1;
    
    for(i=1;i<=n;i++){
        temp=n;
        temp3=temp2;
        for(j=1;j<=i;j++){
            cout<<temp;
            temp--;
        }
        for(k=n;k>i;k--){
            cout<<n-i+1;
        }
        for(k=n;k>i;k--){
            cout<<n-i+1;
        }
        for(l=1;l<i;l++){
            cout<<temp3;
            temp3++;
        }
        temp2--;
        cout<<endl;
    }
    i=0; j=0;k=0;l=0; temp2=2;temp3=2;
    int ttemp3;
    ttemp3=temp3;
    for(i=1;i<n;i++){
        temp=n;
        temp3=ttemp3;
        for(j=n-1;j>=i;j--){
            cout<<temp;
            temp--;
        }
        for(k=1;k<2*i;k++){
            cout<<temp2;
        }
        for(l=n-1;l>=i;l--){
            cout<<temp3;
            temp3++;
        }
        cout<<endl;
        temp2++;
        ttemp3++;
    }
}
