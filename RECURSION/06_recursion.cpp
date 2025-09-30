//Recursion on subsequences

#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;


void f(int ind,vector <int> &ds, int arr[],int n){
    if(ind>=n){
        for(auto it: ds){
            cout<<it<<" ";

        }
        if(ds.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return; 
    }

    //take the particular index into the subsequence
    ds.push_back(arr[ind]);
   f(ind+1,ds,arr,n);

//not pick or not take condition
    ds.pop_back();
     f(ind+1,ds,arr,n);


}



int main(){

    int arr[3]= {3,1,2};
    int n=3;
    vector<int>ds;
   f(0,ds ,arr,n);

}