class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        if(x==0){
            return true;
        }
        int rem,ans=0,num=x;
        while(x>0){
            rem=x%10;
            x=x/10;
            if(ans>INT_MAX/10){
                return false;
            }
            ans=ans*10+rem;
        }
        if(num==ans){
            return true;
        }else{
            return false;
        }
    }
};
