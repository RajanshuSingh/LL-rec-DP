#include <iostream>
using namespace std;

class Solution {

public:

void f(int ind, int sum, vector<int> &nums, int n, vector<int> &sumSubset){

if(ind==n){
  sumSubset.push_back(sum);
  return;
}

//pick
f(ind+1,sum+nums[ind],nums, n, sumSubset);

//not pick

f(ind+1,sum,nums, n, sumSubset);

}


  public:
    vector<int> subsetSums(vector<int>& nums) {
        //your code goes here
        int n=nums.size();
        vector<int> sumSubset;
       f(0,0,nums,n,sumSubset);
        sort(sumSubset.begin(), sumSubset.end());
        return sumSubset;


    }
};