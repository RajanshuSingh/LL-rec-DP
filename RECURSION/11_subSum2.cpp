#include <iostream>
using namespace std;

class Solution {

 public:

    void f(int ind, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans){
        ans.push_back(ds);
        for(int i=ind;i<nums.size();i++){
            if(i!=ind && nums[i] == nums[i-1]) continue;
            ds.push_back(nums[i]);
            f(i+1,nums,ds,ans);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>> ans;
        
        sort(nums.begin(),nums.end());
        f(0,nums,ds,ans);
        return ans;

    }
};