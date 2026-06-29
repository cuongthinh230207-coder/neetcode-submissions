class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s, 0);
    }
private:
    void reverse(vector<char> & s, int i){
        if (i < s.size() / 2){
            swap(s[i], s[s.size() - i - 1]);
            reverse(s, ++i);
        }
    }
};