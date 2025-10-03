#include <iostream>
using namespace std;

class Solution {


   public:

   void recurPerm(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, int freq[]) {
        // If our temporary list "ds" has same size as nums → one permutation is complete
        if (ds.size() == nums.size()) {
            ans.push_back(ds); 
            return;
        }

        // Try every number
        for (int i = 0; i < nums.size(); i++) {
            if (!freq[i]) {  // if nums[i] not used yet
                ds.push_back(nums[i]);  // take nums[i]
                freq[i] = 1;            // mark as used

                recurPerm(ds, nums, ans, freq); // go deeper

                freq[i] = 0;            // unmark (backtrack)
                ds.pop_back();          // remove last element
            }
        }
    
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {

        vector<int>ds;  //dATA  structure to store values [1,2,3]
        vector<vector<int>> ans; // to store vector of vectors  final [[1,2,3],[1,3,2]]
        int freq[nums.size()]; //array of nums.size() it is used as a marker whether an element is used in the arrangement currently or not; 
        
        for(int i=0;i<nums.size();i++) freq[i]=0;
            recurPerm(ds,nums,ans,freq);
            return ans;
        
    }};

    