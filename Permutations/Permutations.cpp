class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> > ans;
        vector<int> v;
        permutation(ans, nums, v);
        return ans;
    }
    
    void permutation(vector<vector<int> > &ans, vector<int>& nums, vector<int> &v){
           if (v.size() == nums.size()){
               ans.push_back(v);
               return;
           }
            for (int i = 0; i < nums.size(); i++){
                if (find(v.begin(), v.end(), nums[i]) != v.end()) continue;
                v.push_back(nums[i]);
                permutation(ans, nums, v);
                v.pop_back();
            }
    }
};
