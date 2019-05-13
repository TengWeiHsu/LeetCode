class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> > ans;
        vector<int> v;
        permutation(ans, nums, v, 0);
        return ans;
    }
    
    void permutation(vector<vector<int> > &ans, vector<int>& nums, vector<int>& v, int begin){
           if (begin == nums.size() - 1){
               ans.push_back(nums);
               return;
           }
            for (int i = begin; i < nums.size(); i++){
                swap(nums[begin], nums[i]);
                permutation(ans, nums, v, begin + 1);
                swap(nums[begin], nums[i]);
            }
    }
};
