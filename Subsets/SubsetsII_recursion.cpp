class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int> > ans;
        vector<int> v;
        subsets(ans, v, nums, 0);
        return ans;
    }
    void subsets(vector<vector<int> > &ans, vector<int> &v, vector<int>& nums, int begin){
        ans.push_back(v);
        for (int i = begin; i < nums.size(); i++){
            if (i > begin && nums[i] == nums[i - 1]) continue;
            v.push_back(nums[i]);
            subsets(ans, v, nums, i + 1);
            v.pop_back();
        }
    }
};
