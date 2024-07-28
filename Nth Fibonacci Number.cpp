#include<bits/stdc++.h>
using namespace std;

int f(int n){
        if(n==0){
                return 0;
        }
        else if(n==1 || n==2){
                return 1;
        }
        else{
                return f(n-1)+f(n-2);
        }
}

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n,ans;
        cin>>n;
        ans=f(n);
        cout<<ans;
        return 0;
}
