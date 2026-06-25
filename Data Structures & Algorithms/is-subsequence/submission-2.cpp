class Solution {
    private:
    bool rec(string s, string t, int i, int j){
    if (i == s.length())return true;
    if (j == t.length()) return false;
    if (t[j] == s[i]) return rec(s, t, i+1, j+1);
    else return rec(s, t, i, j + 1);
}
public:

    bool isSubsequence(string s, string t) {
      return rec(s, t, 0, 0);
    }
};