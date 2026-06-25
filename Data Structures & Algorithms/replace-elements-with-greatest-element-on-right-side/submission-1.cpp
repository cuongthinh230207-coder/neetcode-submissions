class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector <int> ans(arr.size());
        int big = -1;
        for (int i = arr.size() - 1; i >= 0; i--){
            ans[i] = big;
            big = max(big, arr[i]);
        }
        return ans;
    }
};