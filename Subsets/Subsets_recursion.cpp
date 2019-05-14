class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int> > ans;
        vector<int> v;
        sub(ans, v, nums, 0);
        return ans;
    }
    void sub(vector<vector<int> > &ans, vector<int> &v, vector<int>& nums, int begin){
        ans.push_back(v);
        for (int i = begin; i < nums.size(); i++){
            v.push_back(nums[i]);
            sub(ans, v, nums, i + 1);
            v.pop_back();
        }
    }
};
