class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        if (len == 0) return 0;
        int count = 0;
        bool hasTouched = false;
        for(int i = len - 1; i >= 0; i--){
            if (isspace(s[i]) and hasTouched == false){
                continue;
            }
            else if (isalpha(s[i]) and  hasTouched == false){
                hasTouched = true;
                count++;
            }
            else if (isalpha(s[i]) and  hasTouched == true){
                count++;
            }
            else if (isspace(s[i]) and hasTouched == true){
                break;
            }
        }
        return count;
    }
};