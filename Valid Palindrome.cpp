class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                if (s[i] >= 'A' && s[i] <= 'Z') {
                    s[i] = s[i] + 32;
                }
                temp.push_back(s[i]);
            }
        }

        int left = 0, right = temp.length() - 1;
        while (left < right) {
            if (temp[left] != temp[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
