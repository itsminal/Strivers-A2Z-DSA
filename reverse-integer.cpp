class Solution {
public:
    int reverse(int x) {
//         int ans=0,i=1;
//         while(x!=0)
//         {
//            int digit=x%10;
           
//            if((ans<INT_MIN/10) || (ans>INT_MAX/10))
//             {
//                 return 0;
//             }
//             ans=(ans*10)+ digit;
//            i++;
//            x=x/10;
//         }
    
//     return ans;
        int rem,ans=0;
        while(x!=0){
            rem=x%10;
            x=x/10;
            if((ans<INT_MIN/10) || (ans>INT_MAX/10))
            {
                return 0;
            }
            ans=(ans*10)+rem;
                        
        }
        return ans;
    }
};
