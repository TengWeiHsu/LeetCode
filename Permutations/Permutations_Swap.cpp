class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> > ans;
        permutation(ans, nums, 0);
        return ans;
    }
    
    void permutation(vector<vector<int> > &ans, vector<int>& nums, int begin){
           if (begin == nums.size() - 1){
               ans.push_back(nums);
               return;
           }
            for (int i = begin; i < nums.size(); i++){
                swap(nums[begin], nums[i]);
                permutation(ans, nums, begin + 1);
                swap(nums[begin], nums[i]);
            }
    }
};
