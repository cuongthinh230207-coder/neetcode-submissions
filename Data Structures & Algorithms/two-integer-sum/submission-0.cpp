class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> num;
        for (int i = 0; i < nums.size(); i++){
            int difference = target - nums[i];
            if (num.count(difference)){
                return {num[difference], i};
            }
            num[nums[i]] = i;
        }
        return{};
    }
};
