class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())return false;
        int strS[26] = {0};
        int strT[26] = {0};
        for (char c : s){
            if ( c - 'a' >= 0 and c - 'a' <= 25){
                strS[c - 'a'] += 1;
            }
        }
        for (char c : t){
            if ( c - 'a' >= 0 and c - 'a' <= 25){
                strT[c - 'a'] += 1;
            }
        }
        for (int i = 0; i < 26; i++){
            if (strS[i] != strT[i])return false;
        }
        return true;
    }
};
