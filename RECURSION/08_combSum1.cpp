#include <iostream>
using namespace std;
class Solution {

    public:
    void findComb(int ind, int target,vector<int> &a, vector<vector<int>> &ans, vector<int> &ds){
        if(ind==a.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        //picking up the element
        if(a[ind]<= target){
            ds.push_back(a[ind]);
            findComb(ind,target-a[ind],a,ans,ds);
            ds.pop_back();
        }

        //not pick
        findComb(ind+1,target,a,ans,ds);
    }





public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans; //so that we can store vector of vectors of solution like[[2,2,3],[7]] if target =7
        vector<int>ds;
        findComb(0,target,candidates,ans,ds);
        return ans;

        
    }
};