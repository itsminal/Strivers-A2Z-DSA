//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   long long gcdfind(long long a, long long b){
            if(a%b==0){
                return b;
            }
            return gcdfind(b, a%b);
        }
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        
        long long gcd,lcm;
        gcd=gcdfind(A,B);
        lcm=(A*B)/gcd;
        return {lcm,gcd};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends
