class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for (int i = 0; i < arr.size() - 1; i++){
            int big = arr[i + 1];
            for (int j = i +1; j < arr.size(); j++){
                if (arr[j] > big){
                    big = arr[j];
                }
            }
            arr[i] = big;
        }
        arr[arr.size() - 1] = -1;
        return arr;
    }
};