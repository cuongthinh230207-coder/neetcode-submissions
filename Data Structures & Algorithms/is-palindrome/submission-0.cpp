class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for (int i = 0; i < s.length(); i++){
            if (!isalnum(s[i]))continue;
            str += s[i];
        }
        int len = str.length();
        for (int j = 0; j < str.length(); j++){
            if (tolower(str[j]) != tolower(str[len - j - 1])){
                return false;
            }
        }
        return true;
    }
};
