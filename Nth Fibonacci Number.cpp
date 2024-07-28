#include<bits/stdc++.h>
using namespace std;

int f(int n){
        int a,b,c,i,ans;
        a=0;
        b=1;
        i=2;
        ans=0;
        if(n==0){
                return 0;
        }
        else if(n==1){
                return 1;
        }
        while(i<=n){
                c=a+b;
                
                ans=c;
                a=b;
                b=c;
                i++;
        }
        return ans;
        
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
