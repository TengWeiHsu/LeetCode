class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN, cur = 0;
        for (int i = 0; i < nums.size(); i++){
            cur += nums[i];
            if (nums[i] > cur){
                cur = nums[i];
            } 
            ans = max(ans, cur);
        }
        return ans;
    }
};
