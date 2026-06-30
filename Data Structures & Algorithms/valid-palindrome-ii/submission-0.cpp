class Solution {
    private:
    bool isPalindrome(string s){
        int len = s.length();
        for (int i = 0; i < len / 2; i++){
            if (s[i] != s[len - 1 - i]){
                return false;
            }
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        if (!isPalindrome(s)){
            for (int i = 0; i < s.length(); i++){
                string temp = s;
                temp.erase(i,1);
                if (isPalindrome(temp)){
                    return true;
                }
                }
                return false;
            }
        else return true;
        }
    
    
};